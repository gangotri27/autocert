"""
Full AutoCert Pipeline Launch File

Architecture:
  - Passes only file PATHS via launch_arguments (small strings — safe)
  - Each child launch file loads content from those paths itself (modular)
  - Large XML never travels through launch_arguments
  - Single source of truth = the files on disk

Brings up:
  1. robot_state_publisher + move_group  (via autocert_moveit/moveit.launch.py)
  2. execution_node                       (via autocert_execution/execution.launch.py)
  3. experiment_node
"""

import os
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
    OpaqueFunction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def launch_setup(context, *args, **kwargs):

    moveit_pkg    = get_package_share_directory('autocert_moveit')
    execution_pkg = get_package_share_directory('autocert_execution')

    # ── Resolve small launch arguments (paths, names, scalars) ────────────
    urdf_file        = LaunchConfiguration('urdf_file').perform(context)
    srdf_file        = LaunchConfiguration('srdf_file').perform(context)
    xacro_args       = LaunchConfiguration('xacro_args').perform(context)
    controllers_file = LaunchConfiguration('controllers_file').perform(context)
    kinematics_file  = LaunchConfiguration('kinematics_file').perform(context)
    robot_name       = LaunchConfiguration('robot_name').perform(context)
    planning_group   = LaunchConfiguration('planning_group').perform(context)
    ee_link          = LaunchConfiguration('end_effector_link').perform(context)
    ref_frame        = LaunchConfiguration('reference_frame').perform(context)
    planner_id       = LaunchConfiguration('planner_id').perform(context)
    planning_time    = LaunchConfiguration('planning_time').perform(context)
    vel_scale        = LaunchConfiguration('velocity_scaling').perform(context)
    acc_scale        = LaunchConfiguration('acceleration_scaling').perform(context)
    config_file      = LaunchConfiguration('config_file').perform(context)
    output_file      = LaunchConfiguration('output_file').perform(context)
    run_id           = LaunchConfiguration('run_id').perform(context)
    robot_mode       = LaunchConfiguration('robot_mode').perform(context)

    # ── 1. MoveIt2 (rsp + move_group) ─────────────────────────────────────
    #   Passes only file PATHS — moveit.launch.py loads content itself.
    #   No large XML through launch_arguments.
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(moveit_pkg, 'launch', 'moveit.launch.py')
        ),
        launch_arguments={
            'urdf_file':        urdf_file,         # small path string ✓
            'srdf_file':        srdf_file,          # small path string ✓
            'xacro_args':       xacro_args,
            'planning_group':   planning_group,
            'end_effector_link': ee_link,
            'reference_frame':  ref_frame,
            'robot_name':       robot_name,
            'controllers_file': controllers_file,
            'kinematics_file':  kinematics_file,
        }.items()
    )

    # ── 2. Execution node (delay 8 s for move_group to fully start) ────────
    #   Passes only file PATHS — execution.launch.py loads content and
    #   injects it as Node parameters (the safe way for large XML).
    execution_launch = TimerAction(
        period=10.0,
        actions=[
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(execution_pkg, 'launch', 'execution.launch.py')
                ),
                launch_arguments={
                    'urdf_file':         urdf_file,   # small path string ✓
                    'srdf_file':         srdf_file,    # small path string ✓
                    'xacro_args':        xacro_args,
                    'planning_group':    planning_group,
                    'end_effector_link': ee_link,
                    'reference_frame':   ref_frame,
                    'planner_id':        planner_id,
                    'planning_time':     planning_time,
                    'velocity_scaling':  vel_scale,
                    'acceleration_scaling': acc_scale,
                }.items()
            )
        ]
    )

    # ── 3. Experiment node (delay 15 s for execution_node to be ready) ─────
    experiment_node = TimerAction(
        period=25.0,
        actions=[
            Node(
                package='autocert_experiment',
                executable='experiment_node',
                name='experiment_node',
                output='screen',
                arguments=[
                    '--config', config_file,
                    '--output', output_file,
                    '--run-id', run_id,
                ],
                parameters=[{
                    'robot_mode':            robot_mode,
                    'planning_group':        planning_group,
                    'end_effector_link':     ee_link,
                    'reference_frame':       ref_frame,
                    'planner_id':            planner_id,
                    'planning_time':         float(planning_time),
                    'velocity_scaling':      float(vel_scale),
                    'acceleration_scaling':  float(acc_scale),
                }]
            )
        ]
    )

    return [moveit_launch, execution_launch, experiment_node]


def generate_launch_description():
    experiment_pkg = get_package_share_directory('autocert_experiment')

    return LaunchDescription([
        # Robot model files (paths only — never content)
        DeclareLaunchArgument('urdf_file', default_value='',
                              description='Path to URDF/xacro (required)'),
        DeclareLaunchArgument('srdf_file', default_value='',
                              description='Path to SRDF file'),
        DeclareLaunchArgument('xacro_args', default_value=''),
        DeclareLaunchArgument('controllers_file', default_value=''),
        DeclareLaunchArgument('kinematics_file', default_value=''),

        # Robot identity
        DeclareLaunchArgument('robot_name',        default_value='robot'),
        DeclareLaunchArgument('planning_group',    default_value='arm'),
        DeclareLaunchArgument('end_effector_link', default_value='tool0'),
        DeclareLaunchArgument('reference_frame',   default_value='base_link'),

        # Planner settings
        DeclareLaunchArgument('planner_id',            default_value='RRTConnect'),
        DeclareLaunchArgument('planning_time',          default_value='5.0'),
        DeclareLaunchArgument('velocity_scaling',       default_value='0.3'),
        DeclareLaunchArgument('acceleration_scaling',   default_value='0.3'),

        # Experiment settings
        DeclareLaunchArgument(
            'config_file',
            default_value=os.path.join(
                experiment_pkg, 'config', 'experiment_config.yaml'
            )
        ),
        DeclareLaunchArgument('output_file', default_value=''),
        DeclareLaunchArgument('run_id',      default_value='run_001'),
        DeclareLaunchArgument(
            'robot_mode', default_value='simulation',
            choices=['simulation', 'real']
        ),

        OpaqueFunction(function=launch_setup),
    ])