// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:srv/CheckCollision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/check_collision.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__STRUCT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_positions'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'planning_group'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckCollision in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__CheckCollision_Request
{
  rosidl_runtime_c__double__Sequence joint_positions;
  rosidl_runtime_c__String planning_group;
} autocert_interfaces__srv__CheckCollision_Request;

// Struct for a sequence of autocert_interfaces__srv__CheckCollision_Request.
typedef struct autocert_interfaces__srv__CheckCollision_Request__Sequence
{
  autocert_interfaces__srv__CheckCollision_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__CheckCollision_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'colliding_links'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'contact_points'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/CheckCollision in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__CheckCollision_Response
{
  bool in_collision;
  bool self_collision;
  bool environment_collision;
  rosidl_runtime_c__String__Sequence colliding_links;
  rosidl_runtime_c__double__Sequence contact_points;
} autocert_interfaces__srv__CheckCollision_Response;

// Struct for a sequence of autocert_interfaces__srv__CheckCollision_Response.
typedef struct autocert_interfaces__srv__CheckCollision_Response__Sequence
{
  autocert_interfaces__srv__CheckCollision_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__CheckCollision_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  autocert_interfaces__srv__CheckCollision_Event__request__MAX_SIZE = 1
};
// response
enum
{
  autocert_interfaces__srv__CheckCollision_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CheckCollision in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__CheckCollision_Event
{
  service_msgs__msg__ServiceEventInfo info;
  autocert_interfaces__srv__CheckCollision_Request__Sequence request;
  autocert_interfaces__srv__CheckCollision_Response__Sequence response;
} autocert_interfaces__srv__CheckCollision_Event;

// Struct for a sequence of autocert_interfaces__srv__CheckCollision_Event.
typedef struct autocert_interfaces__srv__CheckCollision_Event__Sequence
{
  autocert_interfaces__srv__CheckCollision_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__CheckCollision_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__STRUCT_H_
