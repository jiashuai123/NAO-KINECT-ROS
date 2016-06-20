// Generated by gencpp from file naoqi_bridge_msgs/PoseWithConfidenceStamped.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_POSEWITHCONFIDENCESTAMPED_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_POSEWITHCONFIDENCESTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct PoseWithConfidenceStamped_
{
  typedef PoseWithConfidenceStamped_<ContainerAllocator> Type;

  PoseWithConfidenceStamped_()
    : header()
    , pose()
    , confidence_index(0.0)  {
    }
  PoseWithConfidenceStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , confidence_index(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef float _confidence_index_type;
  _confidence_index_type confidence_index;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> const> ConstPtr;

}; // struct PoseWithConfidenceStamped_

typedef ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<std::allocator<void> > PoseWithConfidenceStamped;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::PoseWithConfidenceStamped > PoseWithConfidenceStampedPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::PoseWithConfidenceStamped const> PoseWithConfidenceStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace naoqi_bridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'naoqi_bridge_msgs': ['/home/jose/medeiros_ws/src/naoqi_bridge_msgs/msg', '/home/jose/medeiros_ws/devel/share/naoqi_bridge_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7503bfd0de35644d373258ab08dd1e84";
  }

  static const char* value(const ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7503bfd0de35644dULL;
  static const uint64_t static_value2 = 0x373258ab08dd1e84ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/PoseWithConfidenceStamped";
  }

  static const char* value(const ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
geometry_msgs/Pose pose\n\
float32 confidence_index\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.confidence_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PoseWithConfidenceStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::PoseWithConfidenceStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "confidence_index: ";
    Printer<float>::stream(s, indent + "  ", v.confidence_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_POSEWITHCONFIDENCESTAMPED_H
