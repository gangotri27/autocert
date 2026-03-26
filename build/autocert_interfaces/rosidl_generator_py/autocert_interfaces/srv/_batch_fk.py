# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocert_interfaces:srv/BatchFK.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'joint_samples'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatchFK_Request(type):
    """Metaclass of message 'BatchFK_Request'."""

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
                'autocert_interfaces.srv.BatchFK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__batch_fk__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__batch_fk__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__batch_fk__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__batch_fk__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__batch_fk__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatchFK_Request(metaclass=Metaclass_BatchFK_Request):
    """Message class 'BatchFK_Request'."""

    __slots__ = [
        '_num_samples',
        '_num_joints',
        '_joint_samples',
        '_filter_collisions',
        '_planning_group',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num_samples': 'int32',
        'num_joints': 'int32',
        'joint_samples': 'sequence<double>',
        'filter_collisions': 'boolean',
        'planning_group': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.num_samples = kwargs.get('num_samples', int())
        self.num_joints = kwargs.get('num_joints', int())
        self.joint_samples = array.array('d', kwargs.get('joint_samples', []))
        self.filter_collisions = kwargs.get('filter_collisions', bool())
        self.planning_group = kwargs.get('planning_group', str())

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
        if self.num_samples != other.num_samples:
            return False
        if self.num_joints != other.num_joints:
            return False
        if self.joint_samples != other.joint_samples:
            return False
        if self.filter_collisions != other.filter_collisions:
            return False
        if self.planning_group != other.planning_group:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_samples(self):
        """Message field 'num_samples'."""
        return self._num_samples

    @num_samples.setter
    def num_samples(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_samples' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_samples' field must be an integer in [-2147483648, 2147483647]"
        self._num_samples = value

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
    def joint_samples(self):
        """Message field 'joint_samples'."""
        return self._joint_samples

    @joint_samples.setter
    def joint_samples(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'joint_samples' array.array() must have the type code of 'd'"
                self._joint_samples = value
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
                "The 'joint_samples' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_samples = array.array('d', value)

    @builtins.property
    def filter_collisions(self):
        """Message field 'filter_collisions'."""
        return self._filter_collisions

    @filter_collisions.setter
    def filter_collisions(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'filter_collisions' field must be of type 'bool'"
        self._filter_collisions = value

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


# Import statements for member types

# Member 'valid_indices'
# Member 'computation_time_ms'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_BatchFK_Response(type):
    """Metaclass of message 'BatchFK_Response'."""

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
                'autocert_interfaces.srv.BatchFK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__batch_fk__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__batch_fk__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__batch_fk__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__batch_fk__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__batch_fk__response

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


class BatchFK_Response(metaclass=Metaclass_BatchFK_Response):
    """Message class 'BatchFK_Response'."""

    __slots__ = [
        '_poses',
        '_valid_indices',
        '_end_effector_link',
        '_computation_time_ms',
        '_error_code',
        '_error_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'poses': 'sequence<geometry_msgs/Pose>',
        'valid_indices': 'sequence<int32>',
        'end_effector_link': 'string',
        'computation_time_ms': 'sequence<double>',
        'error_code': 'int32',
        'error_message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.poses = kwargs.get('poses', [])
        self.valid_indices = array.array('i', kwargs.get('valid_indices', []))
        self.end_effector_link = kwargs.get('end_effector_link', str())
        self.computation_time_ms = array.array('d', kwargs.get('computation_time_ms', []))
        self.error_code = kwargs.get('error_code', int())
        self.error_message = kwargs.get('error_message', str())

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
        if self.poses != other.poses:
            return False
        if self.valid_indices != other.valid_indices:
            return False
        if self.end_effector_link != other.end_effector_link:
            return False
        if self.computation_time_ms != other.computation_time_ms:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'Pose'"
        self._poses = value

    @builtins.property
    def valid_indices(self):
        """Message field 'valid_indices'."""
        return self._valid_indices

    @valid_indices.setter
    def valid_indices(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'valid_indices' array.array() must have the type code of 'i'"
                self._valid_indices = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'valid_indices' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._valid_indices = array.array('i', value)

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
    def computation_time_ms(self):
        """Message field 'computation_time_ms'."""
        return self._computation_time_ms

    @computation_time_ms.setter
    def computation_time_ms(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'computation_time_ms' array.array() must have the type code of 'd'"
                self._computation_time_ms = value
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
                "The 'computation_time_ms' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._computation_time_ms = array.array('d', value)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'error_code' field must be an integer in [-2147483648, 2147483647]"
        self._error_code = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BatchFK_Event(type):
    """Metaclass of message 'BatchFK_Event'."""

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
                'autocert_interfaces.srv.BatchFK_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__batch_fk__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__batch_fk__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__batch_fk__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__batch_fk__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__batch_fk__event

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


class BatchFK_Event(metaclass=Metaclass_BatchFK_Event):
    """Message class 'BatchFK_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<autocert_interfaces/BatchFK_Request, 1>',
        'response': 'sequence<autocert_interfaces/BatchFK_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'BatchFK_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'BatchFK_Response'), 1),  # noqa: E501
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
            from autocert_interfaces.srv import BatchFK_Request
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
                 all(isinstance(v, BatchFK_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'BatchFK_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from autocert_interfaces.srv import BatchFK_Response
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
                 all(isinstance(v, BatchFK_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'BatchFK_Response'"
        self._response = value


class Metaclass_BatchFK(type):
    """Metaclass of service 'BatchFK'."""

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
                'autocert_interfaces.srv.BatchFK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__batch_fk

            from autocert_interfaces.srv import _batch_fk
            if _batch_fk.Metaclass_BatchFK_Request._TYPE_SUPPORT is None:
                _batch_fk.Metaclass_BatchFK_Request.__import_type_support__()
            if _batch_fk.Metaclass_BatchFK_Response._TYPE_SUPPORT is None:
                _batch_fk.Metaclass_BatchFK_Response.__import_type_support__()
            if _batch_fk.Metaclass_BatchFK_Event._TYPE_SUPPORT is None:
                _batch_fk.Metaclass_BatchFK_Event.__import_type_support__()


class BatchFK(metaclass=Metaclass_BatchFK):
    from autocert_interfaces.srv._batch_fk import BatchFK_Request as Request
    from autocert_interfaces.srv._batch_fk import BatchFK_Response as Response
    from autocert_interfaces.srv._batch_fk import BatchFK_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
