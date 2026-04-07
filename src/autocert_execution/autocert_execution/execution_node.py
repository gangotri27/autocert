#!/usr/bin/env python3
"""
Execution Node — Planner-Based Motion Execution

Replaces the IK-heavy SimRobotAdapter with a clean MoveIt2
planning pipeline. Accepts MoveToPose action goals, plans via
MoveIt2, executes, and returns success/failure.

Key design rules enforced here:
  ✅ No hardcoded joint names, link names, or frames
  ✅ Everything parameterized
  ✅ Uses MoveIt2 planner, NOT direct IK
  ✅ Validates motion success before returning
"""

import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Bool, String
from sensor_msgs.msg import JointState

from autocert_interfaces.action import MoveToPose
from autocert_interfaces.srv import GetExecutionStatus

try:
    from moveit.planning import MoveItPy
    from moveit.core.robot_state import RobotState
    MOVEIT_PY_AVAILABLE = True
except ImportError:
    MOVEIT_PY_AVAILABLE = False


class ExecutionNode(Node):
    """
    ROS2 Action Server that accepts pose goals and executes them
    through the MoveIt2 planning pipeline.

    Communication interfaces:
      Action Server : /move_to_pose  (autocert_interfaces/MoveToPose)
      Service       : /get_execution_status
      Publisher     : /motion_done (Bool)
      Subscriber    : /joint_states
    """

    def __init__(self):
        super().__init__('execution_node')

        # ── Declare all parameters (robot-agnostic) ────────────────────────
        self.declare_parameter('planning_group', 'arm')
        self.declare_parameter('end_effector_link', 'tool0')
        self.declare_parameter('reference_frame', 'base_link')
        self.declare_parameter('planner_id', 'RRTConnect')
        self.declare_parameter('planning_time', 5.0)
        self.declare_parameter('planning_attempts', 3)
        self.declare_parameter('velocity_scaling', 0.3)
        self.declare_parameter('acceleration_scaling', 0.3)
        self.declare_parameter('goal_position_tolerance', 0.001)
        self.declare_parameter('goal_orientation_tolerance', 0.01)
        self.declare_parameter('goal_joint_tolerance', 0.001)
        self.declare_parameter('robot_description_param', 'robot_description')

        # FIX: declare robot_description and robot_description_semantic so that
        # ROS 2 strict-mode parameter resolution makes them accessible via
        # get_parameter().  Without these declarations, parameters injected by
        # execution.launch.py through a --params-file are silently invisible
        # and has_parameter() returns False, causing MoveItPy init to abort.
        self.declare_parameter('robot_description', '')
        self.declare_parameter('robot_description_semantic', '')

        # Read parameters
        self._planning_group = self.get_parameter('planning_group').value
        self._ee_link = self.get_parameter('end_effector_link').value
        self._ref_frame = self.get_parameter('reference_frame').value
        self._planner_id = self.get_parameter('planner_id').value
        self._planning_time = self.get_parameter('planning_time').value
        self._planning_attempts = self.get_parameter('planning_attempts').value
        self._vel_scale = self.get_parameter('velocity_scaling').value
        self._acc_scale = self.get_parameter('acceleration_scaling').value

        # ── State ──────────────────────────────────────────────────────────
        self._is_executing = False
        self._is_ready = False
        self._current_joints = None
        self._moveit = None

        # ── Callback group for concurrent action + service ─────────────────
        self._cb_group = ReentrantCallbackGroup()

        # ── Publishers ─────────────────────────────────────────────────────
        self._motion_done_pub = self.create_publisher(
            Bool, '/motion_done', 10
        )
        self._status_pub = self.create_publisher(
            String, '/execution_status', 10
        )

        # ── Subscribers ────────────────────────────────────────────────────
        self.create_subscription(
            JointState, '/joint_states',
            self._joint_state_cb, 10,
            callback_group=self._cb_group
        )

        # ── Services ───────────────────────────────────────────────────────
        self.create_service(
            GetExecutionStatus, '/get_execution_status',
            self._get_status_cb,
            callback_group=self._cb_group
        )

        # ── Action server ──────────────────────────────────────────────────
        self._action_server = ActionServer(
            self,
            MoveToPose,
            '/move_to_pose',
            execute_callback=self._execute_cb,
            goal_callback=self._goal_cb,
            cancel_callback=self._cancel_cb,
            callback_group=self._cb_group
        )

        # ── Initialize MoveItPy ────────────────────────────────────────────
        self._init_moveit()

        self.get_logger().info(
            f'ExecutionNode ready\n'
            f'  Planning group : {self._planning_group}\n'
            f'  End-effector   : {self._ee_link}\n'
            f'  Reference frame: {self._ref_frame}\n'
            f'  Planner        : {self._planner_id}'
        )

    # ── Callbacks ──────────────────────────────────────────────────────────

    def _joint_state_cb(self, msg: JointState):
        """Track current joint state."""
        self._current_joints = msg

    def _goal_cb(self, goal_request):
        """Accept or reject incoming goals."""
        if self._is_executing:
            self.get_logger().warn('Rejecting goal: already executing')
            return GoalResponse.REJECT
        if not self._is_ready:
            self.get_logger().warn('Rejecting goal: not ready (MoveItPy not initialized)')
            return GoalResponse.REJECT
        return GoalResponse.ACCEPT

    def _cancel_cb(self, goal_handle):
        """Accept cancellation requests."""
        self.get_logger().info('Cancellation requested')
        return CancelResponse.ACCEPT

    async def _execute_cb(self, goal_handle):
        """
        Main execution callback.
        Plans via MoveIt2 and executes trajectory.
        """
        goal = goal_handle.request
        result = MoveToPose.Result()
        feedback = MoveToPose.Feedback()

        self._is_executing = True
        t_start = time.time()

        # Override parameters if provided in goal
        planning_group = goal.planning_group or self._planning_group
        ee_link = goal.end_effector_link or self._ee_link
        planner_id = goal.planner_id or self._planner_id
        planning_time = goal.planning_time if goal.planning_time > 0 else self._planning_time
        vel_scale = goal.velocity_scaling if goal.velocity_scaling > 0 else self._vel_scale
        acc_scale = goal.acceleration_scaling if goal.acceleration_scaling > 0 else self._acc_scale

        target_pose: PoseStamped = goal.target_pose

        try:
            # ── Phase 1: Setup planning component ─────────────────────────
            feedback.state = 'SETTING_UP'
            feedback.current_phase = 'Configuring planner'
            feedback.progress_percent = 10.0
            goal_handle.publish_feedback(feedback)

            arm = self._moveit.get_planning_component(planning_group)

            # ── Phase 2: Set current state as start ───────────────────────
            feedback.state = 'SETTING_START'
            feedback.current_phase = 'Setting start state'
            feedback.progress_percent = 20.0
            goal_handle.publish_feedback(feedback)

            arm.set_start_state_to_current_state()

            # ── Phase 3: Set goal pose ─────────────────────────────────────
            feedback.state = 'SETTING_GOAL'
            feedback.current_phase = 'Setting goal pose'
            feedback.progress_percent = 30.0
            goal_handle.publish_feedback(feedback)

            # Ensure frame_id is set
            if not target_pose.header.frame_id:
                target_pose.header.frame_id = self._ref_frame

            arm.set_goal_state(
                pose_stamped_msg=target_pose,
                pose_link=ee_link
            )

            # ── Phase 4: Plan ──────────────────────────────────────────────
            feedback.state = 'PLANNING'
            feedback.current_phase = 'Running motion planner'
            feedback.progress_percent = 40.0
            goal_handle.publish_feedback(feedback)

            plan_start = time.time()
            plan_result = None

            for attempt in range(int(self._planning_attempts)):
                self.get_logger().info(
                    f'Planning attempt {attempt + 1}/{int(self._planning_attempts)}'
                )
                plan_result = arm.plan()
                if plan_result:
                    break
                self.get_logger().warn(f'Planning attempt {attempt + 1} failed')

            plan_time_ms = (time.time() - plan_start) * 1000.0
            result.planning_time_ms = plan_time_ms

            if not plan_result:
                self.get_logger().error('All planning attempts failed')
                result.success = False
                result.message = f'Planning failed after {self._planning_attempts} attempts'
                goal_handle.abort()
                self._publish_motion_done(False)
                return result

            feedback.state = 'PLAN_READY'
            feedback.current_phase = f'Plan found in {plan_time_ms:.1f}ms'
            feedback.progress_percent = 60.0
            goal_handle.publish_feedback(feedback)

            # ── Phase 5: Execute ───────────────────────────────────────────
            if goal.execute_immediately:
                feedback.state = 'EXECUTING'
                feedback.current_phase = 'Executing trajectory'
                feedback.progress_percent = 70.0
                goal_handle.publish_feedback(feedback)

                exec_start = time.time()
                exec_result = self._moveit.execute(
                    plan_result.trajectory,
                    controllers=[]
                )
                exec_time_ms = (time.time() - exec_start) * 1000.0
                result.execution_time_ms = exec_time_ms

                if not exec_result:
                    result.success = False
                    result.message = 'Trajectory execution failed'
                    goal_handle.abort()
                    self._publish_motion_done(False)
                    return result

            feedback.state = 'COMPLETED'
            feedback.current_phase = 'Motion complete'
            feedback.progress_percent = 100.0
            goal_handle.publish_feedback(feedback)

            result.success = True
            result.message = (
                f'Success | Plan: {plan_time_ms:.1f}ms | '
                f'Exec: {result.execution_time_ms:.1f}ms'
            )
            goal_handle.succeed()
            self._publish_motion_done(True)

        except Exception as e:
            self.get_logger().error(f'Execution error: {e}')
            result.success = False
            result.message = str(e)
            goal_handle.abort()
            self._publish_motion_done(False)

        finally:
            self._is_executing = False

        return result

    def _get_status_cb(self, request, response):
        """Return current execution status."""
        response.is_executing = self._is_executing
        response.is_ready = self._is_ready
        response.current_state = 'EXECUTING' if self._is_executing else 'IDLE'
        response.planning_group = self._planning_group
        response.end_effector_link = self._ee_link
        return response

    def _publish_motion_done(self, success: bool):
        """Publish motion completion signal."""
        msg = Bool()
        msg.data = success
        self._motion_done_pub.publish(msg)

        status_msg = String()
        status_msg.data = 'MOTION_SUCCEEDED' if success else 'MOTION_FAILED'
        self._status_pub.publish(status_msg)

    def _check_robot_description(self) -> bool:
        """Verify robot_description parameter was received and is non-empty."""
        if not self.has_parameter('robot_description'):
            self.get_logger().error(
                'robot_description parameter is MISSING. '
                'Check that execution.launch.py passed it as a Node parameter.'
            )
            return False
        desc = self.get_parameter('robot_description').value
        if not desc:
            self.get_logger().error('robot_description parameter is EMPTY.')
            return False
        self.get_logger().info(
            f'robot_description loaded: {len(desc)} chars'
        )
        return True

    def _check_srdf(self) -> bool:
        """Verify robot_description_semantic parameter was received and is non-empty."""
        if not self.has_parameter('robot_description_semantic'):
            self.get_logger().error(
                'robot_description_semantic parameter is MISSING. '
                'Check that execution.launch.py passed it as a Node parameter.'
            )
            return False
        srdf = self.get_parameter('robot_description_semantic').value
        if not srdf:
            self.get_logger().error('robot_description_semantic parameter is EMPTY.')
            return False
        self.get_logger().info(
            f'robot_description_semantic loaded: {len(srdf)} chars'
        )
        return True

    def _init_moveit(self):
        """
        Initialize MoveItPy in a background thread with retries.
        This prevents blocking __init__ and handles move_group startup delay.
        """
        import threading
        thread = threading.Thread(target=self._init_moveit_with_retry, daemon=True)
        thread.start()

    def _init_moveit_with_retry(self):
        """Background thread: retry MoveItPy initialization until move_group is ready."""
        if not MOVEIT_PY_AVAILABLE:
            self.get_logger().error(
                'moveit_py not available. Install moveit_py for ROS2 Jazzy.'
            )
            return

        if not self._check_robot_description():
            self.get_logger().error(
                'Cannot initialize MoveItPy: robot_description missing or empty.'
            )
            return

        if not self._check_srdf():
            self.get_logger().error(
                'Cannot initialize MoveItPy: robot_description_semantic missing or empty.'
            )
            return

        max_attempts = 10
        retry_delay_sec = 3.0

        for attempt in range(1, max_attempts + 1):
            try:
                self.get_logger().info(
                    f'MoveItPy init attempt {attempt}/{max_attempts}...'
                )
                self._moveit = MoveItPy(node_name=self.get_name())
                self._arm = self._moveit.get_planning_component(self._planning_group)
                self._is_ready = True
                self.get_logger().info('MoveItPy initialized successfully')
                return

            except Exception as e:
                self.get_logger().warn(
                    f'MoveItPy init attempt {attempt} failed: {e}'
                )
                if attempt < max_attempts:
                    self.get_logger().info(
                        f'Retrying in {retry_delay_sec}s...'
                    )
                    time.sleep(retry_delay_sec)

        self.get_logger().error(
            f'MoveItPy failed to initialize after {max_attempts} attempts. '
            'Is move_group running and healthy?'
        )
        self._is_ready = False


def main(args=None):
    rclpy.init(args=args)

    execution_node = ExecutionNode()
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(execution_node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        execution_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()