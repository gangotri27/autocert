// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:srv/GetJointLimits.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_joint_limits.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__BUILDER_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/srv/detail/get_joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetJointLimits_Request_planning_group
{
public:
  Init_GetJointLimits_Request_planning_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autocert_interfaces::srv::GetJointLimits_Request planning_group(::autocert_interfaces::srv::GetJointLimits_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetJointLimits_Request>()
{
  return autocert_interfaces::srv::builder::Init_GetJointLimits_Request_planning_group();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetJointLimits_Response_num_joints
{
public:
  explicit Init_GetJointLimits_Response_num_joints(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::GetJointLimits_Response num_joints(::autocert_interfaces::srv::GetJointLimits_Response::_num_joints_type arg)
  {
    msg_.num_joints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_end_effector_link
{
public:
  explicit Init_GetJointLimits_Response_end_effector_link(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_num_joints end_effector_link(::autocert_interfaces::srv::GetJointLimits_Response::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return Init_GetJointLimits_Response_num_joints(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_planning_group
{
public:
  explicit Init_GetJointLimits_Response_planning_group(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_end_effector_link planning_group(::autocert_interfaces::srv::GetJointLimits_Response::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return Init_GetJointLimits_Response_end_effector_link(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_acceleration_limits
{
public:
  explicit Init_GetJointLimits_Response_acceleration_limits(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_planning_group acceleration_limits(::autocert_interfaces::srv::GetJointLimits_Response::_acceleration_limits_type arg)
  {
    msg_.acceleration_limits = std::move(arg);
    return Init_GetJointLimits_Response_planning_group(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_velocity_limits
{
public:
  explicit Init_GetJointLimits_Response_velocity_limits(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_acceleration_limits velocity_limits(::autocert_interfaces::srv::GetJointLimits_Response::_velocity_limits_type arg)
  {
    msg_.velocity_limits = std::move(arg);
    return Init_GetJointLimits_Response_acceleration_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_max_limits
{
public:
  explicit Init_GetJointLimits_Response_max_limits(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_velocity_limits max_limits(::autocert_interfaces::srv::GetJointLimits_Response::_max_limits_type arg)
  {
    msg_.max_limits = std::move(arg);
    return Init_GetJointLimits_Response_velocity_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_min_limits
{
public:
  explicit Init_GetJointLimits_Response_min_limits(::autocert_interfaces::srv::GetJointLimits_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Response_max_limits min_limits(::autocert_interfaces::srv::GetJointLimits_Response::_min_limits_type arg)
  {
    msg_.min_limits = std::move(arg);
    return Init_GetJointLimits_Response_max_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

class Init_GetJointLimits_Response_joint_names
{
public:
  Init_GetJointLimits_Response_joint_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointLimits_Response_min_limits joint_names(::autocert_interfaces::srv::GetJointLimits_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_GetJointLimits_Response_min_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetJointLimits_Response>()
{
  return autocert_interfaces::srv::builder::Init_GetJointLimits_Response_joint_names();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetJointLimits_Event_response
{
public:
  explicit Init_GetJointLimits_Event_response(::autocert_interfaces::srv::GetJointLimits_Event & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::GetJointLimits_Event response(::autocert_interfaces::srv::GetJointLimits_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Event msg_;
};

class Init_GetJointLimits_Event_request
{
public:
  explicit Init_GetJointLimits_Event_request(::autocert_interfaces::srv::GetJointLimits_Event & msg)
  : msg_(msg)
  {}
  Init_GetJointLimits_Event_response request(::autocert_interfaces::srv::GetJointLimits_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetJointLimits_Event_response(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Event msg_;
};

class Init_GetJointLimits_Event_info
{
public:
  Init_GetJointLimits_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointLimits_Event_request info(::autocert_interfaces::srv::GetJointLimits_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetJointLimits_Event_request(msg_);
  }

private:
  ::autocert_interfaces::srv::GetJointLimits_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetJointLimits_Event>()
{
  return autocert_interfaces::srv::builder::Init_GetJointLimits_Event_info();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__BUILDER_HPP_
