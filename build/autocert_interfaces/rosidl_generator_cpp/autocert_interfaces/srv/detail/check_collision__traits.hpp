// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autocert_interfaces:srv/CheckCollision.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "autocert_interfaces/srv/check_collision.hpp"


#ifndef AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__TRAITS_HPP_
#define AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autocert_interfaces/srv/detail/check_collision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckCollision_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_positions
  {
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []";
    } else {
      out << "joint_positions: [";
      size_t pending_items = msg.joint_positions.size();
      for (auto item : msg.joint_positions) {
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckCollision_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_positions.size() == 0) {
      out << "joint_positions: []\n";
    } else {
      out << "joint_positions:\n";
      for (auto item : msg.joint_positions) {
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckCollision_Request & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::CheckCollision_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::CheckCollision_Request & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::CheckCollision_Request>()
{
  return "autocert_interfaces::srv::CheckCollision_Request";
}

template<>
inline const char * name<autocert_interfaces::srv::CheckCollision_Request>()
{
  return "autocert_interfaces/srv/CheckCollision_Request";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::CheckCollision_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::CheckCollision_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::CheckCollision_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autocert_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckCollision_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_collision
  {
    out << "in_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.in_collision, out);
    out << ", ";
  }

  // member: self_collision
  {
    out << "self_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.self_collision, out);
    out << ", ";
  }

  // member: environment_collision
  {
    out << "environment_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.environment_collision, out);
    out << ", ";
  }

  // member: colliding_links
  {
    if (msg.colliding_links.size() == 0) {
      out << "colliding_links: []";
    } else {
      out << "colliding_links: [";
      size_t pending_items = msg.colliding_links.size();
      for (auto item : msg.colliding_links) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_points
  {
    if (msg.contact_points.size() == 0) {
      out << "contact_points: []";
    } else {
      out << "contact_points: [";
      size_t pending_items = msg.contact_points.size();
      for (auto item : msg.contact_points) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CheckCollision_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.in_collision, out);
    out << "\n";
  }

  // member: self_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.self_collision, out);
    out << "\n";
  }

  // member: environment_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "environment_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.environment_collision, out);
    out << "\n";
  }

  // member: colliding_links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.colliding_links.size() == 0) {
      out << "colliding_links: []\n";
    } else {
      out << "colliding_links:\n";
      for (auto item : msg.colliding_links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contact_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_points.size() == 0) {
      out << "contact_points: []\n";
    } else {
      out << "contact_points:\n";
      for (auto item : msg.contact_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckCollision_Response & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::CheckCollision_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::CheckCollision_Response & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::CheckCollision_Response>()
{
  return "autocert_interfaces::srv::CheckCollision_Response";
}

template<>
inline const char * name<autocert_interfaces::srv::CheckCollision_Response>()
{
  return "autocert_interfaces/srv/CheckCollision_Response";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::CheckCollision_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::CheckCollision_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autocert_interfaces::srv::CheckCollision_Response>
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
  const CheckCollision_Event & msg,
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
  const CheckCollision_Event & msg,
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

inline std::string to_yaml(const CheckCollision_Event & msg, bool use_flow_style = false)
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
  const autocert_interfaces::srv::CheckCollision_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  autocert_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autocert_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const autocert_interfaces::srv::CheckCollision_Event & msg)
{
  return autocert_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autocert_interfaces::srv::CheckCollision_Event>()
{
  return "autocert_interfaces::srv::CheckCollision_Event";
}

template<>
inline const char * name<autocert_interfaces::srv::CheckCollision_Event>()
{
  return "autocert_interfaces/srv/CheckCollision_Event";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::CheckCollision_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autocert_interfaces::srv::CheckCollision_Event>
  : std::integral_constant<bool, has_bounded_size<autocert_interfaces::srv::CheckCollision_Request>::value && has_bounded_size<autocert_interfaces::srv::CheckCollision_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<autocert_interfaces::srv::CheckCollision_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autocert_interfaces::srv::CheckCollision>()
{
  return "autocert_interfaces::srv::CheckCollision";
}

template<>
inline const char * name<autocert_interfaces::srv::CheckCollision>()
{
  return "autocert_interfaces/srv/CheckCollision";
}

template<>
struct has_fixed_size<autocert_interfaces::srv::CheckCollision>
  : std::integral_constant<
    bool,
    has_fixed_size<autocert_interfaces::srv::CheckCollision_Request>::value &&
    has_fixed_size<autocert_interfaces::srv::CheckCollision_Response>::value
  >
{
};

template<>
struct has_bounded_size<autocert_interfaces::srv::CheckCollision>
  : std::integral_constant<
    bool,
    has_bounded_size<autocert_interfaces::srv::CheckCollision_Request>::value &&
    has_bounded_size<autocert_interfaces::srv::CheckCollision_Response>::value
  >
{
};

template<>
struct is_service<autocert_interfaces::srv::CheckCollision>
  : std::true_type
{
};

template<>
struct is_service_request<autocert_interfaces::srv::CheckCollision_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autocert_interfaces::srv::CheckCollision_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOCERT_INTERFACES__SRV__DETAIL__CHECK_COLLISION__TRAITS_HPP_
