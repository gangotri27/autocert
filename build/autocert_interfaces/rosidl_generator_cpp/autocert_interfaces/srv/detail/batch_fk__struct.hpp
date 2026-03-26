// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocert_interfaces:srv/BatchFK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/batch_fk.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Request __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Request __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatchFK_Request_
{
  using Type = BatchFK_Request_<ContainerAllocator>;

  explicit BatchFK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_samples = 0l;
      this->num_joints = 0l;
      this->filter_collisions = false;
      this->planning_group = "";
    }
  }

  explicit BatchFK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : planning_group(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_samples = 0l;
      this->num_joints = 0l;
      this->filter_collisions = false;
      this->planning_group = "";
    }
  }

  // field types and members
  using _num_samples_type =
    int32_t;
  _num_samples_type num_samples;
  using _num_joints_type =
    int32_t;
  _num_joints_type num_joints;
  using _joint_samples_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_samples_type joint_samples;
  using _filter_collisions_type =
    bool;
  _filter_collisions_type filter_collisions;
  using _planning_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_group_type planning_group;

  // setters for named parameter idiom
  Type & set__num_samples(
    const int32_t & _arg)
  {
    this->num_samples = _arg;
    return *this;
  }
  Type & set__num_joints(
    const int32_t & _arg)
  {
    this->num_joints = _arg;
    return *this;
  }
  Type & set__joint_samples(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_samples = _arg;
    return *this;
  }
  Type & set__filter_collisions(
    const bool & _arg)
  {
    this->filter_collisions = _arg;
    return *this;
  }
  Type & set__planning_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_group = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Request
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Request
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatchFK_Request_ & other) const
  {
    if (this->num_samples != other.num_samples) {
      return false;
    }
    if (this->num_joints != other.num_joints) {
      return false;
    }
    if (this->joint_samples != other.joint_samples) {
      return false;
    }
    if (this->filter_collisions != other.filter_collisions) {
      return false;
    }
    if (this->planning_group != other.planning_group) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatchFK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatchFK_Request_

// alias to use template instance with default allocator
using BatchFK_Request =
  autocert_interfaces::srv::BatchFK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Response __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Response __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatchFK_Response_
{
  using Type = BatchFK_Response_<ContainerAllocator>;

  explicit BatchFK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_effector_link = "";
      this->error_code = 0l;
      this->error_message = "";
    }
  }

  explicit BatchFK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_effector_link(_alloc),
    error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_effector_link = "";
      this->error_code = 0l;
      this->error_message = "";
    }
  }

  // field types and members
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _valid_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _valid_indices_type valid_indices;
  using _end_effector_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_effector_link_type end_effector_link;
  using _computation_time_ms_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _computation_time_ms_type computation_time_ms;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__valid_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->valid_indices = _arg;
    return *this;
  }
  Type & set__end_effector_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_effector_link = _arg;
    return *this;
  }
  Type & set__computation_time_ms(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->computation_time_ms = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Response
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Response
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatchFK_Response_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->valid_indices != other.valid_indices) {
      return false;
    }
    if (this->end_effector_link != other.end_effector_link) {
      return false;
    }
    if (this->computation_time_ms != other.computation_time_ms) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatchFK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatchFK_Response_

// alias to use template instance with default allocator
using BatchFK_Response =
  autocert_interfaces::srv::BatchFK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Event __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__BatchFK_Event __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatchFK_Event_
{
  using Type = BatchFK_Event_<ContainerAllocator>;

  explicit BatchFK_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit BatchFK_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::BatchFK_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::BatchFK_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Event
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__BatchFK_Event
    std::shared_ptr<autocert_interfaces::srv::BatchFK_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatchFK_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatchFK_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatchFK_Event_

// alias to use template instance with default allocator
using BatchFK_Event =
  autocert_interfaces::srv::BatchFK_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces

namespace autocert_interfaces
{

namespace srv
{

struct BatchFK
{
  using Request = autocert_interfaces::srv::BatchFK_Request;
  using Response = autocert_interfaces::srv::BatchFK_Response;
  using Event = autocert_interfaces::srv::BatchFK_Event;
};

}  // namespace srv

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__STRUCT_HPP_
