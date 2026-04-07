#!/usr/bin/env python3
"""
MoveIt Adapter — Robot-Agnostic Motion Execution via Action Client

This replaces SimRobotAdapter's IK-based execution.
Instead of computing IK and sending raw joint trajectories,
this adapter delegates all motion to the ExecutionNode via
the /move_to_pose action, which uses MoveIt2 planner internally.

Design rules enforced:
  ✅ No IK calls
  ✅ No hardcoded joint names or frames
  ✅ No hardcoded link names
  ✅ Success validated from action result
"""

import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from geometry_msgs.msg import Pose, PoseStamped
from std_msgs.msg import Bool
from sensor_msgs.msg import JointState

from tf2_ros import Buffer, TransformListener
import numpy as np

from autocert_interfaces.action import MoveToPose
from .base_adapter import RobotAdapter


class MoveItAdapter(RobotAdapter):
    """
    Robot adapter using the ExecutionNode action server.
    Fully robot-agnostic: all robot-specific config comes from parameters.
    """

    def __init__(self, node: Node, params: dict = None):
        """
        Args:
            node      : Parent ROS2 node
            params    : Dict with keys:
                          planning_group, end_effector_link,
                          reference_frame, planner_id,
                          planning_time, velocity_scaling,
                          acceleration_scaling, settling_time_s
        """
        self.node = node
        params = params or {}

        # All robot-specific values come from params — no hardcoding
        self._planning_group = params.get('planning_group', 'arm')
        self._ee_link = params.get('end_effector_link', 'tool0')
        self._ref_frame = params.get('reference_frame', 'base_link')
        self._planner_id = params.get('planner_id', 'RRTConnect')
        self._planning_time = float(params.get('planning_time', 5.0))
        self._vel_scale = float(params.get('velocity_scaling', 0.3))
        self._acc_scale = float(params.get('acceleration_scaling', 0.3))
        self._settling_time = float(params.get('settling_time_s', 2.0))
        self._motion_timeout = float(params.get('motion_timeout_s', 30.0))

        # State
        self._connected = False
        self._motion_done = False
        self._motion_succeeded = False
        self._last_motion_done = False

        # ── Action client ──────────────────────────────────────────────────
        self._action_client = ActionClient(
            node, MoveToPose, '/move_to_pose'
        )

        # ── Motion done subscriber ─────────────────────────────────────────
        self._motion_done_sub = node.create_subscription(
            Bool, '/motion_done',
            self._motion_done_cb, 10
        )

        # ── TF2 for pose measurement ───────────────────────────────────────
        self._tf_buffer = Buffer()
        self._tf_listener = TransformListener(self._tf_buffer, node)

        node.get_logger().info(
            f'MoveItAdapter initialized\n'
            f'  Group  : {self._planning_group}\n'
            f'  EE Link: {self._ee_link}\n'
            f'  Frame  : {self._ref_frame}'
        )

    # ── RobotAdapter Interface ─────────────────────────────────────────────

    def connect(self) -> bool:
        """Wait for the ExecutionNode action server to become available."""
        self.node.get_logger().info('Waiting for /move_to_pose action server...')

        timeout_sec = 30.0
        start = time.time()
        while not self._action_client.wait_for_server(timeout_sec=1.0):
            if time.time() - start > timeout_sec:
                self.node.get_logger().error(
                    'Timed out waiting for /move_to_pose action server'
                )
                return False
            self.node.get_logger().info('Still waiting for action server...')

        self._connected = True
        self.node.get_logger().info('Connected to ExecutionNode')
        return True

    def move_to_pose(self, pose: Pose, timeout: float = None) -> bool:
        """
        Send a pose goal to the ExecutionNode.

        NO IK is computed here — MoveIt2 planner handles everything.

        Args:
            pose   : Target end-effector pose in reference frame
            timeout: Override for motion timeout

        Returns:
            True if motion succeeded, False otherwise
        """
        if not self._connected:
            self.node.get_logger().error('Not connected to ExecutionNode')
            return False

        # Build PoseStamped
        pose_stamped = PoseStamped()
        pose_stamped.header.stamp = self.node.get_clock().now().to_msg()
        pose_stamped.header.frame_id = self._ref_frame
        pose_stamped.pose = pose

        # Build action goal
        goal = MoveToPose.Goal()
        goal.target_pose = pose_stamped
        goal.planning_group = self._planning_group
        goal.end_effector_link = self._ee_link
        goal.planner_id = self._planner_id
        goal.planning_time = self._planning_time
        goal.velocity_scaling = self._vel_scale
        goal.acceleration_scaling = self._acc_scale
        goal.execute_immediately = True

        # Reset state
        self._motion_done = False
        self._motion_succeeded = False

        # Send goal
        self.node.get_logger().info(
            f'Sending pose goal to ExecutionNode: '
            f'({pose.position.x:.3f}, {pose.position.y:.3f}, {pose.position.z:.3f})'
        )

        send_future = self._action_client.send_goal_async(
            goal,
            feedback_callback=self._feedback_cb
        )
        rclpy.spin_until_future_complete(
            self.node, send_future,
            timeout_sec=10.0
        )

        goal_handle = send_future.result()
        if not goal_handle or not goal_handle.accepted:
            self.node.get_logger().error('Goal rejected by ExecutionNode')
            return False

        # Wait for result
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(
            self.node, result_future,
            timeout_sec=timeout or self._motion_timeout
        )

        if result_future.result() is None:
            self.node.get_logger().error('Motion timed out')
            return False

        action_result = result_future.result().result
        if action_result.success:
            self.node.get_logger().info(
                f'Motion succeeded: {action_result.message}'
            )
            self._motion_succeeded = True
            return True
        else:
            self.node.get_logger().error(
                f'Motion failed: {action_result.message}'
            )
            return False

    def wait_motion_complete(self, timeout: float = 30.0) -> bool:
        """
        Wait for motion done signal.
        Since move_to_pose() is synchronous (blocks until result),
        this is a lightweight poll for the /motion_done topic.
        """
        start = time.time()
        while not self._motion_done and (time.time() - start) < timeout:
            rclpy.spin_once(self.node, timeout_sec=0.1)
        return self._motion_done and self._motion_succeeded

    def get_current_pose(self) -> Pose:
        """Get current EE pose via TF2 lookup."""
        try:
            transform = self._tf_buffer.lookup_transform(
                self._ref_frame,
                self._ee_link,
                rclpy.time.Time()
            )
            pose = Pose()
            pose.position.x = transform.transform.translation.x
            pose.position.y = transform.transform.translation.y
            pose.position.z = transform.transform.translation.z
            pose.orientation = transform.transform.rotation
            return pose
        except Exception as e:
            self.node.get_logger().warn(f'TF lookup failed: {e}')
            return Pose()

    def get_measurement(self) -> Pose:
        """
        Get measured EE pose via TF2 (averaged over multiple samples
        for noise reduction — standard practice for ISO 9283).
        """
        positions = []
        orientations = []
        n_samples = 20

        for _ in range(n_samples):
            try:
                t = self._tf_buffer.lookup_transform(
                    self._ref_frame,
                    self._ee_link,
                    rclpy.time.Time()
                )
                positions.append([
                    t.transform.translation.x,
                    t.transform.translation.y,
                    t.transform.translation.z,
                ])
                orientations.append([
                    t.transform.rotation.x,
                    t.transform.rotation.y,
                    t.transform.rotation.z,
                    t.transform.rotation.w,
                ])
            except Exception:
                pass
            rclpy.spin_once(self.node, timeout_sec=0.05)

        if len(positions) < 5:
            self.node.get_logger().warn(
                f'Only {len(positions)}/{n_samples} TF samples collected'
            )
            return None

        avg_pos = np.mean(positions, axis=0)
        avg_quat = np.mean(orientations, axis=0)
        avg_quat /= np.linalg.norm(avg_quat)  # normalize

        pose = Pose()
        pose.position.x = float(avg_pos[0])
        pose.position.y = float(avg_pos[1])
        pose.position.z = float(avg_pos[2])
        pose.orientation.x = float(avg_quat[0])
        pose.orientation.y = float(avg_quat[1])
        pose.orientation.z = float(avg_quat[2])
        pose.orientation.w = float(avg_quat[3])
        return pose

    def disconnect(self):
        """Disconnect adapter."""
        self._connected = False
        self.node.get_logger().info('MoveItAdapter disconnected')

    # ── Internal Callbacks ─────────────────────────────────────────────────

    def _motion_done_cb(self, msg: Bool):
        """Handle motion done signal from ExecutionNode."""
        self._motion_done = True
        self._motion_succeeded = msg.data

    def _feedback_cb(self, feedback_msg):
        """Log execution progress feedback."""
        fb = feedback_msg.feedback
        self.node.get_logger().info(
            f'[{fb.progress_percent:.0f}%] {fb.current_phase}'
        )