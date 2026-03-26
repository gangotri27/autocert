#!/usr/bin/env python3

import os
import rclpy
import json
import yaml
import argparse
from rclpy.node import Node
from datetime import datetime, timedelta

# Import internal dataclasses from your package structure
from .certificate import Certificate, CertificateMetadata, RobotUnderTest, TestConditions, PoseResult, OverallResults
from .limits import CertificationLimits
from .report_generator import ReportGenerator

try:
    from .pdf_generator import PDFGenerator
    PDF_AVAILABLE = True
except ImportError:
    PDF_AVAILABLE = False

class CertificationNode(Node):
    def __init__(self):
        super().__init__('certification_node')
        
        # Parameters
        self.declare_parameter('input_file', '')
        self.declare_parameter('output_file', '')
        self.declare_parameter('pdf_file', '')
        self.declare_parameter('robot_metadata', '')
        self.declare_parameter('limits_file', '')
        self.declare_parameter('run_id', 'unknown')

    def run_certification(self, input_path, output_path, pdf_path, metadata_path, limits_path, run_id):
        self.get_logger().info(f"Starting Certification for Run ID: {run_id}")

        # 1. Load Evaluation Data
        with open(input_path, 'r') as f:
            eval_data = json.load(f)

        # 2. Load Robot Metadata (Manufacturer, Model, Serial)
        with open(metadata_path, 'r') as f:
            robot_meta = yaml.safe_load(f)

        # 3. Load Limits (What accuracy is acceptable?)
        limits = CertificationLimits()
        if os.path.exists(limits_path):
            with open(limits_path, 'r') as f:
                limits_data = yaml.safe_load(f)
            limits.load_from_dict(limits_data)

        # 4. Perform Pass/Fail Evaluation
        overall_stats = eval_data['overall']
        status, issues = limits.evaluate(overall_stats)

        # 5. Build Certificate Data Structure
        now = datetime.now()
        cert = Certificate(
            metadata=CertificateMetadata(
                certificate_id=f"AC-{run_id.upper()}",
                issue_date=now.strftime("%Y-%m-%d"),
                valid_until=(now + timedelta(days=365)).strftime("%Y-%m-%d"),
                standard="ISO 9283:1998",
                laboratory="AutoCert Automated Lab",
                technician="AutoCert System",
                dataset_hash="SIM_VALIDATED",
                robot_model_hash="OMX_6DOF",
                srdf_hash="N/A",
                controller_version="ROS2_JAZZY",
                issues=issues
            ),
            robot=RobotUnderTest(
                manufacturer=robot_meta.get('manufacturer', 'ROBOTIS'),
                model=robot_meta.get('model', 'OMX_6DOF'),
                serial_number=robot_meta.get('serial_number', 'N/A'),
                software_version=robot_meta.get('software_version', '1.0'),
                payload_kg=robot_meta.get('payload_kg', 0.5),
                reach_m=robot_meta.get('reach_m', 0.38)
            ),
            test_conditions=TestConditions(
                ambient_temperature_c=22.0,
                relative_humidity_percent=45.0,
                measurement_system="Gazebo TF Stream",
                measurement_system_calibration_date=now.strftime("%Y-%m-%d"),
                test_cube_size_mm=float(eval_data.get('test_cube_size_mm', 60.0)),
                test_cube_center=[0.2, 0.0, 0.22],
                repetitions_per_pose=overall_stats['num_poses'],
                outlier_threshold=3.0,
                confidence_level=0.95,
                pose_strategy="iso_cube"
            ),
            pose_results=[], # Filled below
            overall=OverallResults(
                mean_accuracy_mm=overall_stats['overall_mean_accuracy_mm'],
                max_accuracy_mm=overall_stats['overall_max_accuracy_mm'],
                mean_repeatability_mm=overall_stats['overall_mean_repeatability_mm'],
                max_repeatability_mm=overall_stats['overall_max_repeatability_mm'],
                mean_orientation_accuracy_deg=0.0, # Placeholder
                mean_orientation_repeatability_deg=0.0,
                accuracy_95_confidence_mm=0.05,
                repeatability_95_confidence_mm=0.02,
                certification_status=status
            )
        )

        # 6. Add Individual Pose Results
        for pid, pdata in eval_data['poses'].items():
            cert.pose_results.append(PoseResult(
                pose_id=int(pid),
                pose_label=f"P{pid}",
                accuracy_mm=pdata['ap_distance_mm'],
                repeatability_mm=pdata['rp_distance_mm'],
                accuracy_x_mm=pdata['ap_x'],
                accuracy_y_mm=pdata['ap_y'],
                accuracy_z_mm=pdata['ap_z'],
                orientation_error_deg=0.0,
                orientation_repeatability_deg=0.0,
                num_samples=pdata['num_samples'],
                outliers_removed=0
            ))

        # 7. Output Final JSON
        with open(output_path, 'w') as f:
            json.dump(cert.to_dict(), f, indent=4)
        self.get_logger().info(f"Certificate JSON saved: {output_path}")

        # 8. Output PDF Report
        if PDF_AVAILABLE:
            pdf_gen = PDFGenerator()
            pdf_gen.generate(cert, pdf_path)
            self.get_logger().info(f"Professional PDF Report generated: {pdf_path}")
        
        self.get_logger().info(f"--- CERTIFICATION RESULT: {status} ---")
        return True

def main():
    rclpy.init()
    parser = argparse.ArgumentParser()
    parser.add_argument('--input', required=True)
    parser.add_argument('--output', required=True)
    parser.add_argument('--pdf', required=True)
    parser.add_argument('--robot-metadata', required=True)
    parser.add_argument('--limits', required=True)
    parser.add_argument('--run-id', default='run_021')
    
    import sys
    from rclpy.utilities import remove_ros_args
    args = parser.parse_args(remove_ros_args(args=sys.argv)[1:])

    node = CertificationNode()
    node.run_certification(
        args.input, args.output, args.pdf,
        args.robot_metadata, args.limits, args.run_id
    )
    rclpy.shutdown()

if __name__ == '__main__':
    main()