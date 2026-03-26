# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocert_interfaces:srv/GetRobotInfo.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRobotInfo_Request(type):
    """Metaclass of message 'GetRobotInfo_Request'."""

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
                'autocert_interfaces.srv.GetRobotInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotInfo_Request(metaclass=Metaclass_GetRobotInfo_Request):
    """Message class 'GetRobotInfo_Request'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'joint_min_limits'
# Member 'joint_max_limits'
# Member 'joint_velocity_limits'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRobotInfo_Response(type):
    """Metaclass of message 'GetRobotInfo_Response'."""

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
                'autocert_interfaces.srv.GetRobotInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotInfo_Response(metaclass=Metaclass_GetRobotInfo_Response):
    """Message class 'GetRobotInfo_Response'."""

    __slots__ = [
        '_robot_name',
        '_planning_group',
        '_end_effector_link',
        '_joint_names',
        '_link_names',
        '_group_names',
        '_joint_min_limits',
        '_joint_max_limits',
        '_joint_velocity_limits',
        '_num_joints',
        '_num_links',
        '_collision_checking_available',
        '_kinematics_solver_available',
        '_kinematics_solver_name',
        '_default_timeout',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'planning_group': 'string',
        'end_effector_link': 'string',
        'joint_names': 'sequence<string>',
        'link_names': 'sequence<string>',
        'group_names': 'sequence<string>',
        'joint_min_limits': 'sequence<double>',
        'joint_max_limits': 'sequence<double>',
        'joint_velocity_limits': 'sequence<double>',
        'num_joints': 'int32',
        'num_links': 'int32',
        'collision_checking_available': 'boolean',
        'kinematics_solver_available': 'boolean',
        'kinematics_solver_name': 'string',
        'default_timeout': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.robot_name = kwargs.get('robot_name', str())
        self.planning_group = kwargs.get('planning_group', str())
        self.end_effector_link = kwargs.get('end_effector_link', str())
        self.joint_names = kwargs.get('joint_names', [])
        self.link_names = kwargs.get('link_names', [])
        self.group_names = kwargs.get('group_names', [])
        self.joint_min_limits = array.array('d', kwargs.get('joint_min_limits', []))
        self.joint_max_limits = array.array('d', kwargs.get('joint_max_limits', []))
        self.joint_velocity_limits = array.array('d', kwargs.get('joint_velocity_limits', []))
        self.num_joints = kwargs.get('num_joints', int())
        self.num_links = kwargs.get('num_links', int())
        self.collision_checking_available = kwargs.get('collision_checking_available', bool())
        self.kinematics_solver_available = kwargs.get('kinematics_solver_available', bool())
        self.kinematics_solver_name = kwargs.get('kinematics_solver_name', str())
        self.default_timeout = kwargs.get('default_timeout', float())

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
        if self.robot_name != other.robot_name:
            return False
        if self.planning_group != other.planning_group:
            return False
        if self.end_effector_link != other.end_effector_link:
            return False
        if self.joint_names != other.joint_names:
            return False
        if self.link_names != other.link_names:
            return False
        if self.group_names != other.group_names:
            return False
        if self.joint_min_limits != other.joint_min_limits:
            return False
        if self.joint_max_limits != other.joint_max_limits:
            return False
        if self.joint_velocity_limits != other.joint_velocity_limits:
            return False
        if self.num_joints != other.num_joints:
            return False
        if self.num_links != other.num_links:
            return False
        if self.collision_checking_available != other.collision_checking_available:
            return False
        if self.kinematics_solver_available != other.kinematics_solver_available:
            return False
        if self.kinematics_solver_name != other.kinematics_solver_name:
            return False
        if self.default_timeout != other.default_timeout:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def planning_group(self):
        """Message field 'planning_group'."""
        return self._planning_group

    @planning_group.setter
    def planning_group(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'planning_group' field must be of type 'str'"
        self._planning_group = value

    @builtins.property
    def end_effector_link(self):
        """Message field 'end_effector_link'."""
        return self._end_effector_link

    @end_effector_link.setter
    def end_effector_link(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'end_effector_link' field must be of type 'str'"
        self._end_effector_link = value

    @builtins.property
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @builtins.property
    def link_names(self):
        """Message field 'link_names'."""
        return self._link_names

    @link_names.setter
    def link_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'link_names' field must be a set or sequence and each value of type 'str'"
        self._link_names = value

    @builtins.property
    def group_names(self):
        """Message field 'group_names'."""
        return self._group_names

    @group_names.setter
    def group_names(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'group_names' field must be a set or sequence and each value of type 'str'"
        self._group_names = value

    @builtins.property
    def joint_min_limits(self):
        """Message field 'joint_min_limits'."""
        return self._joint_min_limits

    @joint_min_limits.setter
    def joint_min_limits(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_min_limits' array.array() must have the type code of 'd'"
                self._joint_min_limits = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_min_limits' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_min_limits = array.array('d', value)

    @builtins.property
    def joint_max_limits(self):
        """Message field 'joint_max_limits'."""
        return self._joint_max_limits

    @joint_max_limits.setter
    def joint_max_limits(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_max_limits' array.array() must have the type code of 'd'"
                self._joint_max_limits = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_max_limits' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_max_limits = array.array('d', value)

    @builtins.property
    def joint_velocity_limits(self):
        """Message field 'joint_velocity_limits'."""
        return self._joint_velocity_limits

    @joint_velocity_limits.setter
    def joint_velocity_limits(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_velocity_limits' array.array() must have the type code of 'd'"
                self._joint_velocity_limits = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joint_velocity_limits' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_velocity_limits = array.array('d', value)

    @builtins.property
    def num_joints(self):
        """Message field 'num_joints'."""
        return self._num_joints

    @num_joints.setter
    def num_joints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_joints' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_joints' field must be an integer in [-2147483648, 2147483647]"
        self._num_joints = value

    @builtins.property
    def num_links(self):
        """Message field 'num_links'."""
        return self._num_links

    @num_links.setter
    def num_links(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_links' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_links' field must be an integer in [-2147483648, 2147483647]"
        self._num_links = value

    @builtins.property
    def collision_checking_available(self):
        """Message field 'collision_checking_available'."""
        return self._collision_checking_available

    @collision_checking_available.setter
    def collision_checking_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'collision_checking_available' field must be of type 'bool'"
        self._collision_checking_available = value

    @builtins.property
    def kinematics_solver_available(self):
        """Message field 'kinematics_solver_available'."""
        return self._kinematics_solver_available

    @kinematics_solver_available.setter
    def kinematics_solver_available(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'kinematics_solver_available' field must be of type 'bool'"
        self._kinematics_solver_available = value

    @builtins.property
    def kinematics_solver_name(self):
        """Message field 'kinematics_solver_name'."""
        return self._kinematics_solver_name

    @kinematics_solver_name.setter
    def kinematics_solver_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'kinematics_solver_name' field must be of type 'str'"
        self._kinematics_solver_name = value

    @builtins.property
    def default_timeout(self):
        """Message field 'default_timeout'."""
        return self._default_timeout

    @default_timeout.setter
    def default_timeout(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'default_timeout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'default_timeout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._default_timeout = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRobotInfo_Event(type):
    """Metaclass of message 'GetRobotInfo_Event'."""

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
                'autocert_interfaces.srv.GetRobotInfo_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_robot_info__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_robot_info__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_robot_info__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_robot_info__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_robot_info__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRobotInfo_Event(metaclass=Metaclass_GetRobotInfo_Event):
    """Message class 'GetRobotInfo_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<autocert_interfaces/GetRobotInfo_Request, 1>',
        'response': 'sequence<autocert_interfaces/GetRobotInfo_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'GetRobotInfo_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'GetRobotInfo_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from autocert_interfaces.srv import GetRobotInfo_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetRobotInfo_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GetRobotInfo_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from autocert_interfaces.srv import GetRobotInfo_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GetRobotInfo_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GetRobotInfo_Response'"
        self._response = value


class Metaclass_GetRobotInfo(type):
    """Metaclass of service 'GetRobotInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autocert_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autocert_interfaces.srv.GetRobotInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_robot_info

            from autocert_interfaces.srv import _get_robot_info
            if _get_robot_info.Metaclass_GetRobotInfo_Request._TYPE_SUPPORT is None:
                _get_robot_info.Metaclass_GetRobotInfo_Request.__import_type_support__()
            if _get_robot_info.Metaclass_GetRobotInfo_Response._TYPE_SUPPORT is None:
                _get_robot_info.Metaclass_GetRobotInfo_Response.__import_type_support__()
            if _get_robot_info.Metaclass_GetRobotInfo_Event._TYPE_SUPPORT is None:
                _get_robot_info.Metaclass_GetRobotInfo_Event.__import_type_support__()


class GetRobotInfo(metaclass=Metaclass_GetRobotInfo):
    from autocert_interfaces.srv._get_robot_info import GetRobotInfo_Request as Request
    from autocert_interfaces.srv._get_robot_info import GetRobotInfo_Response as Response
    from autocert_interfaces.srv._get_robot_info import GetRobotInfo_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
