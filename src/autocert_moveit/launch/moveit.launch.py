#!/usr/bin/env python3
"""
Launches MoveIt2 move_group with dynamic robot configuration.

Responsibility:
  - Loads robot_description and robot_description_semantic from file paths
  - Constructs move_group and robot_state_publisher nodes
  - Can be used standalone OR included by full_pipeline.launch.py

Fixed:
  - pipeline_names is written as a proper YAML sequence (string_array)
  - request_adapters is a YAML list (string_array), not a folded scalar
  - ompl_pipeline YAML uses /**:  wildcard scope — MoveIt2 Jazzy 2.12.x
    PlanningPipeline::configure() reads ompl.planning_plugin from the node's
    parameter store; node-scoped YAML fails silently in this version because
    the pipeline is constructed before all scoped params are resolved.
    Wildcard scope guarantees the parameter is visible at construction time.
  - Top-level YAML key has NO leading slash
"""

import os
import subprocess
import yaml
import tempfile

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


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
    """OpaqueFunction: loads model files and constructs nodes."""

    urdf_file        = LaunchConfiguration('urdf_file').perform(context)
    srdf_file        = LaunchConfiguration('srdf_file').perform(context)
    xacro_args       = LaunchConfiguration('xacro_args').perform(context)
    planning_group   = LaunchConfiguration('planning_group').perform(context)
    ee_link          = LaunchConfiguration('end_effector_link').perform(context)
    ref_frame        = LaunchConfiguration('reference_frame').perform(context)
    robot_name       = LaunchConfiguration('robot_name').perform(context)
    controllers_file = LaunchConfiguration('controllers_file').perform(context)
    kinematics_file  = LaunchConfiguration('kinematics_file').perform(context)

    # ── Load robot model from disk ─────────────────────────────────────────
    robot_description          = load_robot_description(urdf_file, xacro_args)
    robot_description_semantic = load_file(srdf_file)

    if not robot_description:
        raise RuntimeError(f'robot_description is empty — check urdf_file: {urdf_file}')
    if not robot_description_semantic:
        print(f'[WARNING] SRDF is empty or not found: {srdf_file}')

    # ── Kinematics ─────────────────────────────────────────────────────────
    if kinematics_file and os.path.exists(os.path.expanduser(kinematics_file)):
        kinematics_config = load_yaml(kinematics_file)
    else:
        kinematics_config = {
            planning_group: {
                'kinematics_solver': 'kdl_kinematics_plugin/KDLKinematicsPlugin',
                'kinematics_solver_search_resolution': 0.005,
                'kinematics_solver_timeout': 0.005,
            }
        }

    # ── OMPL Planning Pipeline ─────────────────────────────────────────────
    #
    # FIX: Use /**:  (wildcard) scope instead of "move_group:" scope.
    #
    # In MoveIt2 2.12.4 (Jazzy), PlanningPipeline::configure() is called
    # during MoveItCpp construction before all node-scoped parameters are
    # fully resolved. Using /**:  scope stores the parameters process-wide
    # so they are visible at the exact moment configure() reads them.
    #
    # Rules enforced:
    #   1. /**:  scope → parameters visible to ALL nodes in this process
    #   2. pipeline_names → YAML list (string_array) ← fixed in previous round
    #   3. request_adapters → YAML list (string_array) ← fixed in previous round
    #   4. planning_plugin lives under the pipeline key ("ompl:"), not at root
    #
    ompl_yaml_str = (
        "/**:\n"                             # ← KEY FIX: wildcard, not "move_group:"
        "  ros__parameters:\n"
        "    planning_pipelines:\n"
        "      pipeline_names:\n"
        "        - ompl\n"
        "    default_planning_pipeline: ompl\n"
        "    ompl:\n"
        "      planning_plugin: ompl_interface/OMPLPlanner\n"
        "      request_adapters:\n"
        "        - default_planning_request_adapters/ResolveConstraintFrames\n"
        "        - default_planning_request_adapters/ValidateWorkspaceBounds\n"
        "        - default_planning_request_adapters/CheckStartStateBounds\n"
        "        - default_planning_request_adapters/CheckStartStateCollision\n"
        "      response_adapters:\n"
        "        - default_planning_response_adapters/AddTimeOptimalParameterization\n"
        "        - default_planning_response_adapters/ValidateSolution\n"
        "        - default_planning_response_adapters/DisplayMotionPath\n"
        "      start_state_max_bounds_error: 0.1\n"
        "      jiggle_fraction: 0.05\n"
        "      planner_configs:\n"
        "        RRTConnect:\n"
        "          type: geometric::RRTConnect\n"
        "          range: 0.0\n"
        "        RRT:\n"
        "          type: geometric::RRT\n"
        "          range: 0.0\n"
        "          goal_bias: 0.05\n"
        f"    ompl.{planning_group}:\n"
        "      planner_configs:\n"
        "        - RRTConnect\n"
    )

    with tempfile.NamedTemporaryFile(
        mode='w', suffix='.yaml', delete=False, prefix='ompl_pipeline_'
    ) as _f:
        _f.write(ompl_yaml_str)
        ompl_params_file = _f.name

    # ── Controller Manager ─────────────────────────────────────────────────
    if controllers_file and os.path.exists(os.path.expanduser(controllers_file)):
        controllers_config = load_yaml(controllers_file)
    else:
        ctrl = f'{planning_group}_controller'
        controllers_config = {
            'moveit_simple_controller_manager': {
                'controller_names': [ctrl],
                ctrl: {
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
            # Robot model
            {'robot_description':          robot_description},
            {'robot_description_semantic': robot_description_semantic},
            {'robot_description_kinematics': kinematics_config},
            # Planning pipeline (/**:  scoped — visible at pipeline construction)
            ompl_params_file,
            # Controller manager
            controllers_config,
            # General move_group settings
            {
                'planning_group':             planning_group,
                'end_effector_link':          ee_link,
                'reference_frame':            ref_frame,
                'robot_name':                 robot_name,
                'publish_planning_scene_hz':  25.0,
                'allow_trajectory_execution': True,
                'max_safe_path_cost':         1.0,
                'jiggle_fraction':            0.05,
                'default_workspace_bounds':   2.0,
                'monitor_dynamics':           False,
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
        DeclareLaunchArgument('urdf_file',  default_value='',
                              description='Absolute path to robot URDF or xacro (required)'),
        DeclareLaunchArgument('srdf_file',  default_value='',
                              description='Absolute path to robot SRDF file'),
        DeclareLaunchArgument('xacro_args', default_value=''),
        DeclareLaunchArgument('planning_group',    default_value='arm'),
        DeclareLaunchArgument('end_effector_link', default_value='tool0'),
        DeclareLaunchArgument('reference_frame',   default_value='base_link'),
        DeclareLaunchArgument('robot_name',        default_value='robot'),
        DeclareLaunchArgument('controllers_file',  default_value=''),
        DeclareLaunchArgument('kinematics_file',   default_value=''),
        OpaqueFunction(function=launch_setup),
    ])