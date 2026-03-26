#!/usr/bin/env python3

import os
import rclpy
import argparse
import sys
import numpy as np

from rclpy.node import Node
from rclpy.utilities import remove_ros_args

from .robot_adapter.sim_adapter import SimRobotAdapter
from .pose_generator import PoseGenerator
from .config_loader import ConfigLoader


class ExperimentNode(Node):

    def __init__(self):
        super().__init__('experiment_node')

        self.get_logger().info("🚀 AutoCert ISO (FINAL ORIENTATION VERSION)")

        self.adapter = SimRobotAdapter(self)

        self.poses = []
        self.reps = 5
        self.output_file = None

    # ---------------- ORIENTATION ERROR ----------------
    def quat_error_deg(self, q1, q2):
        q1 = np.array(q1) / np.linalg.norm(q1)
        q2 = np.array(q2) / np.linalg.norm(q2)

        dot = np.clip(np.abs(np.dot(q1, q2)), -1.0, 1.0)
        angle = 2 * np.arccos(dot)

        return np.degrees(angle)

    # ---------------- RUN ----------------
    def run(self, config_file):

        loader = ConfigLoader(config_file)
        if not loader.load():
            self.get_logger().error("Config failed")
            return

        self.reps = loader.get('repetitions_per_pose', 5)

        strategy = PoseGenerator.create(
            loader.get('strategy'),
            loader.config
        )

        raw_poses = strategy.generate_poses()
        self.get_logger().info(f"Generated {len(raw_poses)} poses")

        self.adapter.connect()

        # Wait for joints
        while self.adapter.current_joints is None:
            rclpy.spin_once(self, timeout_sec=0.1)

        # -------- FILTER USING IK --------
        valid_poses = []

        for i, pose in enumerate(raw_poses):

            if self.adapter.compute_ik(pose):
                valid_poses.append(pose)
                self.get_logger().info(f"✅ Pose {i} reachable")
            else:
                self.get_logger().warn(f"❌ Pose {i} unreachable")

        if not valid_poses:
            self.get_logger().error("No valid poses")
            return

        self.poses = valid_poses

        # -------- CSV --------
        with open(self.output_file, 'w') as f:
            f.write(
                "pose_id,rep,"
                "cmd_x,cmd_y,cmd_z,"
                "meas_x,meas_y,meas_z,"
                "meas_qx,meas_qy,meas_qz,meas_qw,"
                "pos_error_mm,ori_error_deg\n"
            )

        # -------- RUN --------
        for pid, pose in enumerate(self.poses):

            self.get_logger().info(f"\n🎯 Pose {pid}")

            pos_samples = []
            ori_samples = []

            ref_q = None

            cmd = np.array([
                pose.position.x,
                pose.position.y,
                pose.position.z
            ])

            for rep in range(self.reps):

                self.get_logger().info(f"  Rep {rep+1}")

                if not self.adapter.move_to_pose(pose):
                    continue

                meas = self.adapter.get_measurement()
                if meas is None:
                    continue

                p = np.array([
                    meas.position.x,
                    meas.position.y,
                    meas.position.z
                ])

                q = np.array([
                    meas.orientation.x,
                    meas.orientation.y,
                    meas.orientation.z,
                    meas.orientation.w
                ])

                # 🔥 SET REFERENCE (FIRST VALID ONLY)
                if ref_q is None:
                    ref_q = q / np.linalg.norm(q)
                    self.get_logger().info("   → Reference orientation set")

                pos_err = np.linalg.norm(p - cmd) * 1000
                ori_err = self.quat_error_deg(ref_q, q)

                pos_samples.append(p)
                ori_samples.append(q)

                with open(self.output_file, 'a') as f:
                    f.write(
                        f"{pid},{rep+1},"
                        f"{cmd[0]},{cmd[1]},{cmd[2]},"
                        f"{p[0]},{p[1]},{p[2]},"
                        f"{q[0]},{q[1]},{q[2]},{q[3]},"
                        f"{pos_err},{ori_err}\n"
                    )

                self.get_logger().info(
                    f"   → Pos: {pos_err:.2f} mm | Ori: {ori_err:.2f} deg"
                )

            if len(pos_samples) < 3:
                continue

            # -------- POSITION METRICS --------
            pos_samples = np.array(pos_samples)
            bary = np.mean(pos_samples, axis=0)

            ap = np.linalg.norm(bary - cmd) * 1000
            dists = np.linalg.norm(pos_samples - bary, axis=1)
            rp = (np.mean(dists) + 3*np.std(dists, ddof=1)) * 1000

            # -------- ORIENTATION METRICS --------
            ori_samples = np.array([q/np.linalg.norm(q) for q in ori_samples])

            q_mean = np.mean(ori_samples, axis=0)
            q_mean = q_mean / np.linalg.norm(q_mean)

            ao = self.quat_error_deg(ref_q, q_mean)

            ori_dists = [self.quat_error_deg(q_mean, q) for q in ori_samples]
            ro = np.mean(ori_dists) + 3*np.std(ori_dists, ddof=1)

            self.get_logger().info(
                f"📊 Pose {pid} → "
                f"AP: {ap:.3f} mm | RP: {rp:.3f} mm | "
                f"AO: {ao:.3f} deg | RO: {ro:.3f} deg"
            )

        self.get_logger().info("\n🏁 FINAL COMPLETED")


# ---------------- MAIN ----------------
def main(args=None):

    rclpy.init(args=args)

    parser = argparse.ArgumentParser()
    parser.add_argument('--config', required=True)
    parser.add_argument('--output', required=True)
    parser.add_argument('--run-id', default='run_000')
    parser.add_argument('--robot-mode', default='simulation')

    parsed_args = parser.parse_args(remove_ros_args(args=sys.argv)[1:])

    node = ExperimentNode()
    node.output_file = parsed_args.output

    try:
        node.run(parsed_args.config)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()