// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/sample_workspace.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__STRUCT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sampling_strategy'
#include "rosidl_runtime_c/string.h"
// Member 'seed_configuration'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SampleWorkspace in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__SampleWorkspace_Request
{
  /// "random", "latin", "halton", "grid"
  rosidl_runtime_c__String sampling_strategy;
  /// Number of samples to generate
  int32_t num_samples;
  /// Optional seed configuration
  rosidl_runtime_c__double__Sequence seed_configuration;
  /// Whether to check collisions
  bool enable_collision_checking;
} autocert_interfaces__srv__SampleWorkspace_Request;

// Struct for a sequence of autocert_interfaces__srv__SampleWorkspace_Request.
typedef struct autocert_interfaces__srv__SampleWorkspace_Request__Sequence
{
  autocert_interfaces__srv__SampleWorkspace_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__SampleWorkspace_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'joint_samples'
// Member 'valid_indices'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SampleWorkspace in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__SampleWorkspace_Response
{
  /// Flattened joint samples
  rosidl_runtime_c__double__Sequence joint_samples;
  /// Corresponding end-effector poses
  geometry_msgs__msg__Pose__Sequence poses;
  /// Indices of collision-free samples
  rosidl_runtime_c__int32__Sequence valid_indices;
  /// Percentage of reachable configurations
  double reachability_index;
  /// Estimated workspace volume (if computed)
  double workspace_volume;
} autocert_interfaces__srv__SampleWorkspace_Response;

// Struct for a sequence of autocert_interfaces__srv__SampleWorkspace_Response.
typedef struct autocert_interfaces__srv__SampleWorkspace_Response__Sequence
{
  autocert_interfaces__srv__SampleWorkspace_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__SampleWorkspace_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  autocert_interfaces__srv__SampleWorkspace_Event__request__MAX_SIZE = 1
};
// response
enum
{
  autocert_interfaces__srv__SampleWorkspace_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SampleWorkspace in the package autocert_interfaces.
typedef struct autocert_interfaces__srv__SampleWorkspace_Event
{
  service_msgs__msg__ServiceEventInfo info;
  autocert_interfaces__srv__SampleWorkspace_Request__Sequence request;
  autocert_interfaces__srv__SampleWorkspace_Response__Sequence response;
} autocert_interfaces__srv__SampleWorkspace_Event;

// Struct for a sequence of autocert_interfaces__srv__SampleWorkspace_Event.
typedef struct autocert_interfaces__srv__SampleWorkspace_Event__Sequence
{
  autocert_interfaces__srv__SampleWorkspace_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__srv__SampleWorkspace_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__STRUCT_H_
