# generated from rosidl_generator_py/resource/_idl.py.em
# with input from assignment2_custom_msgs_srvs:srv/AverageVelocities.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'lin_vel_request'
# Member 'ang_vel_request'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AverageVelocities_Request(type):
    """Metaclass of message 'AverageVelocities_Request'."""

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
            module = import_type_support('assignment2_custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_custom_msgs_srvs.srv.AverageVelocities_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__average_velocities__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__average_velocities__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__average_velocities__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__average_velocities__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__average_velocities__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AverageVelocities_Request(metaclass=Metaclass_AverageVelocities_Request):
    """Message class 'AverageVelocities_Request'."""

    __slots__ = [
        '_lin_vel_request',
        '_ang_vel_request',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'lin_vel_request': 'sequence<float>',
        'ang_vel_request': 'sequence<float>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.lin_vel_request = array.array('f', kwargs.get('lin_vel_request', []))
        self.ang_vel_request = array.array('f', kwargs.get('ang_vel_request', []))

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
        if self.lin_vel_request != other.lin_vel_request:
            return False
        if self.ang_vel_request != other.ang_vel_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lin_vel_request(self):
        """Message field 'lin_vel_request'."""
        return self._lin_vel_request

    @lin_vel_request.setter
    def lin_vel_request(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'lin_vel_request' array.array() must have the type code of 'f'"
                self._lin_vel_request = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'lin_vel_request' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._lin_vel_request = array.array('f', value)

    @builtins.property
    def ang_vel_request(self):
        """Message field 'ang_vel_request'."""
        return self._ang_vel_request

    @ang_vel_request.setter
    def ang_vel_request(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'ang_vel_request' array.array() must have the type code of 'f'"
                self._ang_vel_request = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ang_vel_request' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ang_vel_request = array.array('f', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_AverageVelocities_Response(type):
    """Metaclass of message 'AverageVelocities_Response'."""

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
            module = import_type_support('assignment2_custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_custom_msgs_srvs.srv.AverageVelocities_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__average_velocities__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__average_velocities__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__average_velocities__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__average_velocities__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__average_velocities__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AverageVelocities_Response(metaclass=Metaclass_AverageVelocities_Response):
    """Message class 'AverageVelocities_Response'."""

    __slots__ = [
        '_avg_lin_vel',
        '_avg_ang_vel',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'avg_lin_vel': 'float',
        'avg_ang_vel': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.avg_lin_vel = kwargs.get('avg_lin_vel', float())
        self.avg_ang_vel = kwargs.get('avg_ang_vel', float())

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
        if self.avg_lin_vel != other.avg_lin_vel:
            return False
        if self.avg_ang_vel != other.avg_ang_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def avg_lin_vel(self):
        """Message field 'avg_lin_vel'."""
        return self._avg_lin_vel

    @avg_lin_vel.setter
    def avg_lin_vel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'avg_lin_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'avg_lin_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._avg_lin_vel = value

    @builtins.property
    def avg_ang_vel(self):
        """Message field 'avg_ang_vel'."""
        return self._avg_ang_vel

    @avg_ang_vel.setter
    def avg_ang_vel(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'avg_ang_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'avg_ang_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._avg_ang_vel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AverageVelocities_Event(type):
    """Metaclass of message 'AverageVelocities_Event'."""

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
            module = import_type_support('assignment2_custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_custom_msgs_srvs.srv.AverageVelocities_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__average_velocities__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__average_velocities__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__average_velocities__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__average_velocities__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__average_velocities__event

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


class AverageVelocities_Event(metaclass=Metaclass_AverageVelocities_Event):
    """Message class 'AverageVelocities_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<assignment2_custom_msgs_srvs/AverageVelocities_Request, 1>',
        'response': 'sequence<assignment2_custom_msgs_srvs/AverageVelocities_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['assignment2_custom_msgs_srvs', 'srv'], 'AverageVelocities_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['assignment2_custom_msgs_srvs', 'srv'], 'AverageVelocities_Response'), 1),  # noqa: E501
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
            from assignment2_custom_msgs_srvs.srv import AverageVelocities_Request
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
                 all(isinstance(v, AverageVelocities_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'AverageVelocities_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from assignment2_custom_msgs_srvs.srv import AverageVelocities_Response
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
                 all(isinstance(v, AverageVelocities_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'AverageVelocities_Response'"
        self._response = value


class Metaclass_AverageVelocities(type):
    """Metaclass of service 'AverageVelocities'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('assignment2_custom_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'assignment2_custom_msgs_srvs.srv.AverageVelocities')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__average_velocities

            from assignment2_custom_msgs_srvs.srv import _average_velocities
            if _average_velocities.Metaclass_AverageVelocities_Request._TYPE_SUPPORT is None:
                _average_velocities.Metaclass_AverageVelocities_Request.__import_type_support__()
            if _average_velocities.Metaclass_AverageVelocities_Response._TYPE_SUPPORT is None:
                _average_velocities.Metaclass_AverageVelocities_Response.__import_type_support__()
            if _average_velocities.Metaclass_AverageVelocities_Event._TYPE_SUPPORT is None:
                _average_velocities.Metaclass_AverageVelocities_Event.__import_type_support__()


class AverageVelocities(metaclass=Metaclass_AverageVelocities):
    from assignment2_custom_msgs_srvs.srv._average_velocities import AverageVelocities_Request as Request
    from assignment2_custom_msgs_srvs.srv._average_velocities import AverageVelocities_Response as Response
    from assignment2_custom_msgs_srvs.srv._average_velocities import AverageVelocities_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
