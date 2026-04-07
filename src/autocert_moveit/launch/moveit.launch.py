#!/usr/bin/env python3
"""
Launches MoveIt2 move_group with dynamic robot configuration.

Fixed:
  - planning_pipelines.pipeline_names is now a Python list (string_array),
    NOT a string — this was causing the ParameterTypeException crash.
  - planning_plugin is under the 'ompl' namespace key, NOT under 'move_group' —
    this was causing "Planning plugin name is empty" crash.
  - request_adapters is a single concatenated string, NOT a tuple.
  - Added explicit 'default_planner_config' per planning group.
"""

import os
import yaml
import subprocess

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def load_robot_description(urdf_file: str, xacro_args: str = '') -> str:
    """Process URDF or xacro file into a raw XML string."""
    urdf_file = os.path.expanduser(urdf_file)
    if not os.path.exists(urdf_file):
        raise FileNotFoundError(f'URDF/xacro not found: {urdf_file}')

    if urdf_file.endswith('.xacro'):
        cmd = ['xacro', urdf_file]
        if xacro_args:
            cmd.extend(xacro_args.split())
        result = subprocess.run(cmd, capture_output=True, text=True, check=True)
        if not result.stdout:
            raise RuntimeError(f'xacro produced empty output for: {urdf_file}')
        return result.stdout

    with open(urdf_file, 'r') as f:
        return f.read()


def load_file(path: str) -> str:
    """Read a text file, returning empty string if it does not exist."""
    path = os.path.expanduser(path)
    if not path or not os.path.exists(path):
        return ''
    with open(path, 'r') as f:
        return f.read()


def load_yaml(path: str) -> dict:
    """Load a YAML file into a dict, returning {} if not found."""
    path = os.path.expanduser(path)
    if not path or not os.path.exists(path):
        return {}
    with open(path, 'r') as f:
        data = yaml.safe_load(f)
    return data or {}


def launch_setup(context, *args, **kwargs):
    """
    OpaqueFunction: resolves all LaunchConfigurations at runtime and
    constructs the move_group and robot_state_publisher nodes.
    """

    # ── Resolve all launch arguments ──────────────────────────────────────
    urdf_file       = LaunchConfiguration('urdf_file').perform(context)
    srdf_file       = LaunchConfiguration('srdf_file').perform(context)
    xacro_args      = LaunchConfiguration('xacro_args').perform(context)
    planning_group  = LaunchConfiguration('planning_group').perform(context)
    ee_link         = LaunchConfiguration('end_effector_link').perform(context)
    ref_frame       = LaunchConfiguration('reference_frame').perform(context)
    robot_name      = LaunchConfiguration('robot_name').perform(context)
    controllers_file = LaunchConfiguration('controllers_file').perform(context)
    kinematics_file  = LaunchConfiguration('kinematics_file').perform(context)

    # ── Load robot model ───────────────────────────────────────────────────
    robot_description          = load_robot_description(urdf_file, xacro_args)
    robot_description_semantic = load_file(srdf_file)

    if not robot_description:
        raise RuntimeError(f'robot_description is empty — check urdf_file: {urdf_file}')

    if not robot_description_semantic:
        print(
            f'[WARNING] SRDF is empty (srdf_file="{srdf_file}"). '
            'Planning groups may not be defined.'
        )

    # ── Kinematics ─────────────────────────────────────────────────────────
    if kinematics_file and os.path.exists(os.path.expanduser(kinematics_file)):
        kinematics_config = load_yaml(kinematics_file)
    else:
        # KDL is the universal fallback — works for any robot without extra config
        kinematics_config = {
            planning_group: {
                'kinematics_solver': 'kdl_kinematics_plugin/KDLKinematicsPlugin',
                'kinematics_solver_search_resolution': 0.005,
                'kinematics_solver_timeout': 0.005,
            }
        }

    # ── OMPL Planning Pipeline ─────────────────────────────────────────────
    #
    # CRITICAL: Two separate errors existed here in the previous version:
    #
    #  ERROR 1 — ParameterTypeException: "expected [string_array] got [string]"
    #    CAUSE : pipeline_names was not present at all / passed as string
    #    FIX   : planning_pipelines.pipeline_names MUST be a Python list ['ompl']
    #
    #  ERROR 2 — "Planning plugin name is empty or not defined in namespace move_group"
    #    CAUSE : planning_plugin was nested under 'move_group' key:
    #              {'move_group': {'planning_plugin': ...}}
    #            which creates parameter move_group.planning_plugin — WRONG.
    #            MoveIt2 Jazzy looks for it under the pipeline name namespace: ompl.planning_plugin
    #    FIX   : planning_plugin goes directly under 'ompl' key:
    #              {'ompl': {'planning_plugin': ...}}
    #
    #  ERROR 3 — request_adapters was a Python tuple (created by trailing comma in parens)
    #    FIX   : Use a single string with implicit concatenation (no commas)
    #
    ompl_pipeline_config = {
        # ← MUST be a list (string_array), not a string
        'planning_pipelines': {
            'pipeline_names': ['ompl']
        },
        # ← MUST be under 'ompl' key, NOT under 'move_group' key
        'ompl': {
            'planning_plugin': 'ompl_interface/OMPLPlanner',
            # ← MUST be a single string (implicit concatenation), NOT a tuple
            'request_adapters': (
                'default_planner_request_adapters/AddTimeOptimalParameterization '
                'default_planner_request_adapters/FixWorkspaceBounds '
                'default_planner_request_adapters/FixStartStateBounds '
                'default_planner_request_adapters/FixStartStateCollision '
                'default_planner_request_adapters/FixStartStatePathConstraints'
            ),
            'start_state_max_bounds_error': 0.1,
            # Per-group default planner — uses whatever group name is passed
            planning_group: {
                'default_planner_config': 'RRTConnect',
            },
        },
    }

    # ── Controller Manager ─────────────────────────────────────────────────
    if controllers_file and os.path.exists(os.path.expanduser(controllers_file)):
        controllers_config = load_yaml(controllers_file)
    else:
        # Generic fallback controller — robot-agnostic name derived from group
        controller_name = f'{planning_group}_controller'
        controllers_config = {
            'moveit_simple_controller_manager': {
                'controller_names': [controller_name],
                controller_name: {
                    'type': 'FollowJointTrajectory',
                    'action_ns': 'follow_joint_trajectory',
                    'default': True,
                },
            },
            'moveit_manage_controllers': True,
        }

    # ── move_group Node ────────────────────────────────────────────────────
    move_group_node = Node(
        package='moveit_ros_move_group',
        executable='move_group',
        output='screen',
        parameters=[
            # 1. Robot model
            {'robot_description':          robot_description},
            {'robot_description_semantic': robot_description_semantic},
            {'robot_description_kinematics': kinematics_config},
            # 2. Planning pipeline — MUST come before general params
            ompl_pipeline_config,
            # 3. Controller manager
            controllers_config,
            # 4. General move_group settings
            {
                'planning_group':            planning_group,
                'end_effector_link':         ee_link,
                'reference_frame':           ref_frame,
                'robot_name':                robot_name,
                'publish_planning_scene_hz': 25.0,
                'allow_trajectory_execution': True,
                'max_safe_path_cost':        1.0,
                'jiggle_fraction':           0.05,
                'default_workspace_bounds':  2.0,
                'monitor_dynamics':          False,
            },
        ],
    )

    # ── robot_state_publisher Node ─────────────────────────────────────────
    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}],
    )

    return [rsp_node, move_group_node]


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'urdf_file', default_value='',
            description='Absolute path to robot URDF or xacro file (required)'
        ),
        DeclareLaunchArgument(
            'srdf_file', default_value='',
            description='Absolute path to robot SRDF file'
        ),
        DeclareLaunchArgument(
            'xacro_args', default_value='',
            description='Additional xacro arguments as space-separated key:=value pairs'
        ),
        DeclareLaunchArgument(
            'planning_group', default_value='arm',
            description='MoveIt2 planning group name (must match SRDF)'
        ),
        DeclareLaunchArgument(
            'end_effector_link', default_value='tool0',
            description='End-effector link name (must match URDF)'
        ),
        DeclareLaunchArgument(
            'reference_frame', default_value='base_link',
            description='Robot base/reference frame'
        ),
        DeclareLaunchArgument(
            'robot_name', default_value='robot',
            description='Robot name identifier'
        ),
        DeclareLaunchArgument(
            'controllers_file', default_value='',
            description='Path to controller manager YAML (optional)'
        ),
        DeclareLaunchArgument(
            'kinematics_file', default_value='',
            description='Path to kinematics YAML (optional, defaults to KDL)'
        ),
        OpaqueFunction(function=launch_setup),
    ])