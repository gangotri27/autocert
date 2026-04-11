#!/usr/bin/env python3
"""Generate clean, professional ISO 9283 PDF certificates using LaTeX."""

import os
import subprocess
import tempfile
import shutil
from typing import Dict, Any, Optional


class LatexCertificateGenerator:

    def __init__(self, template_dir: Optional[str] = None):
        if template_dir is None:
            package_dir = os.path.dirname(os.path.abspath(__file__))
            self.template_dir = os.path.join(package_dir, '..', 'templates')
        else:
            self.template_dir = template_dir

        os.makedirs(self.template_dir, exist_ok=True)
        self._ensure_template_exists()

    def _ensure_template_exists(self):
        template_path = os.path.join(self.template_dir, 'certificate_template.tex')
        if not os.path.exists(template_path):
            self._create_template(template_path)

    def _create_template(self, path: str):
        template = r'''\documentclass[a4paper,landscape,10pt]{article}

% ================= PACKAGES ================= %
\usepackage[table]{xcolor} 
\usepackage[margin=0.6in]{geometry}
\usepackage{graphicx}
\usepackage{multicol}
\usepackage{tabularx}
\usepackage{helvet} 
\usepackage{titlesec}
\usepackage{amssymb}
\usepackage{enumitem} 
\usepackage{qrcode}
\usepackage[hidelinks]{hyperref} 

\renewcommand{\familydefault}{\sfdefault}

% ================= COLORS ================= %
\definecolor{maincolor}{HTML}{008080}
\definecolor{rowcolor}{HTML}{E6F2F2}
\definecolor{white}{HTML}{FFFFFF}

% ================= LAYOUT ================= %
\setlength{\columnsep}{0.6in}
\setlength{\parindent}{0pt}
\setlength{\tabcolsep}{6pt}
\renewcommand{\arraystretch}{1.3}
\pagestyle{empty}
\raggedcolumns

% ================= SECTION STYLE ================= %
\newcommand{\sectitle}[1]{
    \vspace{0.4cm}
    \colorbox{rowcolor}{
        \parbox{\linewidth}{
            \textbf{\textcolor{maincolor}{#1}}
        }
    }
    \vspace{0.2cm}
}

\begin{document}

% ================= HEADER ================= %
\noindent
\colorbox{maincolor}{
    \parbox{\dimexpr\linewidth-2\fboxsep}{
        \vspace{8pt}
        
        % Top row
        {\color{white}\Large\textbf{{{ROBOT_NAME}}}} \hfill
        {\color{white}\small Research System Datasheet}
        
        \vspace{2pt}
        
        % Bottom row (Model + Revision)
        {\color{white}\small Model: {{MODEL}}} \hfill
        {\color{white}\small Rev {{SOFTWARE_VERSION}} | {{YEAR}}}
        
        \vspace{8pt}
    }
}
\vspace{0.4cm}

\begin{multicols}{3}

% ========================================== %
% PAGE 1 - COLUMN 1: Image & Pitch
% ========================================== %
\begin{center}
    \includegraphics[width=0.7\linewidth, height=4.5cm, keepaspectratio]{robo_1.png} \\
    \vspace{0.1cm}
    {\scriptsize \textit{*Highlighted component indicates the custom wrist-roll joint addition.}}
\end{center}

\vspace{0.2cm}
{\fontsize{26}{28}\selectfont \textbf{{{ROBOT_NAME}}}} \\

{\large \textcolor{maincolor}{{{SUBTITLE}}}}

\bigskip
{\large \textbf{Full Orientation. Designed for research and educational applications.}}
\vspace{0.1cm}
\textcolor{maincolor}{\rule{\linewidth}{1pt}}
\smallskip

The upgraded {{ROBOT_NAME}} features a custom {{DOF}}-DOF configuration with an integrated wrist-roll joint, enabling full spatial orientation. With a compact footprint and an open-source control stack, it provides a cost-effective solution for robotic manipulation, rapid prototyping, and educational applications.

\vfill\null
\columnbreak

% ========================================== %
% PAGE 1 - COLUMN 2: Features & Performance
% ========================================== %
\sectitle{Key Features}
\begin{itemize}[leftmargin=*, nosep]
    \item Full {{DOF}}-DOF spatial orientation capability
    \item Native out-of-the-box ROS 2 integration
    \item Lightweight, modular, and upgradeable design
    \item Built-on industrial Dynamixel smart servos
    \item Cost-effective platform for advanced R\&D
\end{itemize}

\sectitle{Modifications vs. Original}
\begin{itemize}[leftmargin=*, nosep]
    \item \textbf{Hardware:} Added 1 DOF (wrist-roll joint)
    \item \textbf{Actuation:} J5 utilizes XL430-W250-T servo
    \item \textbf{Software:} Updated URDF \& MoveIt kinematics
\end{itemize}

\sectitle{Applications}
\begin{itemize}[leftmargin=*, nosep]
    \item Pick-and-place automation testing
    \item Algorithm benchmarking \& motion planning
    \item University robotics education and training
\end{itemize}

\sectitle{Performance}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.45\linewidth} X}
Max TCP speed & {{MAX_TCP_SPEED}} m/s \\
Max joint speed & {{MAX_JOINT_SPEED}}$^\circ$/s \\
Mounting Options & Tabletop or fixed base\\
Noise Level & {{NOISE_DB}} \\
Orientational Accuracy & $\pm$ {{MEAN_ORIENT_ACCURACY}} $^\circ$\\
Positional Accuracy & $\pm$ {{MEAN_ACCURACY}} mm\\
\end{tabularx}
}
}

\vfill\null
\columnbreak

% ========================================== %
% PAGE 1 - COLUMN 3: General & Joint Specs
% ========================================== %
\sectitle{General Specification}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.42\linewidth} X}
Payload & {{PAYLOAD}} kg (at max reach) \\
Reach & {{REACH}} mm\\
Degrees of Freedom & {{DOF}} \\
Configuration & Articulated Manipulator \\
Repeatability & $\pm${{MEAN_REPEATABILITY}} mm \\
Footprint & {{FOOTPRINT}} \\
\end{tabularx}
}
}
\smallskip
{\footnotesize *Payload includes end-effector weight. Reach defined as maximum distance from base to TCP.}

\sectitle{Joint Specifications}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{l X X X}
\textbf{Axis} & \textbf{Working Range} & \textbf{Max Speed} & \textbf{Peak Torque} \\
{{JOINT_TABLE}}
\end{tabularx}
}
}
\smallskip
{\footnotesize *Gripper provides additional actuation DOF. Torque values are derived from manufacturer datasheets.}

% ========================================== %
% ================= PAGE 2 ================= %
% ========================================== %
\vfill\null
\pagebreak

% ========================================== %
% PAGE 2 - COLUMN 1 (Col 4 overall): Control
% ========================================== %
\sectitle{Control System}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.38\linewidth} X}
Supported OS & Ubuntu 22.04 / 24.04 \\
Middleware & ROS 2 (Humble / Jazzy) \\
Motion Planning & MoveIt 2 (OMPL) \\
Controller & ros2\_control \\
Simulation & Gazebo (Ignition) \\
Programming & Python, C++ APIs \\
Interface & USB / Serial (via controller) \\
\end{tabularx}
}
}

\sectitle{Actuators}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.38\linewidth} X}
Actuator Type & DYNAMIXEL Smart Servo \\
Motor Models & XM430-W350-T / XL430-W250-T \\
Control Mode & Position / Velocity / Current \\
Communication & TTL Multi-Drop Bus \\
Feedback & Absolute Contactless Encoder \\
\end{tabularx}
}
}

\sectitle{Electrical Specifications}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.4\linewidth} X}
Input voltage & {{INPUT_VOLTAGE}} \\
Power supply & 12 V, 5 A adapter \\
Typical power & {{POWER_CONSUMPTION}} \\
Maximum power & {{MAX_POWER}} (peak load) \\
Digital I/O & Available via external controller\\
\end{tabularx}
}
}

\vfill\null
\columnbreak

% ========================================== %
% PAGE 2 - COLUMN 2 (Col 5 overall): Hardware
% ========================================== %

\begin{center}
    \includegraphics[width=0.95\linewidth, height=4.5cm, keepaspectratio]{robo_2.png}
\end{center}
\vspace{-0.2cm}

\sectitle{Physical \& Kinematics}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.35\linewidth} X}
Materials & {{MATERIAL}} \\
Cable length & {{CABLE_LENGTH}} \\
Total Weight & $\approx$ {{WEIGHT}} kg \\
IP Rating & {{IP_RATING}} \\
Operating Temp & 0$^\circ$C to 45$^\circ$C \\
Humidity & 5\% to 85\% (non-condensing) \\
\end{tabularx}
}
}

\sectitle{Safety \& Compliance}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.35\linewidth} X}
Safety rating & {{SAFETY_RATING}} \\
Architecture & Software-limited force/torque feedback (PL-b equivalent) \\
Protection & Configurable joint, velocity, and torque limits \\
E-Stop & Software-triggered (external hardware optional) \\
\end{tabularx}
}
}

\vfill\null
\columnbreak

% ========================================== %
% PAGE 2 - COLUMN 3 (Col 6 overall): Logistics
% ========================================== %

\sectitle{Known Limitations}
\begin{itemize}[leftmargin=*, nosep]
    \item Not suitable for industrial payloads or high-cycle loads
    \item Limited stiffness due to 3D-printed PLA structure
    \item Accuracy subject to standard Dynamixel gear backlash
\end{itemize}

\sectitle{Documentation \& Resources}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\begin{tabularx}{\linewidth}{c X}
\vspace{2pt} \qrcode[height=2.3cm]{{{REPO_URL}}} \vspace{2pt} &
\textbf{GitHub Repository} \newline
Access source code, ROS 2 packages, setup guides, and updates. \newline
{\scriptsize \href{{{REPO_URL}}}{{{REPO_URL_SHORT}}}} \\
\end{tabularx}
}
}

\sectitle{Package Contents}

\begin{itemize}[leftmargin=*, nosep]
\item {{DOF}}-DOF Robotic Arm \& Gripper
\item 12V Power Adapter
\item Communication Cable
\item Mounting Hardware
\item Quick start guide / documentation
\end{itemize}

\sectitle{Contact \& Origin}

\colorbox{rowcolor}{
\parbox{\linewidth}{
\rowcolors{1}{white}{rowcolor}
\begin{tabularx}{\linewidth}{>{\raggedright\arraybackslash}p{0.25\linewidth} X}
Lab/Entity & \textbf{{{COMPANY}}} \\
Contact & \href{mailto:{{EMAIL}}}{{{EMAIL}}} \\
Location & {{COUNTRY}}\\
\end{tabularx}
}
}

\vfill\null
\end{multicols}

\end{document}
'''
        with open(path, 'w') as f:
            f.write(template)

    def generate_pdf(self, data: Dict[str, Any], output_path: str) -> bool:
        with tempfile.TemporaryDirectory() as tmpdir:
            tex = self._prepare_latex_content(data)
            tex_path = os.path.join(tmpdir, "cert.tex")

            with open(tex_path, "w") as f:
                f.write(tex)

            # Image 1 (Front/Primary)
            img_path_1 = os.path.join(tmpdir, "robo_1.png")
            if data.get("robot_image") and os.path.exists(data["robot_image"]):
                shutil.copy(data["robot_image"], img_path_1)
            else:
                from PIL import Image
                Image.new("RGB", (400, 400), "#E6F2F2").save(img_path_1)

            # Image 2 (Secondary/Kinematics)
            img_path_2 = os.path.join(tmpdir, "robo_2.png")
            if data.get("robot_image_2") and os.path.exists(data["robot_image_2"]):
                shutil.copy(data["robot_image_2"], img_path_2)
            else:
                from PIL import Image
                Image.new("RGB", (400, 400), "#E6F2F2").save(img_path_2)

            result = subprocess.run(["pdflatex", "-interaction=nonstopmode", "cert.tex"],
                cwd=tmpdir,
                stdout=subprocess.PIPE,
                stderr=subprocess.STDOUT,
                text=True
            )

            pdf_path = os.path.join(tmpdir, "cert.pdf")
            if os.path.exists(pdf_path):
                shutil.copy(pdf_path, output_path)
                return True
            else:
                # If the PDF wasn't created, print the pdflatex error log!
                print("===== PDFLATEX ERROR LOG =====")
                print(result.stdout)
                print("==============================")
                return False

    def _prepare_latex_content(self, data):
        template_path = os.path.join(self.template_dir, 'certificate_template.tex')
        with open(template_path) as f:
            template = f.read()

        joints = data.get("joints", [])
        joint_lines = []
        for i, j in enumerate(joints[:6]):
            name = j.get('name', f'J{i+1}')
            rng = j.get('range', '±180°')
            speed = j.get('speed', '275°/s')
            torque = j.get('torque', '4.1 Nm') # Default fallback
            joint_lines.append(f"{name} & {rng} & {speed} & {torque} \\\\")

        replacements = {
            "{{ROBOT_NAME}}": data.get("robot_name", "Robot"),
            "{{MODEL}}": data.get("model", "Model-X"),
            "{{SOFTWARE_VERSION}}": data.get("software_version", "1.0"),
            "{{YEAR}}": data.get("year", "2024"),
            "{{SUBTITLE}}": data.get("subtitle", "Research System"),
            "{{DOF}}": data.get("dof", 6),
            "{{MAX_TCP_SPEED}}": f"{data.get('max_tcp_speed', 0.3):.2f}",
            "{{MAX_JOINT_SPEED}}": data.get("max_joint_speed", 275),
            "{{NOISE_DB}}": data.get("noise_db", "< 60 dB(A)"),
            "{{MEAN_ORIENT_ACCURACY}}": f"{data.get('mean_orientation_accuracy_deg', 0.0):.3f}",
            "{{MEAN_ACCURACY}}": f"{data.get('mean_accuracy_mm', 0.0):.3f}",
            "{{PAYLOAD}}": data.get("payload_kg", 0.3),
            "{{REACH}}": int(data.get("reach_m", 0.485) * 1000),
            "{{MEAN_REPEATABILITY}}": f"{data.get('mean_repeatability_mm', 0.0):.3f}",
            "{{FOOTPRINT}}": data.get("footprint", "Ø150 mm"),
            "{{JOINT_TABLE}}": "\n".join(joint_lines),
            "{{INPUT_VOLTAGE}}": data.get("input_voltage", "12 V DC"),
            "{{POWER_CONSUMPTION}}": data.get("power_consumption", "35 W"),
            "{{MAX_POWER}}": data.get("max_power", "120 W"),
            "{{MATERIAL}}": data.get("material", "PLA / Aluminum"),
            "{{CABLE_LENGTH}}": data.get("cable_length", "1 m"),
            "{{WEIGHT}}": data.get("weight_kg", 0.63),
            "{{IP_RATING}}": data.get("ip_rating", "IP20"),
            "{{SAFETY_RATING}}": data.get("safety_rating", "Uncertified (Research use only)"),
            "{{REPO_URL}}": data.get("repo_url", "https://github.com"),
            "{{REPO_URL_SHORT}}": data.get("repo_url_short", "github.com"),
            "{{COMPANY}}": data.get("company", "AutoCert Lab"),
            "{{EMAIL}}": data.get("email", "research@domain.edu"),
            "{{COUNTRY}}": data.get("country", "India"),
        }

        for k, v in replacements.items():
            template = template.replace(k, str(v))

        return template