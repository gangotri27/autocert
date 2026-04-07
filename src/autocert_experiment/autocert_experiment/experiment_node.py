#!/usr/bin/env python3
"""
AutoCert Experiment Node — ISO 9283 Experiment Execution

Fixed:
  - Robot-specific settings (planning_group, end_effector_link, reference_frame,
    planner_id, planning_time, velocity/acceleration_scaling) now come EXCLUSIVELY
    from ROS2 node parameters (set via launch arguments).
    They NO LONGER come from the config file — this was silently overriding
    launch args with stale config-file defaults (e.g. tool0 instead of wrist_roll_link).

  - Config file is now exclusively for experiment-specific settings:
    strategy, cube geometry, repetitions, settling_time, measurement_timeout,
    workspace_bounds, random_backoff, etc.
"""

import os
import csv
import time
import argparse
import sys
import json

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.utilities import remove_ros_args
from sensor_msgs.msg import JointState

from .robot_adapter.moveit_adapter import MoveItAdapter
from .pose_generator import PoseGenerator
from .config_loader import ConfigLoader
from .state_machine import StateMachine, ExperimentState


# ── Correct quaternion averaging (Markley 2007 eigenvalue method) ─────────────

def average_quaternions(quaternions: list) -> np.ndarray:
    """
    Compute the optimal average of unit quaternions via eigenvalue decomposition.

    Reference:
        Markley, F.L., Cheng, Y., Crassidis, J.L., Oshman, Y. (2007).
        "Averaging Quaternions." Journal of Guidance, Control, and Dynamics.

    Args:
        quaternions: List of [x, y, z, w] quaternion arrays/lists

    Returns:
        Optimal average as np.ndarray [x, y, z, w], unit norm, w >= 0
    """
    if not quaternions:
        raise ValueError('Cannot average empty quaternion list')

    if len(quaternions) == 1:
        q = np.array(quaternions[0], dtype=np.float64)
        return q / np.linalg.norm(q)

    M = np.zeros((4, 4), dtype=np.float64)
    for q_raw in quaternions:
        q = np.array(q_raw, dtype=np.float64).reshape(4, 1)
        norm = np.linalg.norm(q)
        if norm < 1e-8:
            continue
        q /= norm
        if q[3, 0] < 0.0:   # canonical hemisphere: w >= 0
            q = -q
        M += q @ q.T

    M /= len(quaternions)
    eigvals, eigvecs = np.linalg.eigh(M)
    avg_q = eigvecs[:, np.argmax(eigvals)]

    if avg_q[3] < 0.0:
        avg_q = -avg_q
    return avg_q / np.linalg.norm(avg_q)


class ExperimentNode(Node):
    """
    Runs an ISO 9283 experiment using MoveIt2 planner-based execution.

    Parameter priority (highest → lowest):
      1. ROS2 node parameters set from launch arguments
         (planning_group, end_effector_link, reference_frame, planner settings)
      2. Experiment config YAML
         (strategy, cube geometry, repetitions, settling_time, workspace_bounds)
    """

    MAX_RETRIES = 2

    def __init__(self):
        super().__init__('experiment_node')

        # ── All parameters declared with safe defaults ─────────────────────
        # Robot-specific — ALWAYS set via launch arguments
        self.declare_parameter('planning_group',        'arm')
        self.declare_parameter('end_effector_link',     'tool0')
        self.declare_parameter('reference_frame',       'base_link')
        self.declare_parameter('planner_id',            'RRTConnect')
        self.declare_parameter('planning_time',         5.0)
        self.declare_parameter('velocity_scaling',      0.3)
        self.declare_parameter('acceleration_scaling',  0.3)
        # Experiment metadata
        self.declare_parameter('config_file',  '')
        self.declare_parameter('output_file',  '')
        self.declare_parameter('run_id',       'run_001')
        self.declare_parameter('robot_mode',   'simulation')

        self._state_machine = StateMachine()

        # Joint utilization tracking (ADV-3)
        self._joint_state_log: list = []
        self._joint_names:     list = []

        self.create_subscription(
            JointState, '/joint_states',
            self._joint_state_cb, 10
        )

        self.get_logger().info(
            'ExperimentNode initialized\n'
            '  Motion mode : MoveIt2 planner-based (no direct IK)\n'
            f'  Max retries : {self.MAX_RETRIES}'
        )

    # ── Joint state logging ────────────────────────────────────────────────

    def _joint_state_cb(self, msg: JointState):
        if self._state_machine.state in (
            ExperimentState.MOVING_TO_POSE,
            ExperimentState.STABILIZING,
            ExperimentState.MEASURING,
        ):
            if not self._joint_names:
                self._joint_names = list(msg.name)
            self._joint_state_log.append(list(msg.position))

    # ── Workspace validation ───────────────────────────────────────────────

    def is_within_workspace(self, pose, bounds: dict) -> bool:
        """
        Check if a Cartesian pose is within the configured workspace bounds.
        Prevents sending unreachable poses to MoveIt (avoids biased failure stats).
        """
        x, y, z = pose.position.x, pose.position.y, pose.position.z
        x_ok = bounds['x'][0] <= x <= bounds['x'][1]
        y_ok = bounds['y'][0] <= y <= bounds['y'][1]
        z_ok = bounds['z'][0] <= z <= bounds['z'][1]

        if not (x_ok and y_ok and z_ok):
            self.get_logger().debug(
                f'Pose ({x:.3f},{y:.3f},{z:.3f}) outside workspace: '
                f"x{bounds['x']} y{bounds['y']} z{bounds['z']}"
            )
        return x_ok and y_ok and z_ok

    # ── Quaternion error ───────────────────────────────────────────────────

    def quat_error_deg(self, q1: list, q2: list) -> float:
        """Angular error between two quaternions (degrees), handles antipodal form."""
        q1 = np.array(q1, dtype=np.float64)
        q2 = np.array(q2, dtype=np.float64)
        q1 /= np.linalg.norm(q1)
        q2 /= np.linalg.norm(q2)
        dot = float(np.clip(np.abs(np.dot(q1, q2)), 0.0, 1.0))
        return float(np.degrees(2.0 * np.arccos(dot)))

    # ── Joint utilization report ───────────────────────────────────────────

    def compute_joint_utilization(self) -> dict:
        if not self._joint_state_log or not self._joint_names:
            return {}
        data = np.array(self._joint_state_log)
        n_joints = min(data.shape[1], len(self._joint_names))
        result = {}
        for j in range(n_joints):
            col = data[:, j]
            result[self._joint_names[j]] = {
                'mean_rad':     float(np.mean(col)),
                'variance_rad2': float(np.var(col)),
                'std_rad':      float(np.std(col)),
                'range_rad':    float(np.max(col) - np.min(col)),
                'min_rad':      float(np.min(col)),
                'max_rad':      float(np.max(col)),
                'n_samples':    int(len(col)),
            }
        return result

    def _log_joint_utilization(self, output_file: str, run_id: str):
        utilization = self.compute_joint_utilization()
        if not utilization:
            return
        out_dir = os.path.dirname(output_file)
        util_path = os.path.join(out_dir, f'{run_id}_joint_utilization.json')
        with open(util_path, 'w') as f:
            json.dump({
                'run_id': run_id,
                'n_joint_state_samples': len(self._joint_state_log),
                'joint_utilization': utilization,
            }, f, indent=2)
        self.get_logger().info(f'Joint utilization → {util_path}')
        for name, stats in utilization.items():
            self.get_logger().info(
                f'  {name:<25} std={stats["std_rad"]:.4f} rad  '
                f'range={stats["range_rad"]:.4f} rad'
            )

    # ── CSV helpers ────────────────────────────────────────────────────────

    def _init_csv(self, output_file: str):
        os.makedirs(os.path.dirname(output_file), exist_ok=True)
        with open(output_file, 'w', newline='') as f:
            csv.writer(f).writerow([
                'pose_id', 'rep',
                'cmd_x', 'cmd_y', 'cmd_z',
                'cmd_qx', 'cmd_qy', 'cmd_qz', 'cmd_qw',
                'meas_x', 'meas_y', 'meas_z',
                'meas_qx', 'meas_qy', 'meas_qz', 'meas_qw',
                'pos_error_mm', 'ori_error_deg',
                'planning_time_ms', 'execution_time_ms',
                'n_retries',
            ])

    def _append_csv_row(self, output_file: str, row: list):
        with open(output_file, 'a', newline='') as f:
            csv.writer(f).writerow(row)

    # ── Main experiment run ────────────────────────────────────────────────

    def run(
        self,
        config_file: str = None,
        output_file: str = None,
        run_id: str = None,
    ) -> bool:

        config_file = config_file or self.get_parameter('config_file').value
        output_file = output_file or self.get_parameter('output_file').value
        run_id      = run_id      or self.get_parameter('run_id').value

        # ── INITIALIZING ──────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.INITIALIZING)

        if not output_file:
            output_file = os.path.expanduser(
                f'~/autocert_data/experiments/{run_id}.csv'
            )
        os.makedirs(os.path.dirname(output_file), exist_ok=True)

        # ── LOADING CONFIG ─────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.LOADING_CONFIG)

        loader = ConfigLoader(config_file)
        if not loader.load():
            self.get_logger().error(f'Failed to load config: {config_file}')
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        # Experiment-specific settings (from config file only)
        reps            = int(loader.get('repetitions_per_pose', 5))
        settling_time   = float(loader.get('settling_time_s', 2.0))
        motion_timeout  = float(loader.get('measurement_timeout_s', 30.0))
        workspace_bounds = loader.get('workspace_bounds', None)

        if workspace_bounds:
            self.get_logger().info(
                f'Workspace bounds: '
                f"x={workspace_bounds['x']}  "
                f"y={workspace_bounds['y']}  "
                f"z={workspace_bounds['z']}"
            )
        else:
            self.get_logger().warn(
                'No workspace_bounds in config — all poses will be attempted.'
            )

        # ── Robot-specific settings: ALWAYS from node parameters ───────────
        #
        # CRITICAL FIX: Previously these were read from the config file first,
        # which silently overrode launch argument values.
        # e.g. config had end_effector_link=tool0 → ignored wrist_roll_link from launch
        #
        # Now: node parameters set by launch args are the SOLE source of truth
        # for all robot-identity settings.
        #
        adapter_params = {
            'planning_group':       self.get_parameter('planning_group').value,
            'end_effector_link':    self.get_parameter('end_effector_link').value,
            'reference_frame':      self.get_parameter('reference_frame').value,
            'planner_id':           self.get_parameter('planner_id').value,
            'planning_time':        float(self.get_parameter('planning_time').value),
            'velocity_scaling':     float(self.get_parameter('velocity_scaling').value),
            'acceleration_scaling': float(self.get_parameter('acceleration_scaling').value),
            # Experiment-specific (from config file)
            'settling_time_s':  settling_time,
            'motion_timeout_s': motion_timeout,
        }

        self.get_logger().info(
            f'Robot parameters (from launch args):\n'
            f"  planning_group    : {adapter_params['planning_group']}\n"
            f"  end_effector_link : {adapter_params['end_effector_link']}\n"
            f"  reference_frame   : {adapter_params['reference_frame']}\n"
            f"  planner_id        : {adapter_params['planner_id']}\n"
            f"  planning_time     : {adapter_params['planning_time']}s"
        )

        # ── CONNECTING ─────────────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.CONNECTING_ROBOT)

        adapter = MoveItAdapter(self, adapter_params)
        if not adapter.connect():
            self.get_logger().error(
                'Failed to connect to ExecutionNode (/move_to_pose). '
                'Ensure execution_node is running and MoveItPy initialized.'
            )
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        # ── GENERATING POSES ───────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.GENERATING_POSES)

        strategy = PoseGenerator.create(
            loader.get('strategy', 'iso_cube'),
            loader.config
        )
        raw_poses = strategy.generate_poses()
        self.get_logger().info(f'Generated {len(raw_poses)} raw poses')

        # Workspace filtering
        if workspace_bounds:
            valid_poses = [
                p for p in raw_poses
                if self.is_within_workspace(p, workspace_bounds)
            ]
            n_filtered = len(raw_poses) - len(valid_poses)
            if n_filtered > 0:
                self.get_logger().warn(
                    f'Workspace filter removed {n_filtered}/{len(raw_poses)} poses. '
                    f'{len(valid_poses)} poses remain.'
                )
        else:
            valid_poses = raw_poses

        if not valid_poses:
            self.get_logger().error(
                'No valid poses after workspace filtering. '
                'Check workspace_bounds in experiment_config.yaml.'
            )
            self._state_machine.transition_to(ExperimentState.ERROR)
            return False

        self.get_logger().info(
            f'Proceeding with {len(valid_poses)} workspace-validated poses'
        )

        # ── READY / STARTING ───────────────────────────────────────────────
        self._state_machine.transition_to(ExperimentState.READY)
        self._state_machine.transition_to(ExperimentState.STARTING)

        self._init_csv(output_file)

        pose_success_count  = 0
        pose_failure_details = []
        total_retries_used  = 0

        # ── MAIN EXPERIMENT LOOP ───────────────────────────────────────────
        for pose_id, pose in enumerate(valid_poses):

            cmd_pos = np.array([
                pose.position.x,
                pose.position.y,
                pose.position.z,
            ])
            cmd_q = [
                pose.orientation.x,
                pose.orientation.y,
                pose.orientation.z,
                pose.orientation.w,
            ]

            self.get_logger().info(
                f'\n{"="*55}\n'
                f'Pose {pose_id + 1}/{len(valid_poses)}  '
                f'Target: ({cmd_pos[0]:.4f}, {cmd_pos[1]:.4f}, {cmd_pos[2]:.4f})'
            )

            meas_positions  = []
            meas_quaternions = []
            rep_rows = []
            pose_retries_used = 0

            for rep in range(reps):
                self.get_logger().info(f'  Rep {rep + 1}/{reps}')

                # Retry loop (FIX-5)
                move_ok = False
                plan_ms = 0.0
                exec_ms = 0.0
                retries_this_rep = 0

                for attempt in range(self.MAX_RETRIES + 1):
                    if attempt > 0:
                        retries_this_rep += 1
                        total_retries_used += 1
                        self.get_logger().warn(
                            f'    Retry {attempt}/{self.MAX_RETRIES} '
                            f'for pose {pose_id} rep {rep + 1}'
                        )

                    self._state_machine.transition_to(ExperimentState.MOVING_TO_POSE)
                    result = adapter.move_to_pose(pose)

                    if isinstance(result, tuple):
                        move_ok, plan_ms, exec_ms = result
                    else:
                        move_ok = bool(result)

                    if move_ok:
                        break

                pose_retries_used += retries_this_rep

                if not move_ok:
                    self.get_logger().warn(
                        f'  ✗ Pose {pose_id} rep {rep + 1}: '
                        f'failed after {self.MAX_RETRIES + 1} attempts — skipping'
                    )
                    continue

                # Settle
                self._state_machine.transition_to(ExperimentState.STABILIZING)
                time.sleep(settling_time)

                # Measure
                self._state_machine.transition_to(ExperimentState.MEASURING)
                meas = adapter.get_measurement()

                if meas is None:
                    self.get_logger().warn(
                        f'  ✗ Pose {pose_id} rep {rep + 1}: measurement is None'
                    )
                    continue

                meas_pos = np.array([
                    meas.position.x,
                    meas.position.y,
                    meas.position.z,
                ])
                meas_q = [
                    meas.orientation.x,
                    meas.orientation.y,
                    meas.orientation.z,
                    meas.orientation.w,
                ]

                pos_err_mm  = float(np.linalg.norm(meas_pos - cmd_pos) * 1000.0)
                ori_err_deg = self.quat_error_deg(cmd_q, meas_q)

                self.get_logger().info(
                    f'    ✓ pos_err={pos_err_mm:.3f}mm  '
                    f'ori_err={ori_err_deg:.3f}°  '
                    f'plan={plan_ms:.0f}ms  exec={exec_ms:.0f}ms'
                )

                meas_positions.append(meas_pos)
                meas_quaternions.append(meas_q)

                rep_rows.append([
                    pose_id, rep,
                    *cmd_pos.tolist(), *cmd_q,
                    *meas_pos.tolist(), *meas_q,
                    round(pos_err_mm,  6),
                    round(ori_err_deg, 6),
                    round(plan_ms,  3),
                    round(exec_ms,  3),
                    retries_this_rep,
                ])

                self._state_machine.transition_to(ExperimentState.LOGGING_RESULT)

            # Flush to CSV
            for row in rep_rows:
                self._append_csv_row(output_file, row)

            n_valid = len(meas_positions)
            self.get_logger().info(
                f'  Pose {pose_id}: {n_valid}/{reps} valid reps  '
                f'retries={pose_retries_used}'
            )

            if n_valid > 0:
                pose_success_count += 1
            else:
                pose_failure_details.append({'pose_id': pose_id})

            # Advance state machine
            if pose_id < len(valid_poses) - 1:
                self._state_machine.transition_to(ExperimentState.NEXT_POSE)
            else:
                self._state_machine.transition_to(ExperimentState.COMPLETED)

        # Joint utilization report
        self._log_joint_utilization(output_file, run_id)

        self.get_logger().info(
            f'\n{"="*55}\n'
            f'EXPERIMENT COMPLETE\n'
            f'  Run ID          : {run_id}\n'
            f'  Poses succeeded : {pose_success_count}/{len(valid_poses)}\n'
            f'  Poses filtered  : {len(raw_poses) - len(valid_poses)} (workspace)\n'
            f'  Total retries   : {total_retries_used}\n'
            f'  Output          : {output_file}'
        )

        if pose_failure_details:
            self.get_logger().warn(
                f'  Failed pose IDs : '
                f'{[p["pose_id"] for p in pose_failure_details]}'
            )

        adapter.disconnect()
        return True


def main(args=None):
    rclpy.init(args=args)

    parser = argparse.ArgumentParser(description='AutoCert ISO 9283 Experiment Node')
    parser.add_argument('--config',   required=True, help='Experiment config YAML path')
    parser.add_argument('--output',   default='',    help='Output CSV file path')
    parser.add_argument('--run-id',   default='run_001', help='Run identifier')

    filtered = remove_ros_args(args=sys.argv)[1:]
    parsed   = parser.parse_args(filtered)

    node = ExperimentNode()
    success = node.run(
        config_file=parsed.config,
        output_file=parsed.output if parsed.output else None,
        run_id=parsed.run_id,
    )
    node.destroy_node()
    rclpy.shutdown()
    sys.exit(0 if success else 1)


if __name__ == '__main__':
    main()