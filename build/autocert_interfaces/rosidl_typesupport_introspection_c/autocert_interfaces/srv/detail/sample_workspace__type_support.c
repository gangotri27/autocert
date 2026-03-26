// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_introspection_c.h"
#include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
#include "autocert_interfaces/srv/detail/sample_workspace__struct.h"


// Include directives for member types
// Member `sampling_strategy`
#include "rosidl_runtime_c/string_functions.h"
// Member `seed_configuration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__SampleWorkspace_Request__init(message_memory);
}

void autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_fini_function(void * message_memory)
{
  autocert_interfaces__srv__SampleWorkspace_Request__fini(message_memory);
}

size_t autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Request__seed_configuration(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Request__seed_configuration(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Request__seed_configuration(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Request__seed_configuration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Request__seed_configuration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Request__seed_configuration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Request__seed_configuration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Request__seed_configuration(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_member_array[4] = {
  {
    "sampling_strategy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Request, sampling_strategy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Request, num_samples),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seed_configuration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Request, seed_configuration),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Request__seed_configuration,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Request__seed_configuration,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Request__seed_configuration,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Request__seed_configuration,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Request__seed_configuration,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Request__seed_configuration  // resize(index) function pointer
  },
  {
    "enable_collision_checking",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Request, enable_collision_checking),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "SampleWorkspace_Request",  // message name
  4,  // number of fields
  sizeof(autocert_interfaces__srv__SampleWorkspace_Request),
  false,  // has_any_key_member_
  autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_member_array,  // message members
  autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Request)() {
  if (!autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.h"


// Include directives for member types
// Member `joint_samples`
// Member `valid_indices`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__SampleWorkspace_Response__init(message_memory);
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_fini_function(void * message_memory)
{
  autocert_interfaces__srv__SampleWorkspace_Response__fini(message_memory);
}

size_t autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__joint_samples(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__joint_samples(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__joint_samples(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__joint_samples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__joint_samples(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__joint_samples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__joint_samples(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__joint_samples(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__valid_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__valid_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__valid_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__valid_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__valid_indices(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__valid_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__valid_indices(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__valid_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_member_array[5] = {
  {
    "joint_samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Response, joint_samples),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__joint_samples,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__joint_samples,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__joint_samples,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__joint_samples,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__joint_samples,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__joint_samples  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Response, poses),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__poses,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__poses,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__poses,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__poses,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__poses,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__poses  // resize(index) function pointer
  },
  {
    "valid_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Response, valid_indices),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Response__valid_indices,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Response__valid_indices,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Response__valid_indices,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Response__valid_indices,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Response__valid_indices,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Response__valid_indices  // resize(index) function pointer
  },
  {
    "reachability_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Response, reachability_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "workspace_volume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Response, workspace_volume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "SampleWorkspace_Response",  // message name
  5,  // number of fields
  sizeof(autocert_interfaces__srv__SampleWorkspace_Response),
  false,  // has_any_key_member_
  autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_member_array,  // message members
  autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Response)() {
  autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "autocert_interfaces/srv/sample_workspace.h"
// Member `request`
// Member `response`
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__SampleWorkspace_Event__init(message_memory);
}

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_fini_function(void * message_memory)
{
  autocert_interfaces__srv__SampleWorkspace_Event__fini(message_memory);
}

size_t autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Event__request(
  const void * untyped_member)
{
  const autocert_interfaces__srv__SampleWorkspace_Request__Sequence * member =
    (const autocert_interfaces__srv__SampleWorkspace_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__request(
  const void * untyped_member, size_t index)
{
  const autocert_interfaces__srv__SampleWorkspace_Request__Sequence * member =
    (const autocert_interfaces__srv__SampleWorkspace_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__request(
  void * untyped_member, size_t index)
{
  autocert_interfaces__srv__SampleWorkspace_Request__Sequence * member =
    (autocert_interfaces__srv__SampleWorkspace_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autocert_interfaces__srv__SampleWorkspace_Request * item =
    ((const autocert_interfaces__srv__SampleWorkspace_Request *)
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__request(untyped_member, index));
  autocert_interfaces__srv__SampleWorkspace_Request * value =
    (autocert_interfaces__srv__SampleWorkspace_Request *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autocert_interfaces__srv__SampleWorkspace_Request * item =
    ((autocert_interfaces__srv__SampleWorkspace_Request *)
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__request(untyped_member, index));
  const autocert_interfaces__srv__SampleWorkspace_Request * value =
    (const autocert_interfaces__srv__SampleWorkspace_Request *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Event__request(
  void * untyped_member, size_t size)
{
  autocert_interfaces__srv__SampleWorkspace_Request__Sequence * member =
    (autocert_interfaces__srv__SampleWorkspace_Request__Sequence *)(untyped_member);
  autocert_interfaces__srv__SampleWorkspace_Request__Sequence__fini(member);
  return autocert_interfaces__srv__SampleWorkspace_Request__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Event__response(
  const void * untyped_member)
{
  const autocert_interfaces__srv__SampleWorkspace_Response__Sequence * member =
    (const autocert_interfaces__srv__SampleWorkspace_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__response(
  const void * untyped_member, size_t index)
{
  const autocert_interfaces__srv__SampleWorkspace_Response__Sequence * member =
    (const autocert_interfaces__srv__SampleWorkspace_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__response(
  void * untyped_member, size_t index)
{
  autocert_interfaces__srv__SampleWorkspace_Response__Sequence * member =
    (autocert_interfaces__srv__SampleWorkspace_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autocert_interfaces__srv__SampleWorkspace_Response * item =
    ((const autocert_interfaces__srv__SampleWorkspace_Response *)
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__response(untyped_member, index));
  autocert_interfaces__srv__SampleWorkspace_Response * value =
    (autocert_interfaces__srv__SampleWorkspace_Response *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autocert_interfaces__srv__SampleWorkspace_Response * item =
    ((autocert_interfaces__srv__SampleWorkspace_Response *)
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__response(untyped_member, index));
  const autocert_interfaces__srv__SampleWorkspace_Response * value =
    (const autocert_interfaces__srv__SampleWorkspace_Response *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Event__response(
  void * untyped_member, size_t size)
{
  autocert_interfaces__srv__SampleWorkspace_Response__Sequence * member =
    (autocert_interfaces__srv__SampleWorkspace_Response__Sequence *)(untyped_member);
  autocert_interfaces__srv__SampleWorkspace_Response__Sequence__fini(member);
  return autocert_interfaces__srv__SampleWorkspace_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Event, request),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Event__request,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__request,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__request,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Event__request,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Event__request,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(autocert_interfaces__srv__SampleWorkspace_Event, response),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__size_function__SampleWorkspace_Event__response,  // size() function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_const_function__SampleWorkspace_Event__response,  // get_const(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__get_function__SampleWorkspace_Event__response,  // get(index) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__fetch_function__SampleWorkspace_Event__response,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__assign_function__SampleWorkspace_Event__response,  // assign(index, value) function pointer
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__resize_function__SampleWorkspace_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "SampleWorkspace_Event",  // message name
  3,  // number of fields
  sizeof(autocert_interfaces__srv__SampleWorkspace_Event),
  false,  // has_any_key_member_
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_member_array,  // message members
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Event)() {
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Request)();
  autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Response)();
  if (!autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autocert_interfaces/srv/detail/sample_workspace__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_members = {
  "autocert_interfaces__srv",  // service namespace
  "SampleWorkspace",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle,
  NULL,  // response message
  // autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle
  NULL  // event_message
  // autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle
};


static rosidl_service_type_support_t autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_type_support_handle = {
  0,
  &autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_members,
  get_service_typesupport_handle_function,
  &autocert_interfaces__srv__SampleWorkspace_Request__rosidl_typesupport_introspection_c__SampleWorkspace_Request_message_type_support_handle,
  &autocert_interfaces__srv__SampleWorkspace_Response__rosidl_typesupport_introspection_c__SampleWorkspace_Response_message_type_support_handle,
  &autocert_interfaces__srv__SampleWorkspace_Event__rosidl_typesupport_introspection_c__SampleWorkspace_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    SampleWorkspace
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    SampleWorkspace
  ),
  &autocert_interfaces__srv__SampleWorkspace__get_type_hash,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description,
  &autocert_interfaces__srv__SampleWorkspace__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace)(void) {
  if (!autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, SampleWorkspace_Event)()->data;
  }

  return &autocert_interfaces__srv__detail__sample_workspace__rosidl_typesupport_introspection_c__SampleWorkspace_service_type_support_handle;
}
