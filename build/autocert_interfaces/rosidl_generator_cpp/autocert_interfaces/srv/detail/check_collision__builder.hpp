// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:srv/CheckCollision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/check_collision.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__BUILDER_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckCollision_Request_planning_group
{
public:
  explicit Init_CheckCollision_Request_planning_group(::autocert_interfaces::srv::CheckCollision_Request & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::CheckCollision_Request planning_group(::autocert_interfaces::srv::CheckCollision_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Request msg_;
};

class Init_CheckCollision_Request_joint_positions
{
public:
  Init_CheckCollision_Request_joint_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckCollision_Request_planning_group joint_positions(::autocert_interfaces::srv::CheckCollision_Request::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return Init_CheckCollision_Request_planning_group(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::CheckCollision_Request>()
{
  return autocert_interfaces::srv::builder::Init_CheckCollision_Request_joint_positions();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckCollision_Response_contact_points
{
public:
  explicit Init_CheckCollision_Response_contact_points(::autocert_interfaces::srv::CheckCollision_Response & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::CheckCollision_Response contact_points(::autocert_interfaces::srv::CheckCollision_Response::_contact_points_type arg)
  {
    msg_.contact_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Response msg_;
};

class Init_CheckCollision_Response_colliding_links
{
public:
  explicit Init_CheckCollision_Response_colliding_links(::autocert_interfaces::srv::CheckCollision_Response & msg)
  : msg_(msg)
  {}
  Init_CheckCollision_Response_contact_points colliding_links(::autocert_interfaces::srv::CheckCollision_Response::_colliding_links_type arg)
  {
    msg_.colliding_links = std::move(arg);
    return Init_CheckCollision_Response_contact_points(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Response msg_;
};

class Init_CheckCollision_Response_environment_collision
{
public:
  explicit Init_CheckCollision_Response_environment_collision(::autocert_interfaces::srv::CheckCollision_Response & msg)
  : msg_(msg)
  {}
  Init_CheckCollision_Response_colliding_links environment_collision(::autocert_interfaces::srv::CheckCollision_Response::_environment_collision_type arg)
  {
    msg_.environment_collision = std::move(arg);
    return Init_CheckCollision_Response_colliding_links(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Response msg_;
};

class Init_CheckCollision_Response_self_collision
{
public:
  explicit Init_CheckCollision_Response_self_collision(::autocert_interfaces::srv::CheckCollision_Response & msg)
  : msg_(msg)
  {}
  Init_CheckCollision_Response_environment_collision self_collision(::autocert_interfaces::srv::CheckCollision_Response::_self_collision_type arg)
  {
    msg_.self_collision = std::move(arg);
    return Init_CheckCollision_Response_environment_collision(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Response msg_;
};

class Init_CheckCollision_Response_in_collision
{
public:
  Init_CheckCollision_Response_in_collision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckCollision_Response_self_collision in_collision(::autocert_interfaces::srv::CheckCollision_Response::_in_collision_type arg)
  {
    msg_.in_collision = std::move(arg);
    return Init_CheckCollision_Response_self_collision(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::CheckCollision_Response>()
{
  return autocert_interfaces::srv::builder::Init_CheckCollision_Response_in_collision();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckCollision_Event_response
{
public:
  explicit Init_CheckCollision_Event_response(::autocert_interfaces::srv::CheckCollision_Event & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::CheckCollision_Event response(::autocert_interfaces::srv::CheckCollision_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Event msg_;
};

class Init_CheckCollision_Event_request
{
public:
  explicit Init_CheckCollision_Event_request(::autocert_interfaces::srv::CheckCollision_Event & msg)
  : msg_(msg)
  {}
  Init_CheckCollision_Event_response request(::autocert_interfaces::srv::CheckCollision_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CheckCollision_Event_response(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Event msg_;
};

class Init_CheckCollision_Event_info
{
public:
  Init_CheckCollision_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckCollision_Event_request info(::autocert_interfaces::srv::CheckCollision_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CheckCollision_Event_request(msg_);
  }

private:
  ::autocert_interfaces::srv::CheckCollision_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::CheckCollision_Event>()
{
  return autocert_interfaces::srv::builder::Init_CheckCollision_Event_info();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__BUILDER_HPP_
