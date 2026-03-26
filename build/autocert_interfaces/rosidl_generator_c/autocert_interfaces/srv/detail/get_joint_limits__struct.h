// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:srv/GetJointLimits.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_joint_limits.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__STRUCT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'planning_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetJointLimits in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetJointLimits_Request
{
  rosidl_runtime_c__String planning_group;
} autocert_interfaces__srv__GetJointLimits_Request;

// Struct for a sequence of autocert_interfaces__srv__GetJointLimits_Request.
typedef struct autocert_interfaces__srv__GetJointLimits_Request__Sequence
{
  autocert_interfaces__srv__GetJointLimits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetJointLimits_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'joint_names'
// Member 'planning_group'
// Member 'end_effector_link'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'min_limits'
// Member 'max_limits'
// Member 'velocity_limits'
// Member 'acceleration_limits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetJointLimits in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetJointLimits_Response
{
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__double__Sequence min_limits;
  rosidl_runtime_c__double__Sequence max_limits;
  rosidl_runtime_c__double__Sequence velocity_limits;
  rosidl_runtime_c__double__Sequence acceleration_limits;
  rosidl_runtime_c__String planning_group;
  rosidl_runtime_c__String end_effector_link;
  int32_t num_joints;
} autocert_interfaces__srv__GetJointLimits_Response;

// Struct for a sequence of autocert_interfaces__srv__GetJointLimits_Response.
typedef struct autocert_interfaces__srv__GetJointLimits_Response__Sequence
{
  autocert_interfaces__srv__GetJointLimits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetJointLimits_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  autocert_interfaces__srv__GetJointLimits_Event__request__MAX_SIZE = 1
};
// response
enum
{
  autocert_interfaces__srv__GetJointLimits_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetJointLimits in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetJointLimits_Event
{
  service_msgs__msg__ServiceEventInfo info;
  autocert_interfaces__srv__GetJointLimits_Request__Sequence request;
  autocert_interfaces__srv__GetJointLimits_Response__Sequence response;
} autocert_interfaces__srv__GetJointLimits_Event;

// Struct for a sequence of autocert_interfaces__srv__GetJointLimits_Event.
typedef struct autocert_interfaces__srv__GetJointLimits_Event__Sequence
{
  autocert_interfaces__srv__GetJointLimits_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetJointLimits_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__STRUCT_H_
