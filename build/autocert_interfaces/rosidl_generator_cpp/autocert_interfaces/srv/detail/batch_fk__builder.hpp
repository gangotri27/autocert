// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:srv/BatchFK.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/batch_fk.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__BUILDER_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/srv/detail/batch_fk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatchFK_Request_planning_group
{
public:
  explicit Init_BatchFK_Request_planning_group(::autocert_interfaces::srv::BatchFK_Request & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::BatchFK_Request planning_group(::autocert_interfaces::srv::BatchFK_Request::_planning_group_type arg)
  {
    msg_.planning_group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Request msg_;
};

class Init_BatchFK_Request_filter_collisions
{
public:
  explicit Init_BatchFK_Request_filter_collisions(::autocert_interfaces::srv::BatchFK_Request & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Request_planning_group filter_collisions(::autocert_interfaces::srv::BatchFK_Request::_filter_collisions_type arg)
  {
    msg_.filter_collisions = std::move(arg);
    return Init_BatchFK_Request_planning_group(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Request msg_;
};

class Init_BatchFK_Request_joint_samples
{
public:
  explicit Init_BatchFK_Request_joint_samples(::autocert_interfaces::srv::BatchFK_Request & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Request_filter_collisions joint_samples(::autocert_interfaces::srv::BatchFK_Request::_joint_samples_type arg)
  {
    msg_.joint_samples = std::move(arg);
    return Init_BatchFK_Request_filter_collisions(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Request msg_;
};

class Init_BatchFK_Request_num_joints
{
public:
  explicit Init_BatchFK_Request_num_joints(::autocert_interfaces::srv::BatchFK_Request & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Request_joint_samples num_joints(::autocert_interfaces::srv::BatchFK_Request::_num_joints_type arg)
  {
    msg_.num_joints = std::move(arg);
    return Init_BatchFK_Request_joint_samples(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Request msg_;
};

class Init_BatchFK_Request_num_samples
{
public:
  Init_BatchFK_Request_num_samples()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatchFK_Request_num_joints num_samples(::autocert_interfaces::srv::BatchFK_Request::_num_samples_type arg)
  {
    msg_.num_samples = std::move(arg);
    return Init_BatchFK_Request_num_joints(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::BatchFK_Request>()
{
  return autocert_interfaces::srv::builder::Init_BatchFK_Request_num_samples();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatchFK_Response_error_message
{
public:
  explicit Init_BatchFK_Response_error_message(::autocert_interfaces::srv::BatchFK_Response & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::BatchFK_Response error_message(::autocert_interfaces::srv::BatchFK_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

class Init_BatchFK_Response_error_code
{
public:
  explicit Init_BatchFK_Response_error_code(::autocert_interfaces::srv::BatchFK_Response & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Response_error_message error_code(::autocert_interfaces::srv::BatchFK_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_BatchFK_Response_error_message(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

class Init_BatchFK_Response_computation_time_ms
{
public:
  explicit Init_BatchFK_Response_computation_time_ms(::autocert_interfaces::srv::BatchFK_Response & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Response_error_code computation_time_ms(::autocert_interfaces::srv::BatchFK_Response::_computation_time_ms_type arg)
  {
    msg_.computation_time_ms = std::move(arg);
    return Init_BatchFK_Response_error_code(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

class Init_BatchFK_Response_end_effector_link
{
public:
  explicit Init_BatchFK_Response_end_effector_link(::autocert_interfaces::srv::BatchFK_Response & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Response_computation_time_ms end_effector_link(::autocert_interfaces::srv::BatchFK_Response::_end_effector_link_type arg)
  {
    msg_.end_effector_link = std::move(arg);
    return Init_BatchFK_Response_computation_time_ms(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

class Init_BatchFK_Response_valid_indices
{
public:
  explicit Init_BatchFK_Response_valid_indices(::autocert_interfaces::srv::BatchFK_Response & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Response_end_effector_link valid_indices(::autocert_interfaces::srv::BatchFK_Response::_valid_indices_type arg)
  {
    msg_.valid_indices = std::move(arg);
    return Init_BatchFK_Response_end_effector_link(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

class Init_BatchFK_Response_poses
{
public:
  Init_BatchFK_Response_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatchFK_Response_valid_indices poses(::autocert_interfaces::srv::BatchFK_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_BatchFK_Response_valid_indices(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::BatchFK_Response>()
{
  return autocert_interfaces::srv::builder::Init_BatchFK_Response_poses();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatchFK_Event_response
{
public:
  explicit Init_BatchFK_Event_response(::autocert_interfaces::srv::BatchFK_Event & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::BatchFK_Event response(::autocert_interfaces::srv::BatchFK_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Event msg_;
};

class Init_BatchFK_Event_request
{
public:
  explicit Init_BatchFK_Event_request(::autocert_interfaces::srv::BatchFK_Event & msg)
  : msg_(msg)
  {}
  Init_BatchFK_Event_response request(::autocert_interfaces::srv::BatchFK_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BatchFK_Event_response(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Event msg_;
};

class Init_BatchFK_Event_info
{
public:
  Init_BatchFK_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatchFK_Event_request info(::autocert_interfaces::srv::BatchFK_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BatchFK_Event_request(msg_);
  }

private:
  ::autocert_interfaces::srv::BatchFK_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::BatchFK_Event>()
{
  return autocert_interfaces::srv::builder::Init_BatchFK_Event_info();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__BATCH_FK__BUILDER_HPP_
