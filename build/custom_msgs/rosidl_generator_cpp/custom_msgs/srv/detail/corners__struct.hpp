// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/Corners.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__CORNERS__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__CORNERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Corners_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Corners_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Corners_Request_
{
  using Type = Corners_Request_<ContainerAllocator>;

  explicit Corners_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit Corners_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Corners_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Corners_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Corners_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Corners_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Corners_Request
    std::shared_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Corners_Request
    std::shared_ptr<custom_msgs::srv::Corners_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Corners_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Corners_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Corners_Request_

// alias to use template instance with default allocator
using Corners_Request =
  custom_msgs::srv::Corners_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__Corners_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__Corners_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Corners_Response_
{
  using Type = Corners_Response_<ContainerAllocator>;

  explicit Corners_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Corners_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _ids_type ids;
  using _corners_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _corners_type corners;

  // setters for named parameter idiom
  Type & set__ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__corners(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->corners = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::Corners_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::Corners_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Corners_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::Corners_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__Corners_Response
    std::shared_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__Corners_Response
    std::shared_ptr<custom_msgs::srv::Corners_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Corners_Response_ & other) const
  {
    if (this->ids != other.ids) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    return true;
  }
  bool operator!=(const Corners_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Corners_Response_

// alias to use template instance with default allocator
using Corners_Response =
  custom_msgs::srv::Corners_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct Corners
{
  using Request = custom_msgs::srv::Corners_Request;
  using Response = custom_msgs::srv::Corners_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__CORNERS__STRUCT_HPP_
