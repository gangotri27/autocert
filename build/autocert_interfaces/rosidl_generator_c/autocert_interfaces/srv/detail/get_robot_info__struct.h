// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_robot_info.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetRobotInfo in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetRobotInfo_Request
{
  uint8_t structure_needs_at_least_one_member;
} autocert_interfaces__srv__GetRobotInfo_Request;

// Struct for a sequence of autocert_interfaces__srv__GetRobotInfo_Request.
typedef struct autocert_interfaces__srv__GetRobotInfo_Request__Sequence
{
  autocert_interfaces__srv__GetRobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetRobotInfo_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
// Member 'planning_group'
// Member 'end_effector_link'
// Member 'joint_names'
// Member 'link_names'
// Member 'group_names'
// Member 'kinematics_solver_name'
#include "rosidl_runtime_c/string.h"
// Member 'joint_min_limits'
// Member 'joint_max_limits'
// Member 'joint_velocity_limits'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetRobotInfo in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetRobotInfo_Response
{
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String planning_group;
  rosidl_runtime_c__String end_effector_link;
  rosidl_runtime_c__String__Sequence joint_names;
  rosidl_runtime_c__String__Sequence link_names;
  rosidl_runtime_c__String__Sequence group_names;
  rosidl_runtime_c__double__Sequence joint_min_limits;
  rosidl_runtime_c__double__Sequence joint_max_limits;
  rosidl_runtime_c__double__Sequence joint_velocity_limits;
  int32_t num_joints;
  int32_t num_links;
  bool collision_checking_available;
  bool kinematics_solver_available;
  rosidl_runtime_c__String kinematics_solver_name;
  double default_timeout;
} autocert_interfaces__srv__GetRobotInfo_Response;

// Struct for a sequence of autocert_interfaces__srv__GetRobotInfo_Response.
typedef struct autocert_interfaces__srv__GetRobotInfo_Response__Sequence
{
  autocert_interfaces__srv__GetRobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetRobotInfo_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  autocert_interfaces__srv__GetRobotInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  autocert_interfaces__srv__GetRobotInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetRobotInfo in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__GetRobotInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence request;
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence response;
} autocert_interfaces__srv__GetRobotInfo_Event;

// Struct for a sequence of autocert_interfaces__srv__GetRobotInfo_Event.
typedef struct autocert_interfaces__srv__GetRobotInfo_Event__Sequence
{
  autocert_interfaces__srv__GetRobotInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__GetRobotInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_H_
