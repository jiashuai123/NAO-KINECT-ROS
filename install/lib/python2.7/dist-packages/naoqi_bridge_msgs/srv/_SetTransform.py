# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/SetTransformRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class SetTransformRequest(genpy.Message):
  _md5sum = "67035ddf415a9bb64191f0e45b060e35"
  _type = "naoqi_bridge_msgs/SetTransformRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
geometry_msgs/Transform offset

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['offset']
  _slot_types = ['geometry_msgs/Transform']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       offset

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetTransformRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.offset is None:
        self.offset = geometry_msgs.msg.Transform()
    else:
      self.offset = geometry_msgs.msg.Transform()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_7d.pack(_x.offset.translation.x, _x.offset.translation.y, _x.offset.translation.z, _x.offset.rotation.x, _x.offset.rotation.y, _x.offset.rotation.z, _x.offset.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.offset is None:
        self.offset = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.offset.translation.x, _x.offset.translation.y, _x.offset.translation.z, _x.offset.rotation.x, _x.offset.rotation.y, _x.offset.rotation.z, _x.offset.rotation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_7d.pack(_x.offset.translation.x, _x.offset.translation.y, _x.offset.translation.z, _x.offset.rotation.x, _x.offset.rotation.y, _x.offset.rotation.z, _x.offset.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.offset is None:
        self.offset = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.offset.translation.x, _x.offset.translation.y, _x.offset.translation.z, _x.offset.rotation.x, _x.offset.rotation.y, _x.offset.rotation.z, _x.offset.rotation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7d = struct.Struct("<7d")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/SetTransformResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SetTransformResponse(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "naoqi_bridge_msgs/SetTransformResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SetTransformResponse, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
class SetTransform(object):
  _type          = 'naoqi_bridge_msgs/SetTransform'
  _md5sum = '67035ddf415a9bb64191f0e45b060e35'
  _request_class  = SetTransformRequest
  _response_class = SetTransformResponse