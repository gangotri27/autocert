// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autocert_interfaces/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
#include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
#include "autocert_interfaces/srv/detail/get_robot_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__GetRobotInfo_Request__init(message_memory);
}

void autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_fini_function(void * message_memory)
{
  autocert_interfaces__srv__GetRobotInfo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "GetRobotInfo_Request",  // message name
  1,  // number of fields
  sizeof(autocert_interfaces__srv__GetRobotInfo_Request),
  false,  // has_any_key_member_
  autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_member_array,  // message members
  autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Request)() {
  if (!autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.h"


// Include directives for member types
// Member `robot_name`
// Member `planning_group`
// Member `end_effector_link`
// Member `joint_names`
// Member `link_names`
// Member `group_names`
// Member `kinematics_solver_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `joint_min_limits`
// Member `joint_max_limits`
// Member `joint_velocity_limits`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__GetRobotInfo_Response__init(message_memory);
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_fini_function(void * message_memory)
{
  autocert_interfaces__srv__GetRobotInfo_Response__fini(message_memory);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__link_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__link_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__link_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__link_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__link_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__link_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__link_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__link_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__group_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__group_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__group_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__group_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__group_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__group_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__group_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__group_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_min_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_min_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_min_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_min_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_min_limits(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_min_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_min_limits(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_min_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_max_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_max_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_max_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_max_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_max_limits(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_max_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_max_limits(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_max_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_velocity_limits(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_velocity_limits(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_velocity_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_velocity_limits(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_velocity_limits(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_velocity_limits(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_member_array[15] = {
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, planning_group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_effector_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, end_effector_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, joint_names),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_names,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_names,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_names,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_names,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_names,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_names  // resize(index) function pointer
  },
  {
    "link_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, link_names),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__link_names,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__link_names,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__link_names,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__link_names,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__link_names,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__link_names  // resize(index) function pointer
  },
  {
    "group_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, group_names),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__group_names,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__group_names,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__group_names,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__group_names,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__group_names,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__group_names  // resize(index) function pointer
  },
  {
    "joint_min_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, joint_min_limits),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_min_limits,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_min_limits,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_min_limits,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_min_limits,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_min_limits,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_min_limits  // resize(index) function pointer
  },
  {
    "joint_max_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, joint_max_limits),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_max_limits,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_max_limits,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_max_limits,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_max_limits,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_max_limits,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_max_limits  // resize(index) function pointer
  },
  {
    "joint_velocity_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, joint_velocity_limits),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Response__joint_velocity_limits,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Response__joint_velocity_limits,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Response__joint_velocity_limits,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Response__joint_velocity_limits,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Response__joint_velocity_limits,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Response__joint_velocity_limits  // resize(index) function pointer
  },
  {
    "num_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, num_joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, num_links),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_checking_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, collision_checking_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinematics_solver_available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, kinematics_solver_available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinematics_solver_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, kinematics_solver_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Response, default_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "GetRobotInfo_Response",  // message name
  15,  // number of fields
  sizeof(autocert_interfaces__srv__GetRobotInfo_Response),
  false,  // has_any_key_member_
  autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_member_array,  // message members
  autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Response)() {
  if (!autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__functions.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "autocert_interfaces/srv/get_robot_info.h"
// Member `request`
// Member `response`
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autocert_interfaces__srv__GetRobotInfo_Event__init(message_memory);
}

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_fini_function(void * message_memory)
{
  autocert_interfaces__srv__GetRobotInfo_Event__fini(message_memory);
}

size_t autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__request(
  const void * untyped_member)
{
  const autocert_interfaces__srv__GetRobotInfo_Request__Sequence * member =
    (const autocert_interfaces__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request(
  const void * untyped_member, size_t index)
{
  const autocert_interfaces__srv__GetRobotInfo_Request__Sequence * member =
    (const autocert_interfaces__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t index)
{
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence * member =
    (autocert_interfaces__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autocert_interfaces__srv__GetRobotInfo_Request * item =
    ((const autocert_interfaces__srv__GetRobotInfo_Request *)
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request(untyped_member, index));
  autocert_interfaces__srv__GetRobotInfo_Request * value =
    (autocert_interfaces__srv__GetRobotInfo_Request *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autocert_interfaces__srv__GetRobotInfo_Request * item =
    ((autocert_interfaces__srv__GetRobotInfo_Request *)
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request(untyped_member, index));
  const autocert_interfaces__srv__GetRobotInfo_Request * value =
    (const autocert_interfaces__srv__GetRobotInfo_Request *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__request(
  void * untyped_member, size_t size)
{
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence * member =
    (autocert_interfaces__srv__GetRobotInfo_Request__Sequence *)(untyped_member);
  autocert_interfaces__srv__GetRobotInfo_Request__Sequence__fini(member);
  return autocert_interfaces__srv__GetRobotInfo_Request__Sequence__init(member, size);
}

size_t autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__response(
  const void * untyped_member)
{
  const autocert_interfaces__srv__GetRobotInfo_Response__Sequence * member =
    (const autocert_interfaces__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response(
  const void * untyped_member, size_t index)
{
  const autocert_interfaces__srv__GetRobotInfo_Response__Sequence * member =
    (const autocert_interfaces__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t index)
{
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence * member =
    (autocert_interfaces__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autocert_interfaces__srv__GetRobotInfo_Response * item =
    ((const autocert_interfaces__srv__GetRobotInfo_Response *)
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response(untyped_member, index));
  autocert_interfaces__srv__GetRobotInfo_Response * value =
    (autocert_interfaces__srv__GetRobotInfo_Response *)(untyped_value);
  *value = *item;
}

void autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autocert_interfaces__srv__GetRobotInfo_Response * item =
    ((autocert_interfaces__srv__GetRobotInfo_Response *)
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response(untyped_member, index));
  const autocert_interfaces__srv__GetRobotInfo_Response * value =
    (const autocert_interfaces__srv__GetRobotInfo_Response *)(untyped_value);
  *item = *value;
}

bool autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__response(
  void * untyped_member, size_t size)
{
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence * member =
    (autocert_interfaces__srv__GetRobotInfo_Response__Sequence *)(untyped_member);
  autocert_interfaces__srv__GetRobotInfo_Response__Sequence__fini(member);
  return autocert_interfaces__srv__GetRobotInfo_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autocert_interfaces__srv__GetRobotInfo_Event, info),  // bytes offset in struct
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
    offsetof(autocert_interfaces__srv__GetRobotInfo_Event, request),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__request,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__request,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__request,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__request,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__request,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__request  // resize(index) function pointer
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
    offsetof(autocert_interfaces__srv__GetRobotInfo_Event, response),  // bytes offset in struct
    NULL,  // default value
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__size_function__GetRobotInfo_Event__response,  // size() function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_const_function__GetRobotInfo_Event__response,  // get_const(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__get_function__GetRobotInfo_Event__response,  // get(index) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__fetch_function__GetRobotInfo_Event__response,  // fetch(index, &value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__assign_function__GetRobotInfo_Event__response,  // assign(index, value) function pointer
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__resize_function__GetRobotInfo_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_members = {
  "autocert_interfaces__srv",  // message namespace
  "GetRobotInfo_Event",  // message name
  3,  // number of fields
  sizeof(autocert_interfaces__srv__GetRobotInfo_Event),
  false,  // has_any_key_member_
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array,  // message members
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle = {
  0,
  &autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Event)() {
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Request)();
  autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Response)();
  if (!autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autocert_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autocert_interfaces/srv/detail/get_robot_info__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_members = {
  "autocert_interfaces__srv",  // service namespace
  "GetRobotInfo",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle,
  NULL,  // response message
  // autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle
  NULL  // event_message
  // autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle
};


static rosidl_service_type_support_t autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle = {
  0,
  &autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_members,
  get_service_typesupport_handle_function,
  &autocert_interfaces__srv__GetRobotInfo_Request__rosidl_typesupport_introspection_c__GetRobotInfo_Request_message_type_support_handle,
  &autocert_interfaces__srv__GetRobotInfo_Response__rosidl_typesupport_introspection_c__GetRobotInfo_Response_message_type_support_handle,
  &autocert_interfaces__srv__GetRobotInfo_Event__rosidl_typesupport_introspection_c__GetRobotInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    GetRobotInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    autocert_interfaces,
    srv,
    GetRobotInfo
  ),
  &autocert_interfaces__srv__GetRobotInfo__get_type_hash,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description,
  &autocert_interfaces__srv__GetRobotInfo__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autocert_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo)(void) {
  if (!autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.typesupport_identifier) {
    autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autocert_interfaces, srv, GetRobotInfo_Event)()->data;
  }

  return &autocert_interfaces__srv__detail__get_robot_info__rosidl_typesupport_introspection_c__GetRobotInfo_service_type_support_handle;
}
