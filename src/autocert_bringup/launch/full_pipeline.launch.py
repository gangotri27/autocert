"""
full_pipeline.launch.py
=======================
Launches the complete AutoCert pipeline for the open_manipulator_x.
"""

import os
import tempfile
import yaml

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node


class NoAliasDumper(yaml.Dumper):
    def ignore_aliases(self, data):
        return True

def _write_yaml(data: dict) -> str:
    tmp = tempfile.NamedTemporaryFile(
        mode='w', suffix='.yaml', delete=False, prefix='autocert_'
    )
    yaml.dump(data, tmp, Dumper=NoAliasDumper, default_flow_style=False)
    tmp.flush()
    return tmp.name

def _load_xacro(xacro_file: str) -> str:
    import xacro
    doc = xacro.process_file(xacro_file)
    return doc.toxml()

LAUNCH_ARGS =[
    DeclareLaunchArgument('urdf_file',           description='Path to URDF/xacro (required)'),
    DeclareLaunchArgument('srdf_file',           description='Path to SRDF (required)'),
    DeclareLaunchArgument('planning_group',       default_value='arm'),
    DeclareLaunchArgument('end_effector_link',    default_value='wrist_roll_link'),
    DeclareLaunchArgument('reference_frame',      default_value='link1'),
    DeclareLaunchArgument('planner_id',           default_value='RRTConnect'),
    DeclareLaunchArgument('planning_time',        default_value='5.0'),
    DeclareLaunchArgument('velocity_scaling',     default_value='0.3'),
    DeclareLaunchArgument('acceleration_scaling', default_value='0.3'),
    DeclareLaunchArgument('run_id',               default_value='run_001'),
    DeclareLaunchArgument('robot_mode',           default_value='simulation'),
]

def generate_launch_description():

    def setup(context, *args, **kwargs):

        urdf_file      = LaunchConfiguration('urdf_file').perform(context)
        srdf_file      = LaunchConfiguration('srdf_file').perform(context)
        planning_group = LaunchConfiguration('planning_group').perform(context)
        ee_link        = LaunchConfiguration('end_effector_link').perform(context)
        ref_frame      = LaunchConfiguration('reference_frame').perform(context)
        planner_id     = LaunchConfiguration('planner_id').perform(context)
        planning_time  = float(LaunchConfiguration('planning_time').perform(context))
        vel_scale      = float(LaunchConfiguration('velocity_scaling').perform(context))
        acc_scale      = float(LaunchConfiguration('acceleration_scaling').perform(context))
        run_id         = LaunchConfiguration('run_id').perform(context)
        robot_mode     = LaunchConfiguration('robot_mode').perform(context)

        if urdf_file.endswith('.xacro'):
            robot_description = _load_xacro(urdf_file)
        else:
            with open(urdf_file) as f:
                robot_description = f.read()

        with open(srdf_file) as f:
            robot_description_semantic = f.read()

        if not robot_description:
            raise RuntimeError(f'robot_description empty — check: {urdf_file}')

        rsp_yaml = _write_yaml({
            'robot_state_publisher': {
                'ros__parameters': {
                    'robot_description': robot_description,
                    'publish_frequency': 50.0,
                    'use_sim_time': False,
                }
            }
        })

        robot_state_publisher = Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[rsp_yaml],
            output='screen'
        )

        # CRITICAL FIX: Add isolated joint_state_publisher for simulation mode to prevent MoveItPy deadlocks.
        # Uses source_list so our execution node can still command the simulated robot.
        jsp_node = Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            name='joint_state_publisher',
            parameters=[{
                'robot_description': robot_description,
                'source_list':['/simulated_joint_states'],
                'rate': 30
            }],
            condition=IfCondition(PythonExpression(["'", robot_mode, "' == 'simulation'"])),
            output='screen'
        )

        exec_yaml = _write_yaml({
            'execution_node': {
                'ros__parameters': {
                    'robot_description':          robot_description,
                    'robot_description_semantic': robot_description_semantic,
                    'planning_group':             planning_group,
                    'end_effector_link':          ee_link,
                    'reference_frame':            ref_frame,
                    'planner_id':                 planner_id,
                    'planning_time':              planning_time,
                    'velocity_scaling':           vel_scale,
                    'acceleration_scaling':       acc_scale,
                    'robot_mode':                 robot_mode,
                }
            }
        })

        execution_node = Node(
            package='autocert_execution',
            executable='execution_node',
            name='execution_node',
            parameters=[exec_yaml],
            output='screen'
        )

        exp_share  = get_package_share_directory('autocert_experiment')
        exp_config = os.path.join(exp_share, 'config', 'experiment_config.yaml')

        experiment_node = TimerAction(
            period=20.0,
            actions=[
                Node(
                    package='autocert_experiment',
                    executable='experiment_node',
                    name='experiment_node',
                    arguments=[
                        '--config', exp_config,
                        '--run-id', run_id,
                    ],
                    parameters=[{
                        'planning_group':       planning_group,
                        'end_effector_link':    ee_link,
                        'reference_frame':      ref_frame,
                        'planner_id':           planner_id,
                        'planning_time':        planning_time,
                        'velocity_scaling':     vel_scale,
                        'acceleration_scaling': acc_scale,
                        'robot_mode':           robot_mode,
                        'run_id':               run_id,
                    }],
                    output='screen'
                )
            ]
        )

        return[
            robot_state_publisher,
            jsp_node,
            execution_node,
            experiment_node,
        ]

    return LaunchDescription(LAUNCH_ARGS +[OpaqueFunction(function=setup)])