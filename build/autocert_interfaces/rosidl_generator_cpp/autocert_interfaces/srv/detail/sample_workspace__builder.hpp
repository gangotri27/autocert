// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/sample_workspace.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__BUILDER_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleWorkspace_Request_enable_collision_checking
{
public:
  explicit Init_SampleWorkspace_Request_enable_collision_checking(::autocert_interfaces::srv::SampleWorkspace_Request & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::SampleWorkspace_Request enable_collision_checking(::autocert_interfaces::srv::SampleWorkspace_Request::_enable_collision_checking_type arg)
  {
    msg_.enable_collision_checking = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Request msg_;
};

class Init_SampleWorkspace_Request_seed_configuration
{
public:
  explicit Init_SampleWorkspace_Request_seed_configuration(::autocert_interfaces::srv::SampleWorkspace_Request & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Request_enable_collision_checking seed_configuration(::autocert_interfaces::srv::SampleWorkspace_Request::_seed_configuration_type arg)
  {
    msg_.seed_configuration = std::move(arg);
    return Init_SampleWorkspace_Request_enable_collision_checking(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Request msg_;
};

class Init_SampleWorkspace_Request_num_samples
{
public:
  explicit Init_SampleWorkspace_Request_num_samples(::autocert_interfaces::srv::SampleWorkspace_Request & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Request_seed_configuration num_samples(::autocert_interfaces::srv::SampleWorkspace_Request::_num_samples_type arg)
  {
    msg_.num_samples = std::move(arg);
    return Init_SampleWorkspace_Request_seed_configuration(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Request msg_;
};

class Init_SampleWorkspace_Request_sampling_strategy
{
public:
  Init_SampleWorkspace_Request_sampling_strategy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleWorkspace_Request_num_samples sampling_strategy(::autocert_interfaces::srv::SampleWorkspace_Request::_sampling_strategy_type arg)
  {
    msg_.sampling_strategy = std::move(arg);
    return Init_SampleWorkspace_Request_num_samples(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::SampleWorkspace_Request>()
{
  return autocert_interfaces::srv::builder::Init_SampleWorkspace_Request_sampling_strategy();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleWorkspace_Response_workspace_volume
{
public:
  explicit Init_SampleWorkspace_Response_workspace_volume(::autocert_interfaces::srv::SampleWorkspace_Response & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::SampleWorkspace_Response workspace_volume(::autocert_interfaces::srv::SampleWorkspace_Response::_workspace_volume_type arg)
  {
    msg_.workspace_volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Response msg_;
};

class Init_SampleWorkspace_Response_reachability_index
{
public:
  explicit Init_SampleWorkspace_Response_reachability_index(::autocert_interfaces::srv::SampleWorkspace_Response & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Response_workspace_volume reachability_index(::autocert_interfaces::srv::SampleWorkspace_Response::_reachability_index_type arg)
  {
    msg_.reachability_index = std::move(arg);
    return Init_SampleWorkspace_Response_workspace_volume(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Response msg_;
};

class Init_SampleWorkspace_Response_valid_indices
{
public:
  explicit Init_SampleWorkspace_Response_valid_indices(::autocert_interfaces::srv::SampleWorkspace_Response & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Response_reachability_index valid_indices(::autocert_interfaces::srv::SampleWorkspace_Response::_valid_indices_type arg)
  {
    msg_.valid_indices = std::move(arg);
    return Init_SampleWorkspace_Response_reachability_index(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Response msg_;
};

class Init_SampleWorkspace_Response_poses
{
public:
  explicit Init_SampleWorkspace_Response_poses(::autocert_interfaces::srv::SampleWorkspace_Response & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Response_valid_indices poses(::autocert_interfaces::srv::SampleWorkspace_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_SampleWorkspace_Response_valid_indices(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Response msg_;
};

class Init_SampleWorkspace_Response_joint_samples
{
public:
  Init_SampleWorkspace_Response_joint_samples()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleWorkspace_Response_poses joint_samples(::autocert_interfaces::srv::SampleWorkspace_Response::_joint_samples_type arg)
  {
    msg_.joint_samples = std::move(arg);
    return Init_SampleWorkspace_Response_poses(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::SampleWorkspace_Response>()
{
  return autocert_interfaces::srv::builder::Init_SampleWorkspace_Response_joint_samples();
}

}  // namespace autocert_interfaces


namespace autocert_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleWorkspace_Event_response
{
public:
  explicit Init_SampleWorkspace_Event_response(::autocert_interfaces::srv::SampleWorkspace_Event & msg)
  : msg_(msg)
  {}
  ::autocert_interfaces::srv::SampleWorkspace_Event response(::autocert_interfaces::srv::SampleWorkspace_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Event msg_;
};

class Init_SampleWorkspace_Event_request
{
public:
  explicit Init_SampleWorkspace_Event_request(::autocert_interfaces::srv::SampleWorkspace_Event & msg)
  : msg_(msg)
  {}
  Init_SampleWorkspace_Event_response request(::autocert_interfaces::srv::SampleWorkspace_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SampleWorkspace_Event_response(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Event msg_;
};

class Init_SampleWorkspace_Event_info
{
public:
  Init_SampleWorkspace_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleWorkspace_Event_request info(::autocert_interfaces::srv::SampleWorkspace_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SampleWorkspace_Event_request(msg_);
  }

private:
  ::autocert_interfaces::srv::SampleWorkspace_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::autocert_interfaces::srv::SampleWorkspace_Event>()
{
  return autocert_interfaces::srv::builder::Init_SampleWorkspace_Event_info();
}

}  // namespace autocert_interfaces

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__BUILDER_HPP_
