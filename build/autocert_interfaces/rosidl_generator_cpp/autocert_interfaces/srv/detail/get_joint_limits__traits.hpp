// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocert_interfaces:srv/GetJointLimits.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/get_joint_limits.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TRAITS_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autocert_interfaces/srv/detail/get_joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointLimits_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: planning_group
  {
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointLimits_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: planning_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointLimits_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autocert_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autocert_interfaces::srv::GetJointLimits_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::GetJointLimits_Request & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::GetJointLimits_Request>()
{
  return "autocert_interfaces::srv::GetJointLimits_Request";
}

template<>
inline const char * name<autocert_interfaces::srv::GetJointLimits_Request>()
{
  return "autocert_interfaces/srv/GetJointLimits_Request";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::GetJointLimits_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::GetJointLimits_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::GetJointLimits_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointLimits_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: min_limits
  {
    if (msg.min_limits.size() == 0) {
      out << "min_limits: []";
    } else {
      out << "min_limits: [";
      size_t pending_items = msg.min_limits.size();
      for (auto item : msg.min_limits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_limits
  {
    if (msg.max_limits.size() == 0) {
      out << "max_limits: []";
    } else {
      out << "max_limits: [";
      size_t pending_items = msg.max_limits.size();
      for (auto item : msg.max_limits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_limits
  {
    if (msg.velocity_limits.size() == 0) {
      out << "velocity_limits: []";
    } else {
      out << "velocity_limits: [";
      size_t pending_items = msg.velocity_limits.size();
      for (auto item : msg.velocity_limits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_limits
  {
    if (msg.acceleration_limits.size() == 0) {
      out << "acceleration_limits: []";
    } else {
      out << "acceleration_limits: [";
      size_t pending_items = msg.acceleration_limits.size();
      for (auto item : msg.acceleration_limits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_group
  {
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << ", ";
  }

  // member: end_effector_link
  {
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
    out << ", ";
  }

  // member: num_joints
  {
    out << "num_joints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_joints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointLimits_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: min_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.min_limits.size() == 0) {
      out << "min_limits: []\n";
    } else {
      out << "min_limits:\n";
      for (auto item : msg.min_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_limits.size() == 0) {
      out << "max_limits: []\n";
    } else {
      out << "max_limits:\n";
      for (auto item : msg.max_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_limits.size() == 0) {
      out << "velocity_limits: []\n";
    } else {
      out << "velocity_limits:\n";
      for (auto item : msg.velocity_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_limits.size() == 0) {
      out << "acceleration_limits: []\n";
    } else {
      out << "acceleration_limits:\n";
      for (auto item : msg.acceleration_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: planning_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_group: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_group, out);
    out << "\n";
  }

  // member: end_effector_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_link: ";
    rosidl_generator_traits::value_to_yaml(msg.end_effector_link, out);
    out << "\n";
  }

  // member: num_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_joints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_joints, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointLimits_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autocert_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autocert_interfaces::srv::GetJointLimits_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::GetJointLimits_Response & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::GetJointLimits_Response>()
{
  return "autocert_interfaces::srv::GetJointLimits_Response";
}

template<>
inline const char * name<autocert_interfaces::srv::GetJointLimits_Response>()
{
  return "autocert_interfaces/srv/GetJointLimits_Response";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::GetJointLimits_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::GetJointLimits_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::GetJointLimits_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetJointLimits_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetJointLimits_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetJointLimits_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autocert_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use autocert_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autocert_interfaces::srv::GetJointLimits_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::GetJointLimits_Event & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::GetJointLimits_Event>()
{
  return "autocert_interfaces::srv::GetJointLimits_Event";
}

template<>
inline const char * name<autocert_interfaces::srv::GetJointLimits_Event>()
{
  return "autocert_interfaces/srv/GetJointLimits_Event";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::GetJointLimits_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::GetJointLimits_Event>
  : std::integral_constant<bool, has_bounded_size<autocert_interfaces::srv::GetJointLimits_Request>::value && has_bounded_size<autocert_interfaces::srv::GetJointLimits_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<autocert_interfaces::srv::GetJointLimits_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocert_interfaces::srv::GetJointLimits>()
{
  return "autocert_interfaces::srv::GetJointLimits";
}

template<>
inline const char * name<autocert_interfaces::srv::GetJointLimits>()
{
  return "autocert_interfaces/srv/GetJointLimits";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::GetJointLimits>
  : std::integral_constant<
    bool,
    has_fixed_size<autocert_interfaces::srv::GetJointLimits_Request>::value &&
    has_fixed_size<autocert_interfaces::srv::GetJointLimits_Response>::value
  >
{
};

template<>
struct has_bounded_size<autocert_interfaces::srv::GetJointLimits>
  : std::integral_constant<
    bool,
    has_bounded_size<autocert_interfaces::srv::GetJointLimits_Request>::value &&
    has_bounded_size<autocert_interfaces::srv::GetJointLimits_Response>::value
  >
{
};

template<>
struct is_service<autocert_interfaces::srv::GetJointLimits>
  : std::true_type
{
};

template<>
struct is_service_request<autocert_interfaces::srv::GetJointLimits_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autocert_interfaces::srv::GetJointLimits_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__GET_JOINT_LIMITS__TRAITS_HPP_
