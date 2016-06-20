// Generated by gencpp from file naoqi_bridge_msgs/SetArmsEnabledRequest.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_SETARMSENABLEDREQUEST_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_SETARMSENABLEDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct SetArmsEnabledRequest_
{
  typedef SetArmsEnabledRequest_<ContainerAllocator> Type;

  SetArmsEnabledRequest_()
    : left_arm(false)
    , right_arm(false)  {
    }
  SetArmsEnabledRequest_(const ContainerAllocator& _alloc)
    : left_arm(false)
    , right_arm(false)  {
  (void)_alloc;
    }



   typedef uint8_t _left_arm_type;
  _left_arm_type left_arm;

   typedef uint8_t _right_arm_type;
  _right_arm_type right_arm;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetArmsEnabledRequest_

typedef ::naoqi_bridge_msgs::SetArmsEnabledRequest_<std::allocator<void> > SetArmsEnabledRequest;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetArmsEnabledRequest > SetArmsEnabledRequestPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::SetArmsEnabledRequest const> SetArmsEnabledRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/jose/medeiros_ws/src/naoqi_bridge_msgs/msg', '/home/jose/medeiros_ws/devel/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4da9069facca935244c3405e288ba555";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4da9069facca9352ULL;
  static const uint64_t static_value2 = 0x44c3405e288ba555ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/SetArmsEnabledRequest";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool left_arm\n\
bool right_arm\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_arm);
      stream.next(m.right_arm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SetArmsEnabledRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::SetArmsEnabledRequest_<ContainerAllocator>& v)
  {
    s << indent << "left_arm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left_arm);
    s << indent << "right_arm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right_arm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_SETARMSENABLEDREQUEST_H
