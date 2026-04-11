#!/usr/bin/env python3

import os
import rclpy
import json
import yaml
import argparse
from rclpy.node import Node
from datetime import datetime, timedelta

from .certificate import Certificate, CertificateMetadata, RobotUnderTest, TestConditions, PoseResult, OverallResults
from .limits import CertificationLimits
from .report_generator import ReportGenerator
from .robot_data_extractor import RobotDataExtractor
from .latex_certificate_generator import LatexCertificateGenerator

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
        self.declare_parameter('urdf_file', '')
        self.declare_parameter('srdf_file', '')
        self.declare_parameter('robot_image', '')
        self.declare_parameter('robot_image_2', '')  # Added for 2nd column image
        
        # Initialize LaTeX generator
        self.latex_generator = LatexCertificateGenerator()
        
        # Initialize robot data extractor (will be set in run)
        self.robot_extractor = None

    def _prompt_user_input(self, field_name: str, default_value: any, description: str = "") -> any:
        """Prompt user for input if value is not provided."""
        if description:
            print(f"\n{description}")
        print(f"Enter {field_name} (default: {default_value}): ", end="")
        user_input = input().strip()
        if user_input:
            if isinstance(default_value, bool):
                return user_input.lower() in ['true', 'yes', '1']
            elif isinstance(default_value, float):
                try:
                    return float(user_input)
                except ValueError:
                    return default_value
            elif isinstance(default_value, int):
                try:
                    return int(user_input)
                except ValueError:
                    return default_value
            else:
                return user_input
        return default_value

    def run_certification(self, input_path, output_path, pdf_path, metadata_path, limits_path, run_id):
        self.get_logger().info(f"Starting Certification for Run ID: {run_id}")

        # 1. Load Evaluation Data
        with open(input_path, 'r') as f:
            eval_data = json.load(f)

        # 2. Load Robot Metadata
        with open(metadata_path, 'r') as f:
            robot_meta = yaml.safe_load(f)

        # 3. Load Limits
        limits = CertificationLimits()
        if os.path.exists(limits_path):
            with open(limits_path, 'r') as f:
                limits_data = yaml.safe_load(f)
            limits.load_from_dict(limits_data)

        # 4. Extract robot data from URDF
        urdf_file = self.get_parameter('urdf_file').value
        srdf_file = self.get_parameter('srdf_file').value
        
        if urdf_file and os.path.exists(os.path.expanduser(urdf_file)):
            self.get_logger().info(f"Extracting robot data from URDF: {urdf_file}")
            self.robot_extractor = RobotDataExtractor(urdf_file, srdf_file)
            
            # Prompt for missing user data
            user_data = {}
            required_fields = {
                'robot_name': robot_meta.get('model', 'Robot'),
                'manufacturer': robot_meta.get('manufacturer', 'Unknown'),
                'model': robot_meta.get('model', 'Unknown'),
                'serial_number': robot_meta.get('serial_number', 'N/A'),
                'payload_kg': robot_meta.get('payload_kg', None),
                'max_tcp_speed': robot_meta.get('max_tcp_speed', 0.3),
                'input_voltage': robot_meta.get('input_voltage', '12 V'),
                'power_consumption': robot_meta.get('power_consumption', '35 W'),
                'max_power': robot_meta.get('max_power', '120 W'),
                'ip_rating': robot_meta.get('ip_rating', 'IP20'),
                'noise_db': robot_meta.get('noise_db', '< 60 dB(A)'),
                'communication': robot_meta.get('communication', 'TTL Dynamixel bus / ROS 2'),
                'footprint': robot_meta.get('footprint', 'Ø150 mm'),
                'cable_length': robot_meta.get('cable_length', '1 m'),
                'company': robot_meta.get('company', 'AutoCert Lab'),
                'phone': robot_meta.get('phone', '+91-9876543210'),
                'email': robot_meta.get('email', 'autocert@robotics.com'),
                'website': robot_meta.get('website', 'www.autocert.com'),
                'country': robot_meta.get('country', 'India'),
                'temperature': robot_meta.get('temperature', 22.0),
                'humidity': robot_meta.get('humidity', 45),
                'measurement_system': robot_meta.get('measurement_system', 'Leica AT960'),
                'calibration_date': robot_meta.get('calibration_date', datetime.now().strftime('%Y-%m-%d')),
            }
            
            for field, default in required_fields.items():
                if field not in robot_meta or robot_meta.get(field) is None:
                    user_data[field] = self._prompt_user_input(field, default)
                else:
                    user_data[field] = robot_meta.get(field)
            
            robot_data = self.robot_extractor.extract_all_data(user_data)
        else:
            self.get_logger().warn(f"URDF file not provided or not found: {urdf_file}")
            self.get_logger().warn("Using default robot data. Please provide URDF for accurate specifications.")
            robot_data = {
                'robot_name': robot_meta.get('model', 'Robot'),
                'manufacturer': robot_meta.get('manufacturer', 'Unknown'),
                'model': robot_meta.get('model', 'Unknown'),
                'serial_number': robot_meta.get('serial_number', 'N/A'),
                'payload_kg': robot_meta.get('payload_kg', 0.3),
                'reach_m': robot_meta.get('reach_m', 0.485),
                'weight_kg': robot_meta.get('weight_kg', 0.63),
                'material': robot_meta.get('material', 'PLA / Aluminum'),
                'dof': robot_meta.get('dof', 6),
                'max_tcp_speed': robot_meta.get('max_tcp_speed', 0.3),
                'repeatability_mm': robot_meta.get('repeatability_mm', 0.2),
                'input_voltage': robot_meta.get('input_voltage', '12 V DC'),
                'power_consumption': robot_meta.get('power_consumption', '35 W'),
                'max_power': robot_meta.get('max_power', '120 W'),
                'ip_rating': robot_meta.get('ip_rating', 'IP20'),
                'noise_db': robot_meta.get('noise_db', '< 60 dB(A)'),
                'communication': robot_meta.get('communication', 'TTL Dynamixel bus / ROS 2'),
                'footprint': robot_meta.get('footprint', 'Ø150 mm'),
                'cable_length': robot_meta.get('cable_length', '1 m'),
                'joints': [
                    {'name': 'Base (J1)', 'range': '±180°', 'speed': '275°/s', 'torque': '4.1 Nm'},
                    {'name': 'Shoulder (J2)', 'range': '±86°', 'speed': '275°/s', 'torque': '4.1 Nm'},
                    {'name': 'Elbow (J3)', 'range': '-86° to 80°', 'speed': '275°/s', 'torque': '4.1 Nm'},
                    {'name': 'Wrist Pitch (J4)', 'range': '-97° to 113°', 'speed': '275°/s', 'torque': '4.1 Nm'},
                    {'name': 'Wrist Roll (J5)', 'range': '±180°', 'speed': '275°/s', 'torque': '1.5 Nm'},
                ],
                'contact_info': {
                    'company': robot_meta.get('company', 'AutoCert Lab'),
                    'phone': robot_meta.get('phone', '+91-9876543210'),
                    'email': robot_meta.get('email', 'autocert@robotics.com'),
                    'website': robot_meta.get('website', 'www.autocert.com'),
                    'country': robot_meta.get('country', 'India'),
                }
            }

        # 5. Perform Pass/Fail Evaluation
        overall_stats = eval_data['overall']
        status, issues = limits.evaluate(overall_stats)

        now = datetime.now()
        
        # Additional Data specifically for new LaTeX template
        pdf_data = {
            'robot_image': self.get_parameter('robot_image').value,
            'robot_image_2': self.get_parameter('robot_image_2').value,
            'software_version': robot_meta.get('software_version', '1.0'),
            'year': str(now.year),
            'subtitle': robot_meta.get('subtitle', '6-DOF Upgraded Edition'),
            'safety_rating': robot_meta.get('safety_rating', 'Uncertified (Research use only)'),
            'repo_url': robot_meta.get('repo_url', 'https://github.com/KMTI-ROBOPARADIGM/omx-wrist-roll-original'),
            'repo_url_short': robot_meta.get('repo_url_short', 'github.com/KMTI-ROBOPARADIGM/omx-wrist-roll-original'),
            'max_joint_speed': robot_meta.get('max_joint_speed', 275),
            
            # Common params
            'mean_accuracy_mm': overall_stats.get('overall_mean_accuracy_mm', 0),
            'max_accuracy_mm': overall_stats.get('overall_max_accuracy_mm', 0),
            'mean_repeatability_mm': overall_stats.get('overall_mean_repeatability_mm', 0),
            'max_repeatability_mm': overall_stats.get('overall_max_repeatability_mm', 0),
            'mean_orientation_accuracy_deg': overall_stats.get('overall_mean_orientation_accuracy_deg', 0),
            **robot_data
        }
        
        overall_stats['certification_status'] = status
        overall_stats['issues'] = issues
        
        # 7. Build JSON Certificate
        cert = Certificate(
            metadata=CertificateMetadata(
                certificate_id=f"AC-{run_id.upper()}",
                issue_date=now.strftime("%Y-%m-%d"),
                valid_until=(now + timedelta(days=365)).strftime("%Y-%m-%d"),
                standard="ISO 9283:1998",
                laboratory=robot_meta.get('laboratory', 'AutoCert Lab'),
                technician=robot_meta.get('technician', 'AutoCert System'),
                dataset_hash="SIM_VALIDATED",
                robot_model_hash="OMX_6DOF",
                srdf_hash="N/A",
                controller_version="ROS2_JAZZY",
                issues=issues
            ),
            robot=RobotUnderTest(
                manufacturer=robot_data.get('manufacturer', 'Unknown'),
                model=robot_data.get('model', 'Unknown'),
                serial_number=robot_data.get('serial_number', 'N/A'),
                software_version=robot_meta.get('software_version', '1.0'),
                payload_kg=robot_data.get('payload_kg', 0.5),
                reach_m=robot_data.get('reach_m', 0.38)
            ),
            test_conditions=TestConditions(
                ambient_temperature_c=robot_meta.get('temperature', 22.0),
                relative_humidity_percent=robot_meta.get('humidity', 45),
                measurement_system=robot_meta.get('measurement_system', 'Leica AT960'),
                measurement_system_calibration_date=robot_meta.get('calibration_date', now.strftime('%Y-%m-%d')),
                test_cube_size_mm=float(eval_data.get('test_cube_size_mm', 60.0)),
                test_cube_center=[0.2, 0.0, 0.22],
                repetitions_per_pose=overall_stats['num_poses'],
                outlier_threshold=3.0,
                confidence_level=0.95,
                pose_strategy="iso_cube"
            ),
            pose_results=[],  
            overall=OverallResults(
                mean_accuracy_mm=overall_stats.get('overall_mean_accuracy_mm', 0),
                max_accuracy_mm=overall_stats.get('overall_max_accuracy_mm', 0),
                mean_repeatability_mm=overall_stats.get('overall_mean_repeatability_mm', 0),
                max_repeatability_mm=overall_stats.get('overall_max_repeatability_mm', 0),
                mean_orientation_accuracy_deg=overall_stats.get('overall_mean_orientation_accuracy_deg', 0),
                mean_orientation_repeatability_deg=overall_stats.get('overall_mean_orientation_repeatability_deg', 0),
                accuracy_95_confidence_mm=0.05,
                repeatability_95_confidence_mm=0.02,
                certification_status=status
            )
        )

        for pid, pdata in eval_data.get('poses', {}).items():
            cert.pose_results.append(PoseResult(
                pose_id=int(pid),
                pose_label=f"P{pid}",
                accuracy_mm=pdata.get('ap_distance_mm', 0),
                repeatability_mm=pdata.get('rp_distance_mm', 0),
                accuracy_x_mm=pdata.get('ap_x', 0) if 'ap_x' in pdata else 0,
                accuracy_y_mm=pdata.get('ap_y', 0) if 'ap_y' in pdata else 0,
                accuracy_z_mm=pdata.get('ap_z', 0) if 'ap_z' in pdata else 0,
                orientation_error_deg=pdata.get('ao_deg', 0),
                orientation_repeatability_deg=pdata.get('ro_deg', 0),
                num_samples=pdata.get('num_samples', 0),
                outliers_removed=0
            ))

        with open(output_path, 'w') as f:
            json.dump(cert.to_dict(), f, indent=4)
        self.get_logger().info(f"Certificate JSON saved: {output_path}")

        # 10. Output LaTeX PDF Report
        self.get_logger().info("Generating LaTeX PDF certificate...")
        success = self.latex_generator.generate_pdf(pdf_data, pdf_path)
        
        if success:
            self.get_logger().info(f"Professional LaTeX PDF Report generated: {pdf_path}")
        else:
            self.get_logger().error("Failed to generate LaTeX PDF. Ensure pdflatex is installed.")
        
        # Legacy fallback if pdflatex failed
        if PDF_AVAILABLE and not success:
            pdf_gen = PDFGenerator()
            pdf_gen.generate(cert, pdf_path.replace('.pdf', '_legacy.pdf'))
            self.get_logger().info(f"Legacy PDF Report generated: {pdf_path.replace('.pdf', '_legacy.pdf')}")
        
        self.get_logger().info(f"--- CERTIFICATION RESULT: {status} ---")
        if issues:
            self.get_logger().warn(f"Issues: {', '.join(issues)}")
        
        return True


def main():
    rclpy.init()
    parser = argparse.ArgumentParser(description='AutoCert Certification Node')
    parser.add_argument('--input', required=True, help='Input evaluation JSON file')
    parser.add_argument('--output', required=True, help='Output certificate JSON file')
    parser.add_argument('--pdf', required=True, help='Output PDF certificate file')
    parser.add_argument('--robot-metadata', required=True, help='Robot metadata YAML file')
    parser.add_argument('--limits', required=True, help='Limits YAML file')
    parser.add_argument('--run-id', default='run_021', help='Run identifier')
    parser.add_argument('--urdf', default='', help='URDF or xacro file path')
    parser.add_argument('--srdf', default='', help='SRDF file path')
    parser.add_argument('--robot-image', default='', help='Robot primary image file path')
    parser.add_argument('--robot-image-2', default='', help='Robot secondary image file path')
    
    import sys
    from rclpy.utilities import remove_ros_args
    args = parser.parse_args(remove_ros_args(args=sys.argv)[1:])

    node = CertificationNode()
    
    # Set additional parameters
    # Set additional parameters
    if args.urdf:
        node.set_parameters([rclpy.parameter.Parameter('urdf_file', rclpy.Parameter.Type.STRING, args.urdf)])
    if args.srdf:
        node.set_parameters([rclpy.parameter.Parameter('srdf_file', rclpy.Parameter.Type.STRING, args.srdf)])
    if args.robot_image:
        node.set_parameters([rclpy.parameter.Parameter('robot_image', rclpy.Parameter.Type.STRING, args.robot_image)])
    if args.robot_image_2:
        node.set_parameters([rclpy.parameter.Parameter('robot_image_2', rclpy.Parameter.Type.STRING, args.robot_image_2)])
        
    node.run_certification(
        args.input, args.output, args.pdf,
        args.robot_metadata, args.limits, args.run_id
    )
    rclpy.shutdown()


if __name__ == '__main__':
    main()