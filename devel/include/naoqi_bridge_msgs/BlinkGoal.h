// Generated by gencpp from file naoqi_bridge_msgs/BlinkGoal.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_BLINKGOAL_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_BLINKGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct BlinkGoal_
{
  typedef BlinkGoal_<ContainerAllocator> Type;

  BlinkGoal_()
    : colors()
    , bg_color()
    , blink_duration()
    , blink_rate_mean(0.0)
    , blink_rate_sd(0.0)  {
    }
  BlinkGoal_(const ContainerAllocator& _alloc)
    : colors(_alloc)
    , bg_color(_alloc)
    , blink_duration()
    , blink_rate_mean(0.0)
    , blink_rate_sd(0.0)  {
  (void)_alloc;
    }



   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _colors_type;
  _colors_type colors;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _bg_color_type;
  _bg_color_type bg_color;

   typedef ros::Duration _blink_duration_type;
  _blink_duration_type blink_duration;

   typedef float _blink_rate_mean_type;
  _blink_rate_mean_type blink_rate_mean;

   typedef float _blink_rate_sd_type;
  _blink_rate_sd_type blink_rate_sd;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> const> ConstPtr;

}; // struct BlinkGoal_

typedef ::naoqi_bridge_msgs::BlinkGoal_<std::allocator<void> > BlinkGoal;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::BlinkGoal > BlinkGoalPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::BlinkGoal const> BlinkGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/jose/medeiros_ws/src/naoqi_bridge_msgs/msg', '/home/jose/medeiros_ws/devel/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e5d3c2ba9976dc121a0bb6ef7c66d79";
  }

  static const char* value(const ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e5d3c2ba9976dc1ULL;
  static const uint64_t static_value2 = 0x21a0bb6ef7c66d79ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/BlinkGoal";
  }

  static const char* value(const ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal: colours to use for blinking, plus blinking rate mean and sd\n\
# Result: true if robot is still blinking (call was pre-empted by another user)\n\
# Feedback: last blinked colour\n\
std_msgs/ColorRGBA[] colors\n\
std_msgs/ColorRGBA bg_color\n\
duration blink_duration\n\
float32 blink_rate_mean\n\
float32 blink_rate_sd\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.colors);
      stream.next(m.bg_color);
      stream.next(m.blink_duration);
      stream.next(m.blink_rate_mean);
      stream.next(m.blink_rate_sd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BlinkGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::BlinkGoal_<ContainerAllocator>& v)
  {
    s << indent << "colors[]" << std::endl;
    for (size_t i = 0; i < v.colors.size(); ++i)
    {
      s << indent << "  colors[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.colors[i]);
    }
    s << indent << "bg_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.bg_color);
    s << indent << "blink_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.blink_duration);
    s << indent << "blink_rate_mean: ";
    Printer<float>::stream(s, indent + "  ", v.blink_rate_mean);
    s << indent << "blink_rate_sd: ";
    Printer<float>::stream(s, indent + "  ", v.blink_rate_sd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_BLINKGOAL_H
