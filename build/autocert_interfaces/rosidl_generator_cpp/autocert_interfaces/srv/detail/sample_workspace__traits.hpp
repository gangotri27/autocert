// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocert_interfaces:srv/SampleWorkspace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/sample_workspace.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__TRAITS_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autocert_interfaces/srv/detail/sample_workspace__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleWorkspace_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sampling_strategy
  {
    out << "sampling_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.sampling_strategy, out);
    out << ", ";
  }

  // member: num_samples
  {
    out << "num_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_samples, out);
    out << ", ";
  }

  // member: seed_configuration
  {
    if (msg.seed_configuration.size() == 0) {
      out << "seed_configuration: []";
    } else {
      out << "seed_configuration: [";
      size_t pending_items = msg.seed_configuration.size();
      for (auto item : msg.seed_configuration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: enable_collision_checking
  {
    out << "enable_collision_checking: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_collision_checking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleWorkspace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sampling_strategy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sampling_strategy: ";
    rosidl_generator_traits::value_to_yaml(msg.sampling_strategy, out);
    out << "\n";
  }

  // member: num_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_samples, out);
    out << "\n";
  }

  // member: seed_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.seed_configuration.size() == 0) {
      out << "seed_configuration: []\n";
    } else {
      out << "seed_configuration:\n";
      for (auto item : msg.seed_configuration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: enable_collision_checking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_collision_checking: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_collision_checking, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleWorkspace_Request & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::SampleWorkspace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::SampleWorkspace_Request & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::SampleWorkspace_Request>()
{
  return "autocert_interfaces::srv::SampleWorkspace_Request";
}

template<>
inline const char * name<autocert_interfaces::srv::SampleWorkspace_Request>()
{
  return "autocert_interfaces/srv/SampleWorkspace_Request";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::SampleWorkspace_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::SampleWorkspace_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleWorkspace_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_samples
  {
    if (msg.joint_samples.size() == 0) {
      out << "joint_samples: []";
    } else {
      out << "joint_samples: [";
      size_t pending_items = msg.joint_samples.size();
      for (auto item : msg.joint_samples) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: valid_indices
  {
    if (msg.valid_indices.size() == 0) {
      out << "valid_indices: []";
    } else {
      out << "valid_indices: [";
      size_t pending_items = msg.valid_indices.size();
      for (auto item : msg.valid_indices) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reachability_index
  {
    out << "reachability_index: ";
    rosidl_generator_traits::value_to_yaml(msg.reachability_index, out);
    out << ", ";
  }

  // member: workspace_volume
  {
    out << "workspace_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.workspace_volume, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleWorkspace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_samples.size() == 0) {
      out << "joint_samples: []\n";
    } else {
      out << "joint_samples:\n";
      for (auto item : msg.joint_samples) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: valid_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.valid_indices.size() == 0) {
      out << "valid_indices: []\n";
    } else {
      out << "valid_indices:\n";
      for (auto item : msg.valid_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reachability_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reachability_index: ";
    rosidl_generator_traits::value_to_yaml(msg.reachability_index, out);
    out << "\n";
  }

  // member: workspace_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "workspace_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.workspace_volume, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleWorkspace_Response & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::SampleWorkspace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::SampleWorkspace_Response & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::SampleWorkspace_Response>()
{
  return "autocert_interfaces::srv::SampleWorkspace_Response";
}

template<>
inline const char * name<autocert_interfaces::srv::SampleWorkspace_Response>()
{
  return "autocert_interfaces/srv/SampleWorkspace_Response";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::SampleWorkspace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::SampleWorkspace_Response>
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
  const SampleWorkspace_Event & msg,
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
  const SampleWorkspace_Event & msg,
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

inline std::string to_yaml(const SampleWorkspace_Event & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::SampleWorkspace_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::SampleWorkspace_Event & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::SampleWorkspace_Event>()
{
  return "autocert_interfaces::srv::SampleWorkspace_Event";
}

template<>
inline const char * name<autocert_interfaces::srv::SampleWorkspace_Event>()
{
  return "autocert_interfaces/srv/SampleWorkspace_Event";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::SampleWorkspace_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Event>
  : std::integral_constant<bool, has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Request>::value && has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<autocert_interfaces::srv::SampleWorkspace_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocert_interfaces::srv::SampleWorkspace>()
{
  return "autocert_interfaces::srv::SampleWorkspace";
}

template<>
inline const char * name<autocert_interfaces::srv::SampleWorkspace>()
{
  return "autocert_interfaces/srv/SampleWorkspace";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::SampleWorkspace>
  : std::integral_constant<
    bool,
    has_fixed_size<autocert_interfaces::srv::SampleWorkspace_Request>::value &&
    has_fixed_size<autocert_interfaces::srv::SampleWorkspace_Response>::value
  >
{
};

template<>
struct has_bounded_size<autocert_interfaces::srv::SampleWorkspace>
  : std::integral_constant<
    bool,
    has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Request>::value &&
    has_bounded_size<autocert_interfaces::srv::SampleWorkspace_Response>::value
  >
{
};

template<>
struct is_service<autocert_interfaces::srv::SampleWorkspace>
  : std::true_type
{
};

template<>
struct is_service_request<autocert_interfaces::srv::SampleWorkspace_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autocert_interfaces::srv::SampleWorkspace_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__SAMPLE_WORKSPACE__TRAITS_HPP_
