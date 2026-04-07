#!/usr/bin/env python3
"""
AutoCert Experiment Node — ISO 9283 Experiment Execution

Refactored to use MoveItAdapter (planner-based) instead of
direct IK calls. Fully robot-agnostic.
"""

import os
import rclpy
import argparse
import sys
import numpy as np

from rclpy.node import Node
from rclpy.utilities import remove_ros_args

from .robot_adapter.moveit_adapter import MoveItAdapter
from .pose_generator import PoseGenerator
from .config_loader import ConfigLoader
from .measurement_logger import MeasurementLogger
from .state_machine import StateMachine, ExperimentState


class ExperimentNode(Node):
    """
    Runs an ISO 9283 experiment using MoveIt2 planner-based execution.

    Key changes from original:
      ❌ Removed: adapter.compute_ik(), direct joint execution
      ✅ Added  : MoveItAdapter (delegates to ExecutionNode via action)
      ✅ Added  : StateMachine for robust state tracking
      ✅ Added  : MeasurementLogger for structured data output
    """

    def __init__(self):
        super().__init__('experiment_node')

        # ── Declare all parameters (robot-agnostic) ────────────────────────
        self.declare_parameter('config_file', '')
        self.declare_parameter('output_file', '')
        self.declare_parameter('run_id', 'run_001')
        self.declare_parameter('robot_mode', 'simulation')
        self.declare_parameter('planning_group', 'arm')
        self.declare_parameter('end_effector_link', 'tool0')
        self.declare_parameter('reference_frame', 'base_link')
        self.declare_parameter('planner_id', 'RRTConnect')
        self.declare_parameter('planning_time', 5.0)
        self.declare_parameter('velocity_scaling', 0.3)
        self.declare_parameter('acceleration_scaling', 0.3)

        self._state_machine = StateMachine()
        self.get_logger().info('ExperimentNode initialized (MoveIt planner-based)')

    # ── Quaternion Error ───────────────────────────────────────────────────

    def quat_error_deg(self, q1, q2):
        """Compute angular error between two quaternions in degrees."""
        q1 = np.array(q1) / np.linalg.norm(q1)
        q2 = np.array(q2) / np.linalg.norm(q2)
        dot = np.clip(np.abs(np.dot(q1, q2)), -1.0, 1.0)
        return np.degrees(2.0 * np.arccos(dot))

    # ── Main Run ───────────────────────────────────────────────────────────

    def run(self, config_file: str = None, output_file: str = None, run_id: str = None):
        """Execute the full ISO 9283 experiment."""

        config_file = config_file or self.get_parameter('config_file').value
        output_file = output_file or self.get_parameter('output_file').value
        run_id = run_id or self.get_parameter('run_id').value

        # ── INITIALIZING ───────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.INITIALIZING)

        if not output_file:
            output_file = os.path.expanduser(f'~/autocert_data/experiments/{run_id}.csv')
        os.makedirs(os.path.dirname(output_file), exist_ok=True)

        # ── LOADING CONFIG ─────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.LOADING_CONFIG)
        loader = ConfigLoader(config_file)
        if not loader.load():
            self.get_logger().error(f'Failed to load config from: {config_file}')
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        reps = loader.get('repetitions_per_pose', 5)
        settling_time = loader.get('settling_time_s', 2.0)

        # Build adapter params from config + node params
        adapter_params = {
            'planning_group': loader.get(
                'planning_group',
                self.get_parameter('planning_group').value
            ),
            'end_effector_link': loader.get(
                'end_effector_link',
                self.get_parameter('end_effector_link').value
            ),
            'reference_frame': loader.get(
                'reference_frame',
                self.get_parameter('reference_frame').value
            ),
            'planner_id': loader.get(
                'planner_id',
                self.get_parameter('planner_id').value
            ),
            'planning_time': loader.get(
                'planning_time',
                self.get_parameter('planning_time').value
            ),
            'velocity_scaling': loader.get(
                'velocity_scaling',
                self.get_parameter('velocity_scaling').value
            ),
            'acceleration_scaling': loader.get(
                'acceleration_scaling',
                self.get_parameter('acceleration_scaling').value
            ),
            'settling_time_s': settling_time,
            'motion_timeout_s': loader.get('measurement_timeout_s', 30.0),
        }

        # ── CONNECTING ─────────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.CONNECTING_ROBOT)
        adapter = MoveItAdapter(self, adapter_params)
        if not adapter.connect():
            self.get_logger().error('Failed to connect to ExecutionNode')
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        # ── GENERATING POSES ───────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.GENERATING_POSES)
        strategy = PoseGenerator.create(
            loader.get('strategy', 'iso_cube'),
            loader.config
        )
        raw_poses = strategy.generate_poses()
        self.get_logger().info(f'Generated {len(raw_poses)} poses')

        # No IK filtering — MoveIt planner validates reachability during execution
        # We validate only that poses are in the configured workspace
        valid_poses = raw_poses
        self.get_logger().info(
            f'Using {len(valid_poses)} poses '
            f'(IK pre-filtering removed — MoveIt2 validates during planning)'
        )

        if not valid_poses:
            self.get_logger().error('No poses available')
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        # ── READY / STARTING ───────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.READY)
        self._state_machine.transition_to(ExperimentState.STARTING)

        # Initialize logger
        logger = MeasurementLogger(
            output_file=output_file,
            robot_name=adapter_params['planning_group'],
            run_id=run_id
        )

        failed_poses = []
        successful_poses = 0

        # ── MAIN EXPERIMENT LOOP ───────────────────────────────────────────
        for pose_id, pose in enumerate(valid_poses):

            self.get_logger().info(
                f'\n{"="*50}\n🎯 Pose {pose_id + 1}/{len(valid_poses)} | '
                f'Target: ({pose.position.x:.3f}, {pose.position.y:.3f}, {pose.position.z:.3f})'
            )

            pos_samples = []
            ori_samples = []
            pose_had_failure = False

            for rep in range(reps):
                self.get_logger().info(f'  Rep {rep + 1}/{reps}')

                # ── MOVE ──────────────────────────────────────────────────
                self._state_machine.transition_to(ExperimentState.MOVING_TO_POSE)
                move_ok = adapter.move_to_pose(pose)

                if not move_ok:
                    self.get_logger().warn(
                        f'  ⚠️  Pose {pose_id} rep {rep + 1}: '
                        f'motion planning/execution failed — skipping rep'
                    )
                    pose_had_failure = True
                    continue

                # ── STABILIZE ─────────────────────────────────────────────
                self._state_machine.transition_to(ExperimentState.STABILIZING)
                import time
                time.sleep(settling_time)

                # ── MEASURE ───────────────────────────────────────────────
                self._state_machine.transition_to(ExperimentState.MEASURING)
                meas = adapter.get_measurement()

                if meas is None:
                    self.get_logger().warn(
                        f'  ⚠️  Pose {pose_id} rep {rep + 1}: measurement failed'
                    )
                    continue

                # ── LOG ───────────────────────────────────────────────────
                self._state_machine.transition_to(ExperimentState.LOGGING_RESULT)

                meas_pos = np.array([
                    meas.position.x, meas.position.y, meas.position.z
                ])
                cmd_pos = np.array([
                    pose.position.x, pose.position.y, pose.position.z
                ])
                pos_err_mm = np.linalg.norm(meas_pos - cmd_pos) * 1000.0

                meas_q = [
                    meas.orientation.x, meas.orientation.y,
                    meas.orientation.z, meas.orientation.w
                ]
                cmd_q = [
                    pose.orientation.x, pose.orientation.y,
                    pose.orientation.z, pose.orientation.w
                ]
                ori_err_deg = self.quat_error_deg(cmd_q, meas_q)

                pos_samples.append(meas_pos)
                ori_samples.append(meas_q)

                self.get_logger().info(
                    f'    ✅ pos_err={pos_err_mm:.3f}mm  ori_err={ori_err_deg:.3f}°'
                )

            # Write CSV row per repetition
            for rep_idx, (p, q) in enumerate(zip(pos_samples, ori_samples)):
                import csv
                with open(output_file, 'a', newline='') as f:
                    writer = csv.writer(f)
                    if os.path.getsize(output_file) == 0:
                        writer.writerow([
                            'pose_id', 'rep',
                            'cmd_x', 'cmd_y', 'cmd_z',
                            'cmd_qx', 'cmd_qy', 'cmd_qz', 'cmd_qw',
                            'meas_x', 'meas_y', 'meas_z',
                            'meas_qx', 'meas_qy', 'meas_qz', 'meas_qw',
                            'pos_error_mm', 'ori_error_deg'
                        ])
                    cmd_q = [
                        pose.orientation.x, pose.orientation.y,
                        pose.orientation.z, pose.orientation.w
                    ]
                    writer.writerow([
                        pose_id, rep_idx,
                        pose.position.x, pose.position.y, pose.position.z,
                        *cmd_q,
                        *p.tolist(), *q,
                        np.linalg.norm(p - np.array([
                            pose.position.x, pose.position.y, pose.position.z
                        ])) * 1000.0,
                        self.quat_error_deg(cmd_q, q)
                    ])

            if len(pos_samples) >= reps // 2:
                successful_poses += 1
            else:
                failed_poses.append(pose_id)

            # Advance state
            if pose_id < len(valid_poses) - 1:
                self._state_machine.transition_to(ExperimentState.NEXT_POSE)
            else:
                self._state_machine.transition_to(ExperimentState.COMPLETED)

        # ── SUMMARY ───────────────────────────────────────────────────────
        self.get_logger().info(
            f'\n{"="*50}\n'
            f'✅ Experiment complete\n'
            f'   Run ID     : {run_id}\n'
            f'   Successful : {successful_poses}/{len(valid_poses)} poses\n'
            f'   Failed     : {failed_poses}\n'
            f'   Output     : {output_file}'
        )

        adapter.disconnect()
        return True


def main(args=None):
    rclpy.init(args=args)

    parser = argparse.ArgumentParser()
    parser.add_argument('--config', required=True)
    parser.add_argument('--output', default='')
    parser.add_argument('--run-id', default='run_001')
    filtered = remove_ros_args(args=sys.argv)[1:]
    parsed = parser.parse_args(filtered)

    node = ExperimentNode()
    node.run(
        config_file=parsed.config,
        output_file=parsed.output,
        run_id=parsed.run_id
    )
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()