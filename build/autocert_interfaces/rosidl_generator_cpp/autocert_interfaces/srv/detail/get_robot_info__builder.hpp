// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:srv/GetRobotInfo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_robot_info.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/srv/detail/get_robot_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetRobotInfo_Request>()
{
  return ::autocert_interfaces::srv::GetRobotInfo_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRobotInfo_Response_default_timeout
{
public:
  explicit Init_GetRobotInfo_Response_default_timeout(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::GetRobotInfo_Response default_timeout(::autocert_interfaces::srv::GetRobotInfo_Response::_default_timeout_type arg)
  {
    msg_.default_timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_kinematics_solver_name
{
public:
  explicit Init_GetRobotInfo_Response_kinematics_solver_name(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_default_timeout kinematics_solver_name(::autocert_interfaces::srv::GetRobotInfo_Response::_kinematics_solver_name_type arg)
  {
    msg_.kinematics_solver_name = std::move(arg);
    return Init_GetRobotInfo_Response_default_timeout(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_kinematics_solver_available
{
public:
  explicit Init_GetRobotInfo_Response_kinematics_solver_available(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_kinematics_solver_name kinematics_solver_available(::autocert_interfaces::srv::GetRobotInfo_Response::_kinematics_solver_available_type arg)
  {
    msg_.kinematics_solver_available = std::move(arg);
    return Init_GetRobotInfo_Response_kinematics_solver_name(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_collision_checking_available
{
public:
  explicit Init_GetRobotInfo_Response_collision_checking_available(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_kinematics_solver_available collision_checking_available(::autocert_interfaces::srv::GetRobotInfo_Response::_collision_checking_available_type arg)
  {
    msg_.collision_checking_available = std::move(arg);
    return Init_GetRobotInfo_Response_kinematics_solver_available(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_num_links
{
public:
  explicit Init_GetRobotInfo_Response_num_links(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_collision_checking_available num_links(::autocert_interfaces::srv::GetRobotInfo_Response::_num_links_type arg)
  {
    msg_.num_links = std::move(arg);
    return Init_GetRobotInfo_Response_collision_checking_available(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_num_joints
{
public:
  explicit Init_GetRobotInfo_Response_num_joints(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_num_links num_joints(::autocert_interfaces::srv::GetRobotInfo_Response::_num_joints_type arg)
  {
    msg_.num_joints = std::move(arg);
    return Init_GetRobotInfo_Response_num_links(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_joint_velocity_limits
{
public:
  explicit Init_GetRobotInfo_Response_joint_velocity_limits(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_num_joints joint_velocity_limits(::autocert_interfaces::srv::GetRobotInfo_Response::_joint_velocity_limits_type arg)
  {
    msg_.joint_velocity_limits = std::move(arg);
    return Init_GetRobotInfo_Response_num_joints(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_joint_max_limits
{
public:
  explicit Init_GetRobotInfo_Response_joint_max_limits(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_joint_velocity_limits joint_max_limits(::autocert_interfaces::srv::GetRobotInfo_Response::_joint_max_limits_type arg)
  {
    msg_.joint_max_limits = std::move(arg);
    return Init_GetRobotInfo_Response_joint_velocity_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_joint_min_limits
{
public:
  explicit Init_GetRobotInfo_Response_joint_min_limits(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_joint_max_limits joint_min_limits(::autocert_interfaces::srv::GetRobotInfo_Response::_joint_min_limits_type arg)
  {
    msg_.joint_min_limits = std::move(arg);
    return Init_GetRobotInfo_Response_joint_max_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_group_names
{
public:
  explicit Init_GetRobotInfo_Response_group_names(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_joint_min_limits group_names(::autocert_interfaces::srv::GetRobotInfo_Response::_group_names_type arg)
  {
    msg_.group_names = std::move(arg);
    return Init_GetRobotInfo_Response_joint_min_limits(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_link_names
{
public:
  explicit Init_GetRobotInfo_Response_link_names(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_group_names link_names(::autocert_interfaces::srv::GetRobotInfo_Response::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return Init_GetRobotInfo_Response_group_names(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_joint_names
{
public:
  explicit Init_GetRobotInfo_Response_joint_names(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_link_names joint_names(::autocert_interfaces::srv::GetRobotInfo_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_GetRobotInfo_Response_link_names(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_end_effector_link
{
public:
  explicit Init_GetRobotInfo_Response_end_effector_link(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_joint_names end_effector_link(::autocert_interfaces::srv::GetRobotInfo_Response::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return Init_GetRobotInfo_Response_joint_names(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_planning_group
{
public:
  explicit Init_GetRobotInfo_Response_planning_group(::autocert_interfaces::srv::GetRobotInfo_Response & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Response_end_effector_link planning_group(::autocert_interfaces::srv::GetRobotInfo_Response::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return Init_GetRobotInfo_Response_end_effector_link(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

class Init_GetRobotInfo_Response_robot_name
{
public:
  Init_GetRobotInfo_Response_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotInfo_Response_planning_group robot_name(::autocert_interfaces::srv::GetRobotInfo_Response::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_GetRobotInfo_Response_planning_group(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetRobotInfo_Response>()
{
  return autocert_interfaces::srv::builder::Init_GetRobotInfo_Response_robot_name();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetRobotInfo_Event_response
{
public:
  explicit Init_GetRobotInfo_Event_response(::autocert_interfaces::srv::GetRobotInfo_Event & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::GetRobotInfo_Event response(::autocert_interfaces::srv::GetRobotInfo_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Event msg_;
};

class Init_GetRobotInfo_Event_request
{
public:
  explicit Init_GetRobotInfo_Event_request(::autocert_interfaces::srv::GetRobotInfo_Event & msg)
  : msg_(msg)
  {}
  Init_GetRobotInfo_Event_response request(::autocert_interfaces::srv::GetRobotInfo_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetRobotInfo_Event_response(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Event msg_;
};

class Init_GetRobotInfo_Event_info
{
public:
  Init_GetRobotInfo_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRobotInfo_Event_request info(::autocert_interfaces::srv::GetRobotInfo_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetRobotInfo_Event_request(msg_);
  }

private:
  ::autocert_interfaces::srv::GetRobotInfo_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::GetRobotInfo_Event>()
{
  return autocert_interfaces::srv::builder::Init_GetRobotInfo_Event_info();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_ROBOT_INFO__BUILDER_HPP_
