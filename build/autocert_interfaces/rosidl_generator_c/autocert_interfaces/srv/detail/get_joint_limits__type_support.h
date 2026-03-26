// generated from rosidl_generator_c/resource/idl__type_support.h.em
// with input from autocert_interfaces:srv/GetJointLimits.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_joint_limits.h"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TYPE_SUPPORT_H_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TYPE_SUPPORT_H_

#include "rosidl_typesupport_interface/macros.h"

#include "autocert_interfaces/msg/rosidl_generator_c__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits_Request
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits_Response
)(void);

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits_Event
)(void);

#include "rosidl_runtime_c/service_type_support_struct.h"

// Forward declare the get type support functions for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits
)(void);

// Forward declare the function to create a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message);

// Forward declare the function to destroy a service event message for this type.
ROSIDL_GENERATOR_C_PUBLIC_autocert_interfaces
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  autocert_interfaces,
  srv,
  GetJointLimits
)(
  void * event_msg,
  rcutils_allocator_t * allocator);

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TYPE_SUPPORT_H_
