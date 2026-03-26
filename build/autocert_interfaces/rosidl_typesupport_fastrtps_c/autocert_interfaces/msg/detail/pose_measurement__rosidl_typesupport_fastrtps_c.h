// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice
#ifndef AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "autocert_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autocert_interfaces/msg/detail/pose_measurement__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_autocert_interfaces__msg__PoseMeasurement(
  const autocert_interfaces__msg__PoseMeasurement * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_deserialize_autocert_interfaces__msg__PoseMeasurement(
  eprosima::fastcdr::Cdr &,
  autocert_interfaces__msg__PoseMeasurement * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_autocert_interfaces__msg__PoseMeasurement(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_autocert_interfaces__msg__PoseMeasurement(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
bool cdr_serialize_key_autocert_interfaces__msg__PoseMeasurement(
  const autocert_interfaces__msg__PoseMeasurement * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t get_serialized_size_key_autocert_interfaces__msg__PoseMeasurement(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
size_t max_serialized_size_key_autocert_interfaces__msg__PoseMeasurement(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autocert_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autocert_interfaces, msg, PoseMeasurement)();

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
