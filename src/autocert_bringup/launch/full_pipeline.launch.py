"""
Full AutoCert Pipeline Launch File

Brings up:
  1. robot_state_publisher
  2. move_group (MoveIt2)
  3. execution_node
  4. experiment_node

Usage:
  ros2 launch autocert_bringup full_pipeline.launch.py \
    urdf_file:=/path/to/robot.urdf \
    srdf_file:=/path/to/robot.srdf \
    planning_group:=arm \
    end_effector_link:=tool0 \
    reference_frame:=base_link
"""

import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
    GroupAction,
    OpaqueFunction
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    moveit_pkg = get_package_share_directory('autocert_moveit')
    execution_pkg = get_package_share_directory('autocert_execution')
    experiment_pkg = get_package_share_directory('autocert_experiment')

    # ── Declare shared arguments ───────────────────────────────────────────
    args = [
        # Robot model
        DeclareLaunchArgument('urdf_file', default_value='',
                              description='Path to URDF/xacro (required)'),
        DeclareLaunchArgument('srdf_file', default_value='',
                              description='Path to SRDF file'),
        DeclareLaunchArgument('xacro_args', default_value=''),
        DeclareLaunchArgument('controllers_file', default_value=''),
        DeclareLaunchArgument('kinematics_file', default_value=''),

        # Robot identity — no defaults that could mislead
        DeclareLaunchArgument('robot_name', default_value='robot'),
        DeclareLaunchArgument('planning_group', default_value='arm'),
        DeclareLaunchArgument('end_effector_link', default_value='tool0'),
        DeclareLaunchArgument('reference_frame', default_value='base_link'),

        # Planner settings
        DeclareLaunchArgument('planner_id', default_value='RRTConnect'),
        DeclareLaunchArgument('planning_time', default_value='5.0'),
        DeclareLaunchArgument('velocity_scaling', default_value='0.3'),
        DeclareLaunchArgument('acceleration_scaling', default_value='0.3'),

        # Experiment settings
        DeclareLaunchArgument(
            'config_file',
            default_value=os.path.join(
                experiment_pkg, 'config', 'experiment_config.yaml'
            )
        ),
        DeclareLaunchArgument('output_file', default_value=''),
        DeclareLaunchArgument('run_id', default_value='run_001'),
        DeclareLaunchArgument(
            'robot_mode', default_value='simulation',
            choices=['simulation', 'real']
        ),
    ]

    # ── 1. MoveIt2 (move_group + robot_state_publisher) ────────────────────
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(moveit_pkg, 'launch', 'moveit.launch.py')
        ),
        launch_arguments={
            'urdf_file': LaunchConfiguration('urdf_file'),
            'srdf_file': LaunchConfiguration('srdf_file'),
            'xacro_args': LaunchConfiguration('xacro_args'),
            'planning_group': LaunchConfiguration('planning_group'),
            'end_effector_link': LaunchConfiguration('end_effector_link'),
            'reference_frame': LaunchConfiguration('reference_frame'),
            'robot_name': LaunchConfiguration('robot_name'),
            'controllers_file': LaunchConfiguration('controllers_file'),
            'kinematics_file': LaunchConfiguration('kinematics_file'),
        }.items()
    )

    # ── 2. Execution node (delayed to allow move_group to start) ───────────
    execution_launch = TimerAction(
        period=5.0,  # wait for move_group
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(execution_pkg, 'launch', 'execution.launch.py')
                ),
                launch_arguments={
                    'planning_group': LaunchConfiguration('planning_group'),
                    'end_effector_link': LaunchConfiguration('end_effector_link'),
                    'reference_frame': LaunchConfiguration('reference_frame'),
                    'planner_id': LaunchConfiguration('planner_id'),
                    'planning_time': LaunchConfiguration('planning_time'),
                    'velocity_scaling': LaunchConfiguration('velocity_scaling'),
                    'acceleration_scaling': LaunchConfiguration('acceleration_scaling'),
                }.items()
            )
        ]
    )

    # ── 3. Experiment node (delayed further) ───────────────────────────────
    experiment_node = TimerAction(
        period=10.0,  # wait for execution_node
        actions=[
            Node(
                package='autocert_experiment',
                executable='experiment_node',
                name='experiment_node',
                output='screen',
                parameters=[{
                    'config_file': LaunchConfiguration('config_file'),
                    'output_file': LaunchConfiguration('output_file'),
                    'run_id': LaunchConfiguration('run_id'),
                    'robot_mode': LaunchConfiguration('robot_mode'),
                    'planning_group': LaunchConfiguration('planning_group'),
                    'end_effector_link': LaunchConfiguration('end_effector_link'),
                    'reference_frame': LaunchConfiguration('reference_frame'),
                    'planner_id': LaunchConfiguration('planner_id'),
                    'planning_time': LaunchConfiguration('planning_time'),
                    'velocity_scaling': LaunchConfiguration('velocity_scaling'),
                    'acceleration_scaling': LaunchConfiguration('acceleration_scaling'),
                }]
            )
        ]
    )

    return LaunchDescription(args + [moveit_launch, execution_launch, experiment_node])