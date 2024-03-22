// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/Path.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/srv/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Path_Request_corners
{
public:
  explicit Init_Path_Request_corners(::custom_msgs::srv::Path_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::Path_Request corners(::custom_msgs::srv::Path_Request::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Path_Request msg_;
};

class Init_Path_Request_ids
{
public:
  Init_Path_Request_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_Request_corners ids(::custom_msgs::srv::Path_Request::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_Path_Request_corners(msg_);
  }

private:
  ::custom_msgs::srv::Path_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Path_Request>()
{
  return custom_msgs::srv::builder::Init_Path_Request_ids();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Path_Response_path
{
public:
  Init_Path_Response_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::srv::Path_Response path(::custom_msgs::srv::Path_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::Path_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::Path_Response>()
{
  return custom_msgs::srv::builder::Init_Path_Response_path();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__PATH__BUILDER_HPP_
