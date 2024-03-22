// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/Corners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__CORNERS__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__CORNERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/srv/detail/corners__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Corners_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Corners_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Corners_Request & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::Corners_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::Corners_Request & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::Corners_Request>()
{
  return "custom_msgs::srv::Corners_Request";
}

template<>
inline const char * name<custom_msgs::srv::Corners_Request>()
{
  return "custom_msgs/srv/Corners_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::Corners_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<custom_msgs::srv::Corners_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<custom_msgs::srv::Corners_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Corners_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
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
  const Corners_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
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

inline std::string to_yaml(const Corners_Response & msg, bool use_flow_style = false)
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

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::srv::Corners_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::srv::Corners_Response & msg)
{
  return custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::srv::Corners_Response>()
{
  return "custom_msgs::srv::Corners_Response";
}

template<>
inline const char * name<custom_msgs::srv::Corners_Response>()
{
  return "custom_msgs/srv/Corners_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::Corners_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::srv::Corners_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::srv::Corners_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::Corners>()
{
  return "custom_msgs::srv::Corners";
}

template<>
inline const char * name<custom_msgs::srv::Corners>()
{
  return "custom_msgs/srv/Corners";
}

template<>
struct has_fixed_size<custom_msgs::srv::Corners>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::Corners_Request>::value &&
    has_fixed_size<custom_msgs::srv::Corners_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::Corners>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::Corners_Request>::value &&
    has_bounded_size<custom_msgs::srv::Corners_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::Corners>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::Corners_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::Corners_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__CORNERS__TRAITS_HPP_
