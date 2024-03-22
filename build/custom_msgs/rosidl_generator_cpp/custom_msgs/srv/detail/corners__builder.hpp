// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/Corners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__CORNERS__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__CORNERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/corners__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Corners_Request_image
{
public:
  Init_Corners_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::Corners_Request image(::custom_msgs::srv::Corners_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Corners_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Corners_Request>()
{
  return custom_msgs::srv::builder::Init_Corners_Request_image();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Corners_Response_corners
{
public:
  explicit Init_Corners_Response_corners(::custom_msgs::srv::Corners_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Corners_Response corners(::custom_msgs::srv::Corners_Response::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Corners_Response msg_;
};

class Init_Corners_Response_ids
{
public:
  Init_Corners_Response_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Corners_Response_corners ids(::custom_msgs::srv::Corners_Response::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_Corners_Response_corners(msg_);
  }

private:
  ::custom_msgs::srv::Corners_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Corners_Response>()
{
  return custom_msgs::srv::builder::Init_Corners_Response_ids();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__CORNERS__BUILDER_HPP_
