#!/usr/bin/env python3

import os
import rclpy
import pandas as pd
import numpy as np
import json
import argparse
from rclpy.node import Node
from std_msgs.msg import String
from datetime import datetime


class EvaluationNode(Node):
    def __init__(self):
        super().__init__('evaluation_node')
        
        self.declare_parameter('input_file', '')
        self.declare_parameter('output_file', '')
        self.declare_parameter('run_id', 'unknown')
        
        self.status_pub = self.create_publisher(String, '/evaluation_status', 10)
        self.get_logger().info("Evaluation Node Initialized")

    # ---------------- ORIENTATION ERROR ----------------
    def quat_error_deg(self, q1, q2):
        q1 = np.array(q1) / np.linalg.norm(q1)
        q2 = np.array(q2) / np.linalg.norm(q2)

        dot = np.clip(np.abs(np.dot(q1, q2)), -1.0, 1.0)
        angle = 2 * np.arccos(dot)

        return np.degrees(angle)

    # ---------------- RUN ----------------
    def run_evaluation(self, input_path: str, output_path: str, run_id: str):

        self.get_logger().info(f"Loading data from: {input_path}")
        
        if not os.path.exists(input_path):
            self.get_logger().error("Input file not found!")
            return False

        df = pd.read_csv(input_path)

        pose_results = {}

        for pose_id, group in df.groupby('pose_id'):

            # ---------------- POSITION ----------------
            xc, yc, zc = group['cmd_x'].iloc[0], group['cmd_y'].iloc[0], group['cmd_z'].iloc[0]

            x_meas = group['meas_x'].values
            y_meas = group['meas_y'].values
            z_meas = group['meas_z'].values

            x_bar = np.mean(x_meas)
            y_bar = np.mean(y_meas)
            z_bar = np.mean(z_meas)

            ap = np.sqrt((x_bar - xc)**2 + (y_bar - yc)**2 + (z_bar - zc)**2)

            l_i = np.sqrt((x_meas - x_bar)**2 + (y_meas - y_bar)**2 + (z_meas - z_bar)**2)
            l_bar = np.mean(l_i)
            s_l = np.std(l_i, ddof=1)

            rp = l_bar + 3 * s_l

            # ---------------- ORIENTATION ----------------
            if all(col in group.columns for col in ['meas_qx','meas_qy','meas_qz','meas_qw']):

                quats = group[['meas_qx','meas_qy','meas_qz','meas_qw']].values

                # Normalize
                quats = np.array([q / np.linalg.norm(q) for q in quats])

                # 🔥 Reference = FIRST sample
                ref_q = quats[0]

                # Mean quaternion
                q_mean = np.mean(quats, axis=0)
                q_mean = q_mean / np.linalg.norm(q_mean)

                # AO
                ao = self.quat_error_deg(ref_q, q_mean)

                # RO
                ori_dists = [self.quat_error_deg(q_mean, q) for q in quats]
                ro = np.mean(ori_dists) + 3*np.std(ori_dists, ddof=1)

            else:
                ao = None
                ro = None

            # ---------------- STORE ----------------
            pose_results[int(pose_id)] = {
                'ap_distance_mm': float(ap * 1000.0),
                'rp_distance_mm': float(rp * 1000.0),
                'ao_deg': float(ao) if ao is not None else None,
                'ro_deg': float(ro) if ro is not None else None,
                'mean_x': float(x_bar),
                'mean_y': float(y_bar),
                'mean_z': float(z_bar),
                'num_samples': len(group)
            }

        # ---------------- OVERALL ----------------
        accuracies = [p['ap_distance_mm'] for p in pose_results.values()]
        repeatabilities = [p['rp_distance_mm'] for p in pose_results.values()]

        aos = [p['ao_deg'] for p in pose_results.values() if p['ao_deg'] is not None]
        ros = [p['ro_deg'] for p in pose_results.values() if p['ro_deg'] is not None]

        overall_metrics = {
            'overall_mean_accuracy_mm': float(np.mean(accuracies)),
            'overall_max_accuracy_mm': float(np.max(accuracies)),
            'overall_mean_repeatability_mm': float(np.mean(repeatabilities)),
            'overall_max_repeatability_mm': float(np.max(repeatabilities)),
            'overall_mean_orientation_accuracy_deg': float(np.mean(aos)) if aos else None,
            'overall_mean_orientation_repeatability_deg': float(np.mean(ros)) if ros else None,
            'num_poses': len(pose_results)
        }

        final_output = {
            'run_id': run_id,
            'timestamp': datetime.now().isoformat(),
            'test_standard': 'ISO 9283',
            'overall': overall_metrics,
            'poses': pose_results
        }

        os.makedirs(os.path.dirname(output_path), exist_ok=True)
        with open(output_path, 'w') as f:
            json.dump(final_output, f, indent=4)

        self.get_logger().info(f"Evaluation complete → {output_path}")
        self.get_logger().info(
            f"Mean AP: {overall_metrics['overall_mean_accuracy_mm']:.3f} mm | "
            f"Mean RP: {overall_metrics['overall_mean_repeatability_mm']:.3f} mm"
        )

        if aos:
            self.get_logger().info(
                f"Mean AO: {overall_metrics['overall_mean_orientation_accuracy_deg']:.3f} deg | "
                f"Mean RO: {overall_metrics['overall_mean_orientation_repeatability_deg']:.3f} deg"
            )

        return True


def main():
    rclpy.init()

    parser = argparse.ArgumentParser()
    parser.add_argument('--input', required=True)
    parser.add_argument('--output', required=True)
    parser.add_argument('--run-id', default='demo_run')

    import sys
    from rclpy.utilities import remove_ros_args
    args = parser.parse_args(remove_ros_args(args=sys.argv)[1:])

    node = EvaluationNode()

    node.run_evaluation(
        os.path.abspath(os.path.expanduser(args.input)),
        os.path.abspath(os.path.expanduser(args.output)),
        args.run_id
    )

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()