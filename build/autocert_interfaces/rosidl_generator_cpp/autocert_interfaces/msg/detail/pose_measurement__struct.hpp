// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocert_interfaces:msg/PoseMeasurement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/msg/pose_measurement.hpp"


#ifndef AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_HPP_
#define AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'commanded_pose'
// Member 'measured_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__msg__PoseMeasurement __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__msg__PoseMeasurement __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseMeasurement_
{
  using Type = PoseMeasurement_<ContainerAllocator>;

  explicit PoseMeasurement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : commanded_pose(_init),
    measured_pose(_init),
    timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose_id = 0l;
      this->repetition = 0l;
      this->pose_label = "";
      this->measurement_system = "";
      this->measurement_frame = "";
      this->measurement_quality = 0.0;
    }
  }

  explicit PoseMeasurement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose_label(_alloc),
    commanded_pose(_alloc, _init),
    measured_pose(_alloc, _init),
    timestamp(_alloc, _init),
    measurement_system(_alloc),
    measurement_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pose_id = 0l;
      this->repetition = 0l;
      this->pose_label = "";
      this->measurement_system = "";
      this->measurement_frame = "";
      this->measurement_quality = 0.0;
    }
  }

  // field types and members
  using _pose_id_type =
    int32_t;
  _pose_id_type pose_id;
  using _repetition_type =
    int32_t;
  _repetition_type repetition;
  using _pose_label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pose_label_type pose_label;
  using _commanded_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _commanded_pose_type commanded_pose;
  using _measured_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _measured_pose_type measured_pose;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _measurement_system_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _measurement_system_type measurement_system;
  using _measurement_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _measurement_frame_type measurement_frame;
  using _measurement_quality_type =
    double;
  _measurement_quality_type measurement_quality;

  // setters for named parameter idiom
  Type & set__pose_id(
    const int32_t & _arg)
  {
    this->pose_id = _arg;
    return *this;
  }
  Type & set__repetition(
    const int32_t & _arg)
  {
    this->repetition = _arg;
    return *this;
  }
  Type & set__pose_label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pose_label = _arg;
    return *this;
  }
  Type & set__commanded_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->commanded_pose = _arg;
    return *this;
  }
  Type & set__measured_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->measured_pose = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__measurement_system(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->measurement_system = _arg;
    return *this;
  }
  Type & set__measurement_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->measurement_frame = _arg;
    return *this;
  }
  Type & set__measurement_quality(
    const double & _arg)
  {
    this->measurement_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__msg__PoseMeasurement
    std::shared_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__msg__PoseMeasurement
    std::shared_ptr<autocert_interfaces::msg::PoseMeasurement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseMeasurement_ & other) const
  {
    if (this->pose_id != other.pose_id) {
      return false;
    }
    if (this->repetition != other.repetition) {
      return false;
    }
    if (this->pose_label != other.pose_label) {
      return false;
    }
    if (this->commanded_pose != other.commanded_pose) {
      return false;
    }
    if (this->measured_pose != other.measured_pose) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->measurement_system != other.measurement_system) {
      return false;
    }
    if (this->measurement_frame != other.measurement_frame) {
      return false;
    }
    if (this->measurement_quality != other.measurement_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseMeasurement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseMeasurement_

// alias to use template instance with default allocator
using PoseMeasurement =
  autocert_interfaces::msg::PoseMeasurement_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__MSG__DETAIL__POSE_MEASUREMENT__STRUCT_HPP_
