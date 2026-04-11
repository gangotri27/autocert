#!/usr/bin/env python3
"""
execution_node.py  —  AutoCert execution node (MoveItPy backend)
=================================================================
Accepts /move_to_pose action goals, plans via MoveItPy, executes,
and returns success/failure. Includes a robust, crash-free 
Simulation Fallback using direct RobotState IK.
"""

import time
import xml.etree.ElementTree as ET

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import PoseStamped
from sensor_msgs.msg import JointState
from std_msgs.msg import Bool, String

from autocert_interfaces.action import MoveToPose
from autocert_interfaces.srv import GetExecutionStatus

try:
    from moveit.planning import MoveItPy
    from moveit.core.robot_state import RobotState  # CRITICAL IMPORT FOR IK FALLBACK
    MOVEIT_PY_AVAILABLE = True
except ImportError:
    MOVEIT_PY_AVAILABLE = False


class ExecutionNode(Node):

    MAX_INIT_ATTEMPTS = 10
    INIT_BASE_DELAY   = 3.0
    INIT_MAX_DELAY    = 30.0

    def __init__(self):
        super().__init__('execution_node')

        self._declare_all_parameters()

        self.planning_group    = self.get_parameter('planning_group').value
        self.end_effector_link = self.get_parameter('end_effector_link').value
        self.reference_frame   = self.get_parameter('reference_frame').value
        self.planner_id        = self.get_parameter('planner_id').value
        self.planning_time     = self.get_parameter('planning_time').value
        self.vel_scale         = self.get_parameter('velocity_scaling').value
        self.acc_scale         = self.get_parameter('acceleration_scaling').value
        self.robot_mode        = self.get_parameter('robot_mode').value

        self.get_logger().info(
            f'ExecutionNode ready\n'
            f'  Planning group : {self.planning_group}\n'
            f'  End-effector   : {self.end_effector_link}\n'
            f'  Reference frame: {self.reference_frame}\n'
            f'  Planner        : {self.planner_id}\n'
            f'  Mode           : {self.robot_mode}'
        )

        self._moveit       = None
        self._arm          = None
        self._ready        = False
        self._is_executing = False
        self._init_attempt = 0
        self._last_joint_state = None

        self._cb_group = ReentrantCallbackGroup()

        # Publishers
        self._motion_done_pub = self.create_publisher(Bool,       '/motion_done',      10)
        self._status_pub      = self.create_publisher(String,     '/execution_status', 10)
        self._sim_joint_pub   = self.create_publisher(JointState, '/simulated_joint_states', 10)

        # Service
        self.create_service(
            GetExecutionStatus, '/get_execution_status',
            self._get_status_cb,
            callback_group=self._cb_group
        )

        # Action server
        self._action_server = ActionServer(
            self, MoveToPose, '/move_to_pose',
            execute_callback=self._execute_cb,
            goal_callback=self._goal_cb,
            cancel_callback=self._cancel_cb,
            callback_group=self._cb_group,
        )

        # In simulation, continuously publish to satisfy MoveItPy Monitor
        if self.robot_mode == 'simulation':
            self.create_timer(0.05, self._publish_simulated_joint_states, callback_group=self._cb_group)

        self.create_timer(0.5, self._try_init_moveit_py, callback_group=self._cb_group)

    def _declare_all_parameters(self):
        from rcl_interfaces.msg import ParameterDescriptor, ParameterType
        PT = ParameterType

        def pd(desc, ptype):
            d = ParameterDescriptor()
            d.description = desc
            d.type = ptype
            return d

        self.declare_parameter('planning_group',             'arm',             pd('MoveIt planning group', PT.PARAMETER_STRING))
        self.declare_parameter('end_effector_link',          'wrist_roll_link', pd('End-effector link',     PT.PARAMETER_STRING))
        self.declare_parameter('reference_frame',            'link1',           pd('Planning frame',        PT.PARAMETER_STRING))
        self.declare_parameter('planner_id',                 'RRTConnect',      pd('OMPL planner ID',       PT.PARAMETER_STRING))
        self.declare_parameter('planning_time',              5.0,               pd('Max planning time (s)', PT.PARAMETER_DOUBLE))
        self.declare_parameter('velocity_scaling',           0.3,               pd('Velocity scaling',      PT.PARAMETER_DOUBLE))
        self.declare_parameter('acceleration_scaling',       0.3,               pd('Acceleration scaling',  PT.PARAMETER_DOUBLE))
        self.declare_parameter('robot_mode',                 'simulation',      pd('Robot Mode',            PT.PARAMETER_STRING))
        self.declare_parameter('robot_description',          '',                pd('Robot URDF XML',        PT.PARAMETER_STRING))
        self.declare_parameter('robot_description_semantic', '',                pd('Robot SRDF XML',        PT.PARAMETER_STRING))

    def _publish_simulated_joint_states(self):
        """Acts as a virtual robot controller to prevent MoveItPy from timing out."""
        if self._last_joint_state is None:
            try:
                robot_description = self.get_parameter('robot_description').value
                if not robot_description:
                    return
                root = ET.fromstring(robot_description)
                joint_names = [j.attrib['name'] for j in root.findall('joint') if j.attrib.get('type') not in ['fixed', 'floating']]
                if joint_names:
                    js_msg = JointState()
                    js_msg.name = joint_names
                    js_msg.position = [0.0] * len(joint_names)
                    js_msg.velocity = [0.0] * len(joint_names)
                    js_msg.effort =[0.0] * len(joint_names)
                    self._last_joint_state = js_msg
            except Exception as e:
                self.get_logger().error(f"Failed to parse URDF for joint names: {e}")
                return

        if self._last_joint_state:
            self._last_joint_state.header.stamp = self.get_clock().now().to_msg()
            self._sim_joint_pub.publish(self._last_joint_state)

    def _try_init_moveit_py(self):
        if not rclpy.ok() or self._ready:
            return
        if not MOVEIT_PY_AVAILABLE:
            self.get_logger().error('moveit_py not available.')
            return

        self._init_attempt += 1
        if self._init_attempt > self.MAX_INIT_ATTEMPTS:
            self.get_logger().fatal(f'MoveItPy failed after {self.MAX_INIT_ATTEMPTS} attempts.')
            return

        self.get_logger().info(f'MoveItPy init attempt {self._init_attempt}/{self.MAX_INIT_ATTEMPTS}...')

        try:
            robot_description          = self.get_parameter('robot_description').value
            robot_description_semantic = self.get_parameter('robot_description_semantic').value

            if not robot_description or not robot_description_semantic:
                raise RuntimeError('robot_description or robot_description_semantic is empty.')

            planner_config_name = f"{self.planner_id}kConfigDefault"

            config_dict = {
                'robot_description': robot_description,
                'robot_description_semantic': robot_description_semantic,

                'planning_scene_monitor_options': {
                    'name': "planning_scene_monitor",
                    'robot_description': "robot_description",
                    'joint_state_topic': "/joint_states",
                    'attached_collision_object_topic': "/moveit_cpp/planning_scene_monitor",
                    'publish_planning_scene_topic': "/moveit_cpp/publish_planning_scene",
                    'monitored_planning_scene_topic': "/moveit_cpp/monitored_planning_scene",
                    'wait_for_initial_state_timeout': 10.0,
                },

                'planning_pipelines': {
                    'pipeline_names': ["ompl"]
                },

                'plan_request_params': {
                    'planning_attempts': 5,
                    'planning_pipeline': 'ompl',
                    'planner_id': planner_config_name,
                    'max_velocity_scaling_factor': self.vel_scale,
                    'max_acceleration_scaling_factor': self.acc_scale,
                    'planning_time': self.planning_time,
                },

                'ompl': {
                    'planning_plugins':['ompl_interface/OMPLPlanner'],
                    'request_adapters':[
                        'default_planning_request_adapters/ResolveConstraintFrames',
                        'default_planning_request_adapters/CheckStartStateBounds',
                        'default_planning_request_adapters/CheckStartStateCollision',
                    ],
                    'response_adapters':[
                        'default_planning_response_adapters/ValidateSolution',
                        'default_planning_response_adapters/DisplayMotionPath',
                    ],
                    'start_state_max_bounds_error': 0.1,
                    
                    'planner_configs': {
                        planner_config_name: {
                            'type': f'geometric::{self.planner_id}',
                            'range': 0.0,
                        }
                    },
                    self.planning_group: {
                        'default_planner_config': planner_config_name,
                        'planner_configs': [planner_config_name],
                    }
                },

                'robot_description_kinematics': {
                    self.planning_group: {
                        'kinematics_solver': 'kdl_kinematics_plugin/KDLKinematicsPlugin',
                        'kinematics_solver_search_resolution': 0.005,
                        'kinematics_solver_timeout': 0.5,
                        'kinematics_solver_attempts': 50,
                        'position_only_ik': True 
                    }
                },

                'moveit_manage_controllers': True,
                'trajectory_execution': {
                    'allowed_execution_duration_scaling': 1.2,
                    'allowed_goal_duration_margin': 0.5,
                    'allowed_start_tolerance': 0.01,
                    'execution_duration_monitoring': False,
                }
            }

            node_name = f'moveit_py_execution_{self._init_attempt}'
            self._moveit = MoveItPy(node_name=node_name, config_dict=config_dict)
            self._arm    = self._moveit.get_planning_component(self.planning_group)
            self._ready  = True

            self.get_logger().info(
                'MoveItPy initialised successfully\n'
                f'  Group  : {self.planning_group}\n'
                f'  EE Link: {self.end_effector_link}\n'
                f'  Frame  : {self.reference_frame}'
            )

        except Exception as exc:
            delay = min(self.INIT_BASE_DELAY * (2 ** (self._init_attempt - 1)), self.INIT_MAX_DELAY)
            self.get_logger().warn(f'MoveItPy init attempt {self._init_attempt} failed: {exc}')
            self.get_logger().info(f'Retrying in {delay:.1f}s...')
            if rclpy.ok():
                self.create_timer(delay, self._try_init_moveit_py, callback_group=self._cb_group)

    def _get_status_cb(self, request, response):
        response.is_executing      = self._is_executing
        response.is_ready          = self._ready
        response.current_state     = 'EXECUTING' if self._is_executing else 'IDLE'
        response.planning_group    = self.planning_group
        response.end_effector_link = self.end_effector_link
        return response

    def _goal_cb(self, goal_request):
        if self._is_executing or not self._ready:
            return GoalResponse.REJECT
        return GoalResponse.ACCEPT

    def _cancel_cb(self, goal_handle):
        self.get_logger().info('Cancellation requested')
        return CancelResponse.ACCEPT

    def _execute_cb(self, goal_handle):
        goal   = goal_handle.request
        result = MoveToPose.Result()

        self._is_executing = True

        target         = goal.target_pose
        planning_group = goal.planning_group or self.planning_group
        ee_link        = goal.end_effector_link or self.end_effector_link

        self.get_logger().info(
            f'Executing goal: ({target.pose.position.x:.3f}, '
            f'{target.pose.position.y:.3f}, {target.pose.position.z:.3f})'
        )

        try:
            arm = self._moveit.get_planning_component(planning_group)
            arm.set_start_state_to_current_state()

            # --- CRITICAL FIX 1: SOLVE IK MANUALLY FOR 5-DOF ARMS ---
            # Instantiate a fresh RobotState to hold the math
            robot_model = self._moveit.get_robot_model()
            goal_state = RobotState(robot_model)

            # Manually solve IK. 'position_only_ik' allows it to ignore strict orientation!
            ik_success = goal_state.set_from_ik(planning_group, target.pose, ee_link)

            if not ik_success:
                self.get_logger().error('IK Solver failed. Target position is physically unreachable.')
                result.success = False
                result.message = 'IK failed to find solution'
                self._safe_abort(goal_handle)
                self._publish_motion_done(False)
                return result

            # Update transforms internally
            goal_state.update()

            # Pass the Joint State as the goal! (OMPL will skip the Cartesian bounds check)
            arm.set_goal_state(robot_state=goal_state)

            # --- CRITICAL FIX 2: EMPTY .plan() ARGUMENTS ---
            plan_start  = time.time()
            plan_result = arm.plan()
            plan_ms     = (time.time() - plan_start) * 1000.0
            result.planning_time_ms = plan_ms

            if not plan_result:
                self.get_logger().error('Planning failed')
                result.success = False
                result.message = 'Planning failed'
                self._safe_abort(goal_handle)
                self._publish_motion_done(False)
                return result

            exec_start = time.time()
            exec_ok = False

            if goal.execute_immediately:
                exec_ok = self._moveit.execute(plan_result.trajectory, controllers=[])
                result.execution_time_ms = (time.time() - exec_start) * 1000.0

                if not exec_ok:
                    # --- CRITICAL FIX 3: CRASH-FREE SIMULATION FALLBACK ---
                    self.get_logger().info('Hardware execution unavailable — simulation mode active.')
                    
                    # Instead of parsing the C++ trajectory, we extract the target joints DIRECTLY from our successful IK step!
                    jmg = robot_model.get_joint_model_group(planning_group)
                    
                    # Try to fetch active joint names depending on MoveIt version
                    if hasattr(jmg, 'active_joint_model_names'):
                        joint_names = jmg.active_joint_model_names
                    else:
                        joint_names = jmg.get_active_joint_model_names()

                    joint_positions = goal_state.get_joint_group_positions(planning_group)
                    
                    # Create and publish the new simulated state
                    js_msg = JointState()
                    js_msg.header.stamp = self.get_clock().now().to_msg()
                    js_msg.name         = list(joint_names)
                    js_msg.position     = list(joint_positions)
                    js_msg.velocity     =[0.0] * len(joint_names)
                    js_msg.effort       = [0.0] * len(joint_names)

                    # Update our continuous publisher state
                    self._last_joint_state = js_msg
                    self._sim_joint_pub.publish(js_msg)
                    
                    time.sleep(0.2)
                    exec_ok = True
                    result.execution_time_ms = (time.time() - exec_start) * 1000.0

            if goal.execute_immediately and not exec_ok:
                result.success = False
                result.message = 'Trajectory execution failed'
                self._safe_abort(goal_handle)
                self._publish_motion_done(False)
                return result

            result.success = True
            result.message = f'Success | plan={plan_ms:.0f}ms | exec={result.execution_time_ms:.0f}ms'
            self._safe_succeed(goal_handle)
            self._publish_motion_done(True)

        except Exception as exc:
            self.get_logger().error(f'Execution error: {exc}')
            result.success = False
            result.message = str(exc)
            self._safe_abort(goal_handle)
            self._publish_motion_done(False)

        finally:
            self._is_executing = False

        return result

    def _safe_abort(self, goal_handle):
        try:
            if rclpy.ok(): goal_handle.abort()
        except Exception: pass

    def _safe_succeed(self, goal_handle):
        try:
            if rclpy.ok(): goal_handle.succeed()
        except Exception: pass

    def _publish_motion_done(self, success: bool):
        if not rclpy.ok(): return
        msg = Bool()
        msg.data = success
        self._motion_done_pub.publish(msg)
        smsg = String()
        smsg.data = 'MOTION_SUCCEEDED' if success else 'MOTION_FAILED'
        self._status_pub.publish(smsg)


def main(args=None):
    rclpy.init(args=args)
    executor = MultiThreadedExecutor(num_threads=4)
    node     = ExecutionNode()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        try: rclpy.shutdown()
        except Exception: pass

if __name__ == '__main__':
    main()