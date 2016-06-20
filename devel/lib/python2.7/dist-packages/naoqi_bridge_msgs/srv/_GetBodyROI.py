# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/GetBodyROIRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetBodyROIRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "naoqi_bridge_msgs/GetBodyROIRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """"""
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
      super(GetBodyROIRequest, self).__init__(*args, **kwds)

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
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/GetBodyROIResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import naoqi_bridge_msgs.msg

class GetBodyROIResponse(genpy.Message):
  _md5sum = "ecc2963facbb989a955948135b6e21fd"
  _type = "naoqi_bridge_msgs/GetBodyROIResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """BodyROI[] bodies


================================================================================
MSG: naoqi_bridge_msgs/BodyROI
float32 angle
float32 cx
float32 cy
float32 height
float32 width
float32 confidence
"""
  __slots__ = ['bodies']
  _slot_types = ['naoqi_bridge_msgs/BodyROI[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       bodies

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetBodyROIResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.bodies is None:
        self.bodies = []
    else:
      self.bodies = []

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
      length = len(self.bodies)
      buff.write(_struct_I.pack(length))
      for val1 in self.bodies:
        _x = val1
        buff.write(_struct_6f.pack(_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.bodies is None:
        self.bodies = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.bodies = []
      for i in range(0, length):
        val1 = naoqi_bridge_msgs.msg.BodyROI()
        _x = val1
        start = end
        end += 24
        (_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence,) = _struct_6f.unpack(str[start:end])
        self.bodies.append(val1)
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
      length = len(self.bodies)
      buff.write(_struct_I.pack(length))
      for val1 in self.bodies:
        _x = val1
        buff.write(_struct_6f.pack(_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.bodies is None:
        self.bodies = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.bodies = []
      for i in range(0, length):
        val1 = naoqi_bridge_msgs.msg.BodyROI()
        _x = val1
        start = end
        end += 24
        (_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence,) = _struct_6f.unpack(str[start:end])
        self.bodies.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6f = struct.Struct("<6f")
class GetBodyROI(object):
  _type          = 'naoqi_bridge_msgs/GetBodyROI'
  _md5sum = 'ecc2963facbb989a955948135b6e21fd'
  _request_class  = GetBodyROIRequest
  _response_class = GetBodyROIResponse
