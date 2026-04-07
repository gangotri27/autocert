#!/usr/bin/env python3
"""
Builds a MoveIt2 configuration dictionary from YAML parameters.
Used by launch files to avoid hardcoded configs.
"""

import os
import yaml
from typing import Dict, Any, Optional


class MoveItConfigBuilder:
    """
    Builds MoveIt2 configuration parameters from YAML files or dicts.
    Follows the robot-agnostic principle: all frame/group names come
    from SRDF and parameter files.
    """

    # Keys expected in every robot config
    REQUIRED_KEYS = [
        'planning_group',
        'end_effector_link',
        'reference_frame',
    ]

    def __init__(self, config_path: Optional[str] = None):
        self._config: Dict[str, Any] = {}
        if config_path:
            self.load_from_yaml(config_path)

    def load_from_yaml(self, path: str) -> 'MoveItConfigBuilder':
        """Load configuration from a YAML file."""
        path = os.path.expanduser(path)
        if not os.path.exists(path):
            raise FileNotFoundError(f'Config not found: {path}')
        with open(path, 'r') as f:
            data = yaml.safe_load(f)
        self._config.update(data)
        return self

    def set(self, key: str, value: Any) -> 'MoveItConfigBuilder':
        """Set a configuration value."""
        self._config[key] = value
        return self

    def validate(self) -> bool:
        """Check required keys are present."""
        missing = [k for k in self.REQUIRED_KEYS if k not in self._config]
        if missing:
            raise ValueError(f'Missing required config keys: {missing}')
        return True

    def build_ompl_config(self) -> Dict[str, Any]:
        """Build OMPL planning pipeline config."""
        return {
            'planning_plugin': 'ompl_interface/OMPLPlanner',
            'request_adapters': (
                'default_planner_request_adapters/AddTimeOptimalParameterization '
                'default_planner_request_adapters/FixWorkspaceBounds '
                'default_planner_request_adapters/FixStartStateBounds '
                'default_planner_request_adapters/FixStartStateCollision '
                'default_planner_request_adapters/FixStartStatePathConstraints'
            ),
            'start_state_max_bounds_error': 0.1,
            self._config.get('planning_group', 'arm'): {
                'default_planner_config': self._config.get('planner_id', 'RRTConnect'),
                'planner_configs': ['RRTConnect', 'RRT', 'RRTstar', 'PRM', 'PRMstar'],
                'longest_valid_segment_fraction': 0.005,
            }
        }

    def build_moveit_cpp_config(self) -> Dict[str, Any]:
        """Build moveit_py / MoveItCpp parameter config."""
        return {
            'planning_scene_monitor': {
                'publish_planning_scene': True,
                'publish_geometry_updates': True,
                'publish_state_updates': True,
                'publish_transforms_updates': True,
                'planning_scene_monitor_options': {
                    'name': 'planning_scene_monitor',
                    'robot_description': 'robot_description',
                    'joint_state_topic': '/joint_states',
                    'attached_collision_object_topic': '/moveit_cpp/planning_scene_monitor',
                    'publish_planning_scene_topic': '/moveit_cpp/publish_planning_scene',
                    'monitored_planning_scene_topic': '/moveit_cpp/monitored_planning_scene',
                    'wait_for_initial_state_timeout': 10.0,
                }
            },
            'planning_pipelines': {
                'pipeline_names': ['ompl'],
            },
            'ompl': self.build_ompl_config(),
        }

    def get(self, key: str, default: Any = None) -> Any:
        return self._config.get(key, default)

    @property
    def config(self) -> Dict[str, Any]:
        return dict(self._config)