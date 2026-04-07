"""
Launches the MoveIt2 move_group node with dynamic robot configuration.
All parameters are injected — no hardcoding of robot-specific values.
"""

import os
import yaml
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from ament_index_python.packages import get_package_share_directory
import subprocess


def load_robot_description(urdf_file: str, xacro_args: str = '') -> str:
    """Process URDF/xacro file into string."""
    urdf_file = os.path.expanduser(urdf_file)
    if urdf_file.endswith('.xacro'):
        cmd = ['xacro', urdf_file]
        if xacro_args:
            cmd.extend(xacro_args.split())
        result = subprocess.run(cmd, capture_output=True, text=True, check=True)
        return result.stdout
    with open(urdf_file, 'r') as f:
        return f.read()


def load_file(path: str) -> str:
    path = os.path.expanduser(path)
    if not os.path.exists(path):
        return ''
    with open(path, 'r') as f:
        return f.read()


def load_yaml(path: str) -> dict:
    path = os.path.expanduser(path)
    if not os.path.exists(path):
        return {}
    with open(path, 'r') as f:
        return yaml.safe_load(f) or {}


def launch_setup(context, *args, **kwargs):
    """OpaqueFunction: build nodes after context is available."""

    urdf_file = LaunchConfiguration('urdf_file').perform(context)
    srdf_file = LaunchConfiguration('srdf_file').perform(context)
    xacro_args = LaunchConfiguration('xacro_args').perform(context)
    planning_group = LaunchConfiguration('planning_group').perform(context)
    end_effector_link = LaunchConfiguration('end_effector_link').perform(context)
    reference_frame = LaunchConfiguration('reference_frame').perform(context)
    robot_name = LaunchConfiguration('robot_name').perform(context)
    controllers_file = LaunchConfiguration('controllers_file').perform(context)
    kinematics_file = LaunchConfiguration('kinematics_file').perform(context)

    # ── Load descriptions ──────────────────────────────────────────────────
    robot_description = load_robot_description(urdf_file, xacro_args)
    robot_description_semantic = load_file(srdf_file)

    if not robot_description:
        raise RuntimeError(f'Failed to load URDF from: {urdf_file}')

    # ── Kinematics config ──────────────────────────────────────────────────
    kinematics_config = {}
    if kinematics_file and os.path.exists(os.path.expanduser(kinematics_file)):
        kinematics_config = load_yaml(kinematics_file)
    else:
        # Default KDL kinematics (works for any robot)
        kinematics_config = {
            planning_group: {
                'kinematics_solver': 'kdl_kinematics_plugin/KDLKinematicsPlugin',
                'kinematics_solver_search_resolution': 0.005,
                'kinematics_solver_timeout': 0.005,
            }
        }

    # ── OMPL planning pipeline ─────────────────────────────────────────────
    ompl_config = load_yaml(
        os.path.join(
            get_package_share_directory('autocert_moveit'),
            'config', 'moveit_params.yaml'
        )
    )

    ompl_planning_pipeline = {
        'move_group': {
            'planning_plugin': 'ompl_interface/OMPLPlanner',
            'request_adapters': (
                'default_planner_request_adapters/AddTimeOptimalParameterization '
                'default_planner_request_adapters/FixWorkspaceBounds '
                'default_planner_request_adapters/FixStartStateBounds '
                'default_planner_request_adapters/FixStartStateCollision '
                'default_planner_request_adapters/FixStartStatePathConstraints'
            ),
            'start_state_max_bounds_error': 0.1,
        }
    }

    # ── Controllers ─────────────────────────────────────────────────────────
    controllers_config = {}
    if controllers_file and os.path.exists(os.path.expanduser(controllers_file)):
        controllers_config = load_yaml(controllers_file)
    else:
        # Generic fallback: single trajectory controller
        controller_name = f'{planning_group}_controller'
        controllers_config = {
            'moveit_simple_controller_manager': {
                'controller_names': [controller_name],
                controller_name: {
                    'type': 'FollowJointTrajectory',
                    'action_ns': 'follow_joint_trajectory',
                    'default': True,
                }
            },
            'moveit_manage_controllers': True,
        }

    # ── move_group node ────────────────────────────────────────────────────
    move_group_node = Node(
        package='moveit_ros_move_group',
        executable='move_group',
        output='screen',
        parameters=[
            {'robot_description': robot_description},
            {'robot_description_semantic': robot_description_semantic},
            {'robot_description_kinematics': kinematics_config},
            ompl_planning_pipeline,
            controllers_config,
            {
                'planning_group': planning_group,
                'end_effector_link': end_effector_link,
                'reference_frame': reference_frame,
                'robot_name': robot_name,
                'publish_planning_scene_hz': 25.0,
                'allow_trajectory_execution': True,
                'max_safe_path_cost': 1.0,
                'jiggle_fraction': 0.05,
                'default_workspace_bounds': 2.0,
                'monitor_dynamics': False,
            }
        ],
    )

    # ── robot_state_publisher ──────────────────────────────────────────────
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}],
    )

    return [robot_state_publisher_node, move_group_node]


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('urdf_file', default_value='',
                              description='Path to URDF or xacro file (required)'),
        DeclareLaunchArgument('srdf_file', default_value='',
                              description='Path to SRDF file'),
        DeclareLaunchArgument('xacro_args', default_value='',
                              description='Additional xacro arguments'),
        DeclareLaunchArgument('planning_group', default_value='arm',
                              description='MoveIt planning group name'),
        DeclareLaunchArgument('end_effector_link', default_value='tool0',
                              description='End-effector link name'),
        DeclareLaunchArgument('reference_frame', default_value='base_link',
                              description='Reference/base frame'),
        DeclareLaunchArgument('robot_name', default_value='robot',
                              description='Robot name identifier'),
        DeclareLaunchArgument('controllers_file', default_value='',
                              description='Path to controllers YAML'),
        DeclareLaunchArgument('kinematics_file', default_value='',
                              description='Path to kinematics YAML'),
        OpaqueFunction(function=launch_setup),
    ])