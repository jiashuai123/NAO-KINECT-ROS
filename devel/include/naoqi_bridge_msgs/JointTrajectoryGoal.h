// Generated by gencpp from file naoqi_bridge_msgs/JointTrajectoryGoal.msg
// DO NOT EDIT!


#ifndef NAOQI_BRIDGE_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H
#define NAOQI_BRIDGE_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>

namespace naoqi_bridge_msgs
{
template <class ContainerAllocator>
struct JointTrajectoryGoal_
{
  typedef JointTrajectoryGoal_<ContainerAllocator> Type;

  JointTrajectoryGoal_()
    : trajectory()
    , relative(0)  {
    }
  JointTrajectoryGoal_(const ContainerAllocator& _alloc)
    : trajectory(_alloc)
    , relative(0)  {
  (void)_alloc;
    }



   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _trajectory_type;
  _trajectory_type trajectory;

   typedef uint8_t _relative_type;
  _relative_type relative;




  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> const> ConstPtr;

}; // struct JointTrajectoryGoal_

typedef ::naoqi_bridge_msgs::JointTrajectoryGoal_<std::allocator<void> > JointTrajectoryGoal;

typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointTrajectoryGoal > JointTrajectoryGoalPtr;
typedef boost::shared_ptr< ::naoqi_bridge_msgs::JointTrajectoryGoal const> JointTrajectoryGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ecdd56459ac4b8e2c210a74dbb66523";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ecdd56459ac4b8eULL;
  static const uint64_t static_value2 = 0x2c210a74dbb66523ULL;
};

template<class ContainerAllocator>
struct DataType< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "naoqi_bridge_msgs/JointTrajectoryGoal";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# goal: a joint angle trajectory\n\
trajectory_msgs/JointTrajectory trajectory\n\
# flag whether motion is absolute (=0, default) or relative (=1)\n\
uint8 relative\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
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
MSG: trajectory_msgs/JointTrajectoryPoint\n\
# Each trajectory point specifies either positions[, velocities[, accelerations]]\n\
# or positions[, effort] for the trajectory to be executed.\n\
# All specified values are in the same order as the joint names in JointTrajectory.msg\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
";
  }

  static const char* value(const ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory);
      stream.next(m.relative);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct JointTrajectoryGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::naoqi_bridge_msgs::JointTrajectoryGoal_<ContainerAllocator>& v)
  {
    s << indent << "trajectory: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory);
    s << indent << "relative: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relative);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAOQI_BRIDGE_MSGS_MESSAGE_JOINTTRAJECTORYGOAL_H
