"""Launch the execution node with robot-specific overrides."""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory('autocert_execution')
    default_params = os.path.join(pkg, 'config', 'execution_params.yaml')

    return LaunchDescription([
        DeclareLaunchArgument('planning_group', default_value='arm'),
        DeclareLaunchArgument('end_effector_link', default_value='tool0'),
        DeclareLaunchArgument('reference_frame', default_value='base_link'),
        DeclareLaunchArgument('planner_id', default_value='RRTConnect'),
        DeclareLaunchArgument('planning_time', default_value='5.0'),
        DeclareLaunchArgument('velocity_scaling', default_value='0.3'),
        DeclareLaunchArgument('acceleration_scaling', default_value='0.3'),

        Node(
            package='autocert_execution',
            executable='execution_node',
            name='execution_node',
            output='screen',
            parameters=[
                default_params,
                {
                    'planning_group': LaunchConfiguration('planning_group'),
                    'end_effector_link': LaunchConfiguration('end_effector_link'),
                    'reference_frame': LaunchConfiguration('reference_frame'),
                    'planner_id': LaunchConfiguration('planner_id'),
                    'planning_time': LaunchConfiguration('planning_time'),
                    'velocity_scaling': LaunchConfiguration('velocity_scaling'),
                    'acceleration_scaling': LaunchConfiguration('acceleration_scaling'),
                }
            ],
        ),
    ])