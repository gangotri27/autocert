// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:srv/BatchFK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/batch_fk.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_samples'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'planning_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BatchFK in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__BatchFK_Request
{
  int32_t num_samples;
  int32_t num_joints;
  rosidl_runtime_c__double__Sequence joint_samples;
  bool filter_collisions;
  rosidl_runtime_c__String planning_group;
} autocert_interfaces__srv__BatchFK_Request;

// Struct for a sequence of autocert_interfaces__srv__BatchFK_Request.
typedef struct autocert_interfaces__srv__BatchFK_Request__Sequence
{
  autocert_interfaces__srv__BatchFK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__BatchFK_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'valid_indices'
// Member 'computation_time_ms'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'end_effector_link'
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BatchFK in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__BatchFK_Response
{
  geometry_msgs__msg__Pose__Sequence poses;
  rosidl_runtime_c__int32__Sequence valid_indices;
  rosidl_runtime_c__String end_effector_link;
  rosidl_runtime_c__double__Sequence computation_time_ms;
  int32_t error_code;
  rosidl_runtime_c__String error_message;
} autocert_interfaces__srv__BatchFK_Response;

// Struct for a sequence of autocert_interfaces__srv__BatchFK_Response.
typedef struct autocert_interfaces__srv__BatchFK_Response__Sequence
{
  autocert_interfaces__srv__BatchFK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__BatchFK_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  autocert_interfaces__srv__BatchFK_Event__request__MAX_SIZE = 1
};
// response
enum
{
  autocert_interfaces__srv__BatchFK_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/BatchFK in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__BatchFK_Event
{
  service_msgs__msg__ServiceEventInfo info;
  autocert_interfaces__srv__BatchFK_Request__Sequence request;
  autocert_interfaces__srv__BatchFK_Response__Sequence response;
} autocert_interfaces__srv__BatchFK_Event;

// Struct for a sequence of autocert_interfaces__srv__BatchFK_Event.
typedef struct autocert_interfaces__srv__BatchFK_Event__Sequence
{
  autocert_interfaces__srv__BatchFK_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__BatchFK_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_H_
