"""
Launch the execution node with robot-specific configuration.

Responsibility:
  - Receives file PATHS (small strings) from parent launch or CLI
  - Loads robot_description and SRDF content from those paths
  - Injects content into execution_node via Node parameters (safe for large XML)
  - Can be used standalone OR included by full_pipeline.launch.py

Key design rules:
  1. Large XML content is NEVER passed via launch_arguments.
     It travels exclusively through Node parameters.
  2. The default_params YAML file uses "/**:" wildcard scope — if we load it
     first and then pass robot_description as a plain dict, ROS 2 Jazzy's
     parameter resolution can silently drop the dict entries because the
     wildcard file wins.  Solution: place the robot model dicts AFTER the
     YAML file in the parameters list so they take precedence, AND declare
     robot_description / robot_description_semantic with explicit node-scoped
     keys so the wildcard cannot shadow them.
  3. We write a second small temp YAML that scopes robot_description under
     the node name "execution_node" — this guarantees it is never swallowed
     by the "/**:" wildcard in execution_params.yaml.
"""

import os
import subprocess
import tempfile
import yaml

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


def write_robot_description_yaml(
    node_name: str,
    robot_description: str,
    robot_description_semantic: str,
) -> str:
    """
    Write robot_description and robot_description_semantic into a temp YAML
    scoped under the node name so they are never shadowed by a "/**:" wildcard.

    Resulting YAML structure:
        execution_node:
          ros__parameters:
            robot_description: "<xml ...>"
            robot_description_semantic: "<robot ...>"
    """
    # yaml.dump handles escaping of quotes, newlines, etc. inside the XML
    data = {
        node_name: {
            'ros__parameters': {
                'robot_description': robot_description,
                'robot_description_semantic': robot_description_semantic,
            }
        }
    }
    with tempfile.NamedTemporaryFile(
        mode='w', suffix='.yaml', delete=False, prefix='robot_desc_'
    ) as f:
        yaml.dump(data, f, default_flow_style=False, allow_unicode=True)
        return f.name


def launch_setup(context, *args, **kwargs):
    """OpaqueFunction: loads model files and constructs execution_node."""

    execution_pkg = get_package_share_directory('autocert_execution')
    default_params = os.path.join(execution_pkg, 'config', 'execution_params.yaml')

    urdf_file      = LaunchConfiguration('urdf_file').perform(context)
    srdf_file      = LaunchConfiguration('srdf_file').perform(context)
    xacro_args     = LaunchConfiguration('xacro_args').perform(context)
    planning_group = LaunchConfiguration('planning_group').perform(context)
    ee_link        = LaunchConfiguration('end_effector_link').perform(context)
    ref_frame      = LaunchConfiguration('reference_frame').perform(context)
    planner_id     = LaunchConfiguration('planner_id').perform(context)
    planning_time  = LaunchConfiguration('planning_time').perform(context)
    vel_scale      = LaunchConfiguration('velocity_scaling').perform(context)
    acc_scale      = LaunchConfiguration('acceleration_scaling').perform(context)

    # ── Load descriptions from disk ────────────────────────────────────────
    robot_description          = load_robot_description(urdf_file, xacro_args)
    robot_description_semantic = load_file(srdf_file)

    if not robot_description:
        raise RuntimeError(f'robot_description is empty — check urdf_file: {urdf_file}')
    if not robot_description_semantic:
        print(f'[WARNING] SRDF empty or not found: {srdf_file}')

    # ── Write robot model to a node-scoped YAML ────────────────────────────
    # This prevents the "/**:" wildcard in execution_params.yaml from shadowing
    # the robot_description parameter.  Node-scoped params always win over
    # wildcard-scoped params in ROS 2 Jazzy parameter resolution.
    robot_desc_yaml = write_robot_description_yaml(
        node_name='execution_node',
        robot_description=robot_description,
        robot_description_semantic=robot_description_semantic,
    )

    execution_node = Node(
        package='autocert_execution',
        executable='execution_node',
        name='execution_node',
        output='screen',
        parameters=[
            # 1. Wildcard defaults first (lowest priority)
            default_params,
            # 2. Node-scoped robot model (overrides wildcard — guaranteed)
            robot_desc_yaml,
            # 3. Runtime overrides from launch arguments (highest priority)
            {
                'planning_group':       planning_group,
                'end_effector_link':    ee_link,
                'reference_frame':      ref_frame,
                'planner_id':           planner_id,
                'planning_time':        float(planning_time),
                'velocity_scaling':     float(vel_scale),
                'acceleration_scaling': float(acc_scale),
            },
        ],
    )

    return [execution_node]


def generate_launch_description():
    return LaunchDescription([
        # File paths — small strings, safe as launch arguments
        DeclareLaunchArgument('urdf_file',  default_value='',
                              description='Absolute path to URDF/xacro (required)'),
        DeclareLaunchArgument('srdf_file',  default_value='',
                              description='Absolute path to SRDF file'),
        DeclareLaunchArgument('xacro_args', default_value=''),

        # Planning configuration
        DeclareLaunchArgument('planning_group',       default_value='arm'),
        DeclareLaunchArgument('end_effector_link',    default_value='tool0'),
        DeclareLaunchArgument('reference_frame',      default_value='base_link'),
        DeclareLaunchArgument('planner_id',           default_value='RRTConnect'),
        DeclareLaunchArgument('planning_time',        default_value='5.0'),
        DeclareLaunchArgument('velocity_scaling',     default_value='0.3'),
        DeclareLaunchArgument('acceleration_scaling', default_value='0.3'),

        OpaqueFunction(function=launch_setup),
    ])