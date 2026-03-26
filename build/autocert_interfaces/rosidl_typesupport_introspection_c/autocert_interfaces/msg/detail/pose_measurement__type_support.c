// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocert_interfaces/msg/detail/pose_measurement__rosidl_typesupport_introspection_c.h"
#include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocert_interfaces/msg/detail/pose_measurement__functions.h"
#include "autocert_interfaces/msg/detail/pose_measurement__struct.h"


// Include directives for member types
// Member `pose_label`
// Member `measurement_system`
// Member `measurement_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `commanded_pose`
// Member `measured_pose`
#include "geometry_msgs/msg/pose.h"
// Member `commanded_pose`
// Member `measured_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__msg__PoseMeasurement__init(message_memory);
}

void autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_fini_function(void * message_memory)
{
  autocert_interfaces__msg__PoseMeasurement__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_member_array[9] = {
  {
    "pose_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, pose_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repetition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, repetition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, pose_label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, commanded_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measured_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, measured_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_system",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, measurement_system),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, measurement_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__msg__PoseMeasurement, measurement_quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_members = {
  "autocert_interfaces__msg",  // message namespace
  "PoseMeasurement",  // message name
  9,  // number of fields
  sizeof(autocert_interfaces__msg__PoseMeasurement),
  false,  // has_any_key_member_
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_member_array,  // message members
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_type_support_handle = {
  0,
  &autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__msg__PoseMeasurement__get_type_hash,
  &autocert_interfaces__msg__PoseMeasurement__get_type_description,
  &autocert_interfaces__msg__PoseMeasurement__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, msg, PoseMeasurement)() {
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__msg__PoseMeasurement__rosidl_typesupport_introspection_c__PoseMeasurement_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
