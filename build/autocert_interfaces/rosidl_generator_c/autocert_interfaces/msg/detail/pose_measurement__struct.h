// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/msg/pose_measurement.h"


#ifndef AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_H_
#define AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pose_label'
// Member 'measurement_system'
// Member 'measurement_frame'
#include "rosidl_runtime_c/string.h"
// Member 'commanded_pose'
// Member 'measured_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/PoseMeasurement in the package autocert_interfaces.
/**
  * ISO-9283 compliant pose measurement message
 */
typedef struct autocert_interfaces__msg__PoseMeasurement
{
  /// Test identification
  /// Pose identifier (1-5 for ISO test)
  int32_t pose_id;
  /// Repetition number (1-30)
  int32_t repetition;
  /// Optional label (e.g., "P1", "CENTER")
  rosidl_runtime_c__String pose_label;
  /// Commanded pose (from robot controller)
  geometry_msgs__msg__Pose commanded_pose;
  /// Measured pose (from external measurement system)
  geometry_msgs__msg__Pose measured_pose;
  /// Measurement metadata
  builtin_interfaces__msg__Time timestamp;
  /// e.g., "laser_tracker", "motion_capture"
  rosidl_runtime_c__String measurement_system;
  /// Frame ID of measurement
  rosidl_runtime_c__String measurement_frame;
  /// Quality metric (0-1)
  double measurement_quality;
} autocert_interfaces__msg__PoseMeasurement;

// Struct for a sequence of autocert_interfaces__msg__PoseMeasurement.
typedef struct autocert_interfaces__msg__PoseMeasurement__Sequence
{
  autocert_interfaces__msg__PoseMeasurement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autocert_interfaces__msg__PoseMeasurement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_H_
