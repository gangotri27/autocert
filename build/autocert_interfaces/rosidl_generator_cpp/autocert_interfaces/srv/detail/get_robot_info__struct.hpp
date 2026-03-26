// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_robot_info.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Request __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Request_
{
  using Type = GetRobotInfo_Request_<ContainerAllocator>;

  explicit GetRobotInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetRobotInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Request
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Request
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Request_

// alias to use template instance with default allocator
using GetRobotInfo_Request =
  autocert_interfaces::srv::GetRobotInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces


#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Response __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Response_
{
  using Type = GetRobotInfo_Response_<ContainerAllocator>;

  explicit GetRobotInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->planning_group = "";
      this->end_effector_link = "";
      this->num_joints = 0l;
      this->num_links = 0l;
      this->collision_checking_available = false;
      this->kinematics_solver_available = false;
      this->kinematics_solver_name = "";
      this->default_timeout = 0.0;
    }
  }

  explicit GetRobotInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    planning_group(_alloc),
    end_effector_link(_alloc),
    kinematics_solver_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->planning_group = "";
      this->end_effector_link = "";
      this->num_joints = 0l;
      this->num_links = 0l;
      this->collision_checking_available = false;
      this->kinematics_solver_available = false;
      this->kinematics_solver_name = "";
      this->default_timeout = 0.0;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _planning_group_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planning_group_type planning_group;
  using _end_effector_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _end_effector_link_type end_effector_link;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _link_names_type link_names;
  using _group_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _group_names_type group_names;
  using _joint_min_limits_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_min_limits_type joint_min_limits;
  using _joint_max_limits_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_max_limits_type joint_max_limits;
  using _joint_velocity_limits_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_velocity_limits_type joint_velocity_limits;
  using _num_joints_type =
    int32_t;
  _num_joints_type num_joints;
  using _num_links_type =
    int32_t;
  _num_links_type num_links;
  using _collision_checking_available_type =
    bool;
  _collision_checking_available_type collision_checking_available;
  using _kinematics_solver_available_type =
    bool;
  _kinematics_solver_available_type kinematics_solver_available;
  using _kinematics_solver_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _kinematics_solver_name_type kinematics_solver_name;
  using _default_timeout_type =
    double;
  _default_timeout_type default_timeout;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__planning_group(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planning_group = _arg;
    return *this;
  }
  Type & set__end_effector_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->end_effector_link = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->link_names = _arg;
    return *this;
  }
  Type & set__group_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->group_names = _arg;
    return *this;
  }
  Type & set__joint_min_limits(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_min_limits = _arg;
    return *this;
  }
  Type & set__joint_max_limits(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_max_limits = _arg;
    return *this;
  }
  Type & set__joint_velocity_limits(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_velocity_limits = _arg;
    return *this;
  }
  Type & set__num_joints(
    const int32_t & _arg)
  {
    this->num_joints = _arg;
    return *this;
  }
  Type & set__num_links(
    const int32_t & _arg)
  {
    this->num_links = _arg;
    return *this;
  }
  Type & set__collision_checking_available(
    const bool & _arg)
  {
    this->collision_checking_available = _arg;
    return *this;
  }
  Type & set__kinematics_solver_available(
    const bool & _arg)
  {
    this->kinematics_solver_available = _arg;
    return *this;
  }
  Type & set__kinematics_solver_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->kinematics_solver_name = _arg;
    return *this;
  }
  Type & set__default_timeout(
    const double & _arg)
  {
    this->default_timeout = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Response
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Response
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Response_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->planning_group != other.planning_group) {
      return false;
    }
    if (this->end_effector_link != other.end_effector_link) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->link_names != other.link_names) {
      return false;
    }
    if (this->group_names != other.group_names) {
      return false;
    }
    if (this->joint_min_limits != other.joint_min_limits) {
      return false;
    }
    if (this->joint_max_limits != other.joint_max_limits) {
      return false;
    }
    if (this->joint_velocity_limits != other.joint_velocity_limits) {
      return false;
    }
    if (this->num_joints != other.num_joints) {
      return false;
    }
    if (this->num_links != other.num_links) {
      return false;
    }
    if (this->collision_checking_available != other.collision_checking_available) {
      return false;
    }
    if (this->kinematics_solver_available != other.kinematics_solver_available) {
      return false;
    }
    if (this->kinematics_solver_name != other.kinematics_solver_name) {
      return false;
    }
    if (this->default_timeout != other.default_timeout) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetRobotInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Response_

// alias to use template instance with default allocator
using GetRobotInfo_Response =
  autocert_interfaces::srv::GetRobotInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Event __attribute__((deprecated))
#else
# define DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Event __declspec(deprecated)
#endif

namespace autocert_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetRobotInfo_Event_
{
  using Type = GetRobotInfo_Event_<ContainerAllocator>;

  explicit GetRobotInfo_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GetRobotInfo_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::GetRobotInfo_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autocert_interfaces::srv::GetRobotInfo_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Event
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autocert_interfaces__srv__GetRobotInfo_Event
    std::shared_ptr<autocert_interfaces::srv::GetRobotInfo_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRobotInfo_Event_ & other) const
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
  bool operator!=(const GetRobotInfo_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRobotInfo_Event_

// alias to use template instance with default allocator
using GetRobotInfo_Event =
  autocert_interfaces::srv::GetRobotInfo_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autocert_interfaces

namespace autocert_interfaces
{

namespace srv
{

struct GetRobotInfo
{
  using Request = autocert_interfaces::srv::GetRobotInfo_Request;
  using Response = autocert_interfaces::srv::GetRobotInfo_Response;
  using Event = autocert_interfaces::srv::GetRobotInfo_Event;
};

}  // namespace srv

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__STRUCT_HPP_
