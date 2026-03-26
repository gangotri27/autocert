// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/msg/pose_measurement.hpp"


#ifndef AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__BUILDER_HPP_
#define AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/msg/detail/pose_measurement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseMeasurement_measurement_quality
{
public:
  explicit Init_PoseMeasurement_measurement_quality(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::msg::PoseMeasurement measurement_quality(::autocert_interfaces::msg::PoseMeasurement::_measurement_quality_type arg)
  {
    msg_.measurement_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_measurement_frame
{
public:
  explicit Init_PoseMeasurement_measurement_frame(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_measurement_quality measurement_frame(::autocert_interfaces::msg::PoseMeasurement::_measurement_frame_type arg)
  {
    msg_.measurement_frame = std::move(arg);
    return Init_PoseMeasurement_measurement_quality(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_measurement_system
{
public:
  explicit Init_PoseMeasurement_measurement_system(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_measurement_frame measurement_system(::autocert_interfaces::msg::PoseMeasurement::_measurement_system_type arg)
  {
    msg_.measurement_system = std::move(arg);
    return Init_PoseMeasurement_measurement_frame(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_timestamp
{
public:
  explicit Init_PoseMeasurement_timestamp(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_measurement_system timestamp(::autocert_interfaces::msg::PoseMeasurement::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PoseMeasurement_measurement_system(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_measured_pose
{
public:
  explicit Init_PoseMeasurement_measured_pose(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_timestamp measured_pose(::autocert_interfaces::msg::PoseMeasurement::_measured_pose_type arg)
  {
    msg_.measured_pose = std::move(arg);
    return Init_PoseMeasurement_timestamp(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_commanded_pose
{
public:
  explicit Init_PoseMeasurement_commanded_pose(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_measured_pose commanded_pose(::autocert_interfaces::msg::PoseMeasurement::_commanded_pose_type arg)
  {
    msg_.commanded_pose = std::move(arg);
    return Init_PoseMeasurement_measured_pose(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_pose_label
{
public:
  explicit Init_PoseMeasurement_pose_label(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_commanded_pose pose_label(::autocert_interfaces::msg::PoseMeasurement::_pose_label_type arg)
  {
    msg_.pose_label = std::move(arg);
    return Init_PoseMeasurement_commanded_pose(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_repetition
{
public:
  explicit Init_PoseMeasurement_repetition(::autocert_interfaces::msg::PoseMeasurement & msg)
  : msg_(msg)
  {}
  Init_PoseMeasurement_pose_label repetition(::autocert_interfaces::msg::PoseMeasurement::_repetition_type arg)
  {
    msg_.repetition = std::move(arg);
    return Init_PoseMeasurement_pose_label(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

class Init_PoseMeasurement_pose_id
{
public:
  Init_PoseMeasurement_pose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseMeasurement_repetition pose_id(::autocert_interfaces::msg::PoseMeasurement::_pose_id_type arg)
  {
    msg_.pose_id = std::move(arg);
    return Init_PoseMeasurement_repetition(msg_);
  }

private:
  ::autocert_interfaces::msg::PoseMeasurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::msg::PoseMeasurement>()
{
  return autocert_interfaces::msg::builder::Init_PoseMeasurement_pose_id();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__BUILDER_HPP_
