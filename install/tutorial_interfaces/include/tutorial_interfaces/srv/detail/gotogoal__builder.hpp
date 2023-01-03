// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Gotogoal.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__GOTOGOAL__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__GOTOGOAL__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/gotogoal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gotogoal_Request_y
{
public:
  explicit Init_Gotogoal_Request_y(::tutorial_interfaces::srv::Gotogoal_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::Gotogoal_Request y(::tutorial_interfaces::srv::Gotogoal_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Gotogoal_Request msg_;
};

class Init_Gotogoal_Request_x
{
public:
  Init_Gotogoal_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gotogoal_Request_y x(::tutorial_interfaces::srv::Gotogoal_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Gotogoal_Request_y(msg_);
  }

private:
  ::tutorial_interfaces::srv::Gotogoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Gotogoal_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Gotogoal_Request_x();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gotogoal_Response_z
{
public:
  Init_Gotogoal_Response_z()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::Gotogoal_Response z(::tutorial_interfaces::srv::Gotogoal_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Gotogoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Gotogoal_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Gotogoal_Response_z();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__GOTOGOAL__BUILDER_HPP_
