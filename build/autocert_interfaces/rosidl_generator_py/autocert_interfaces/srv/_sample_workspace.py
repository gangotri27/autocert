# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autocert_interfaces:srv/SampleWorkspace.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'seed_configuration'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SampleWorkspace_Request(type):
    """Metaclass of message 'SampleWorkspace_Request'."""

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
                'autocert_interfaces.srv.SampleWorkspace_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sample_workspace__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sample_workspace__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sample_workspace__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sample_workspace__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sample_workspace__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SampleWorkspace_Request(metaclass=Metaclass_SampleWorkspace_Request):
    """Message class 'SampleWorkspace_Request'."""

    __slots__ = [
        '_sampling_strategy',
        '_num_samples',
        '_seed_configuration',
        '_enable_collision_checking',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'sampling_strategy': 'string',
        'num_samples': 'int32',
        'seed_configuration': 'sequence<double>',
        'enable_collision_checking': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.sampling_strategy = kwargs.get('sampling_strategy', str())
        self.num_samples = kwargs.get('num_samples', int())
        self.seed_configuration = array.array('d', kwargs.get('seed_configuration', []))
        self.enable_collision_checking = kwargs.get('enable_collision_checking', bool())

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
        if self.sampling_strategy != other.sampling_strategy:
            return False
        if self.num_samples != other.num_samples:
            return False
        if self.seed_configuration != other.seed_configuration:
            return False
        if self.enable_collision_checking != other.enable_collision_checking:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sampling_strategy(self):
        """Message field 'sampling_strategy'."""
        return self._sampling_strategy

    @sampling_strategy.setter
    def sampling_strategy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sampling_strategy' field must be of type 'str'"
        self._sampling_strategy = value

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
    def seed_configuration(self):
        """Message field 'seed_configuration'."""
        return self._seed_configuration

    @seed_configuration.setter
    def seed_configuration(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'seed_configuration' array.array() must have the type code of 'd'"
                self._seed_configuration = value
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
                "The 'seed_configuration' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._seed_configuration = array.array('d', value)

    @builtins.property
    def enable_collision_checking(self):
        """Message field 'enable_collision_checking'."""
        return self._enable_collision_checking

    @enable_collision_checking.setter
    def enable_collision_checking(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'enable_collision_checking' field must be of type 'bool'"
        self._enable_collision_checking = value


# Import statements for member types

# Member 'joint_samples'
# Member 'valid_indices'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_SampleWorkspace_Response(type):
    """Metaclass of message 'SampleWorkspace_Response'."""

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
                'autocert_interfaces.srv.SampleWorkspace_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sample_workspace__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sample_workspace__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sample_workspace__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sample_workspace__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sample_workspace__response

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


class SampleWorkspace_Response(metaclass=Metaclass_SampleWorkspace_Response):
    """Message class 'SampleWorkspace_Response'."""

    __slots__ = [
        '_joint_samples',
        '_poses',
        '_valid_indices',
        '_reachability_index',
        '_workspace_volume',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'joint_samples': 'sequence<double>',
        'poses': 'sequence<geometry_msgs/Pose>',
        'valid_indices': 'sequence<int32>',
        'reachability_index': 'double',
        'workspace_volume': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.joint_samples = array.array('d', kwargs.get('joint_samples', []))
        self.poses = kwargs.get('poses', [])
        self.valid_indices = array.array('i', kwargs.get('valid_indices', []))
        self.reachability_index = kwargs.get('reachability_index', float())
        self.workspace_volume = kwargs.get('workspace_volume', float())

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
        if self.joint_samples != other.joint_samples:
            return False
        if self.poses != other.poses:
            return False
        if self.valid_indices != other.valid_indices:
            return False
        if self.reachability_index != other.reachability_index:
            return False
        if self.workspace_volume != other.workspace_volume:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def reachability_index(self):
        """Message field 'reachability_index'."""
        return self._reachability_index

    @reachability_index.setter
    def reachability_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'reachability_index' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'reachability_index' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._reachability_index = value

    @builtins.property
    def workspace_volume(self):
        """Message field 'workspace_volume'."""
        return self._workspace_volume

    @workspace_volume.setter
    def workspace_volume(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'workspace_volume' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'workspace_volume' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._workspace_volume = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SampleWorkspace_Event(type):
    """Metaclass of message 'SampleWorkspace_Event'."""

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
                'autocert_interfaces.srv.SampleWorkspace_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__sample_workspace__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__sample_workspace__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__sample_workspace__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__sample_workspace__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__sample_workspace__event

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


class SampleWorkspace_Event(metaclass=Metaclass_SampleWorkspace_Event):
    """Message class 'SampleWorkspace_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<autocert_interfaces/SampleWorkspace_Request, 1>',
        'response': 'sequence<autocert_interfaces/SampleWorkspace_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'SampleWorkspace_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['autocert_interfaces', 'srv'], 'SampleWorkspace_Response'), 1),  # noqa: E501
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
            from autocert_interfaces.srv import SampleWorkspace_Request
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
                 all(isinstance(v, SampleWorkspace_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SampleWorkspace_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from autocert_interfaces.srv import SampleWorkspace_Response
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
                 all(isinstance(v, SampleWorkspace_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SampleWorkspace_Response'"
        self._response = value


class Metaclass_SampleWorkspace(type):
    """Metaclass of service 'SampleWorkspace'."""

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
                'autocert_interfaces.srv.SampleWorkspace')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__sample_workspace

            from autocert_interfaces.srv import _sample_workspace
            if _sample_workspace.Metaclass_SampleWorkspace_Request._TYPE_SUPPORT is None:
                _sample_workspace.Metaclass_SampleWorkspace_Request.__import_type_support__()
            if _sample_workspace.Metaclass_SampleWorkspace_Response._TYPE_SUPPORT is None:
                _sample_workspace.Metaclass_SampleWorkspace_Response.__import_type_support__()
            if _sample_workspace.Metaclass_SampleWorkspace_Event._TYPE_SUPPORT is None:
                _sample_workspace.Metaclass_SampleWorkspace_Event.__import_type_support__()


class SampleWorkspace(metaclass=Metaclass_SampleWorkspace):
    from autocert_interfaces.srv._sample_workspace import SampleWorkspace_Request as Request
    from autocert_interfaces.srv._sample_workspace import SampleWorkspace_Response as Response
    from autocert_interfaces.srv._sample_workspace import SampleWorkspace_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
