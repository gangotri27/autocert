// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/msg/pose_measurement.hpp"


#ifndef AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__TRAITS_HPP_
#define AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autocert_interfaces/msg/detail/pose_measurement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'commanded_pose'
// Member 'measured_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace autocert_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseMeasurement & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_id
  {
    out << "pose_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_id, out);
    out << ", ";
  }

  // member: repetition
  {
    out << "repetition: ";
    rosidl_generator_traits::value_to_yaml(msg.repetition, out);
    out << ", ";
  }

  // member: pose_label
  {
    out << "pose_label: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_label, out);
    out << ", ";
  }

  // member: commanded_pose
  {
    out << "commanded_pose: ";
    to_flow_style_yaml(msg.commanded_pose, out);
    out << ", ";
  }

  // member: measured_pose
  {
    out << "measured_pose: ";
    to_flow_style_yaml(msg.measured_pose, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: measurement_system
  {
    out << "measurement_system: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_system, out);
    out << ", ";
  }

  // member: measurement_frame
  {
    out << "measurement_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_frame, out);
    out << ", ";
  }

  // member: measurement_quality
  {
    out << "measurement_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_quality, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_id, out);
    out << "\n";
  }

  // member: repetition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repetition: ";
    rosidl_generator_traits::value_to_yaml(msg.repetition, out);
    out << "\n";
  }

  // member: pose_label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_label: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_label, out);
    out << "\n";
  }

  // member: commanded_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commanded_pose:\n";
    to_block_style_yaml(msg.commanded_pose, out, indentation + 2);
  }

  // member: measured_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_pose:\n";
    to_block_style_yaml(msg.measured_pose, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: measurement_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_system: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_system, out);
    out << "\n";
  }

  // member: measurement_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_frame, out);
    out << "\n";
  }

  // member: measurement_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_quality, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseMeasurement & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autocert_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autocert_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autocert_interfaces::msg::PoseMeasurement & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::msg::PoseMeasurement & msg)
{
  return autocert_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::msg::PoseMeasurement>()
{
  return "autocert_interfaces::msg::PoseMeasurement";
}

template<>
inline const char * name<autocert_interfaces::msg::PoseMeasurement>()
{
  return "autocert_interfaces/msg/PoseMeasurement";
}

template<>
struct has_fixed_size<autocert_interfaces::msg::PoseMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::msg::PoseMeasurement>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::msg::PoseMeasurement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__TRAITS_HPP_
