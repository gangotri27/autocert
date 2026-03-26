# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocert_interfaces:msg/PoseMeasurement.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseMeasurement(type):
    """Metaclass of message 'PoseMeasurement'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autocert_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autocert_interfaces.msg.PoseMeasurement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose_measurement
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose_measurement
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose_measurement
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose_measurement
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose_measurement

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseMeasurement(metaclass=Metaclass_PoseMeasurement):
    """Message class 'PoseMeasurement'."""

    __slots__ = [
        '_pose_id',
        '_repetition',
        '_pose_label',
        '_commanded_pose',
        '_measured_pose',
        '_timestamp',
        '_measurement_system',
        '_measurement_frame',
        '_measurement_quality',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pose_id': 'int32',
        'repetition': 'int32',
        'pose_label': 'string',
        'commanded_pose': 'geometry_msgs/Pose',
        'measured_pose': 'geometry_msgs/Pose',
        'timestamp': 'builtin_interfaces/Time',
        'measurement_system': 'string',
        'measurement_frame': 'string',
        'measurement_quality': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pose_id = kwargs.get('pose_id', int())
        self.repetition = kwargs.get('repetition', int())
        self.pose_label = kwargs.get('pose_label', str())
        from geometry_msgs.msg import Pose
        self.commanded_pose = kwargs.get('commanded_pose', Pose())
        from geometry_msgs.msg import Pose
        self.measured_pose = kwargs.get('measured_pose', Pose())
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.measurement_system = kwargs.get('measurement_system', str())
        self.measurement_frame = kwargs.get('measurement_frame', str())
        self.measurement_quality = kwargs.get('measurement_quality', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pose_id != other.pose_id:
            return False
        if self.repetition != other.repetition:
            return False
        if self.pose_label != other.pose_label:
            return False
        if self.commanded_pose != other.commanded_pose:
            return False
        if self.measured_pose != other.measured_pose:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.measurement_system != other.measurement_system:
            return False
        if self.measurement_frame != other.measurement_frame:
            return False
        if self.measurement_quality != other.measurement_quality:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_id(self):
        """Message field 'pose_id'."""
        return self._pose_id

    @pose_id.setter
    def pose_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pose_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pose_id' field must be an integer in [-2147483648, 2147483647]"
        self._pose_id = value

    @builtins.property
    def repetition(self):
        """Message field 'repetition'."""
        return self._repetition

    @repetition.setter
    def repetition(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'repetition' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'repetition' field must be an integer in [-2147483648, 2147483647]"
        self._repetition = value

    @builtins.property
    def pose_label(self):
        """Message field 'pose_label'."""
        return self._pose_label

    @pose_label.setter
    def pose_label(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'pose_label' field must be of type 'str'"
        self._pose_label = value

    @builtins.property
    def commanded_pose(self):
        """Message field 'commanded_pose'."""
        return self._commanded_pose

    @commanded_pose.setter
    def commanded_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'commanded_pose' field must be a sub message of type 'Pose'"
        self._commanded_pose = value

    @builtins.property
    def measured_pose(self):
        """Message field 'measured_pose'."""
        return self._measured_pose

    @measured_pose.setter
    def measured_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'measured_pose' field must be a sub message of type 'Pose'"
        self._measured_pose = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def measurement_system(self):
        """Message field 'measurement_system'."""
        return self._measurement_system

    @measurement_system.setter
    def measurement_system(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'measurement_system' field must be of type 'str'"
        self._measurement_system = value

    @builtins.property
    def measurement_frame(self):
        """Message field 'measurement_frame'."""
        return self._measurement_frame

    @measurement_frame.setter
    def measurement_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'measurement_frame' field must be of type 'str'"
        self._measurement_frame = value

    @builtins.property
    def measurement_quality(self):
        """Message field 'measurement_quality'."""
        return self._measurement_quality

    @measurement_quality.setter
    def measurement_quality(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'measurement_quality' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'measurement_quality' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._measurement_quality = value
