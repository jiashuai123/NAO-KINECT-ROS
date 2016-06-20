# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/FaceROI.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class FaceROI(genpy.Message):
  _md5sum = "a9f6bf2f53b2585ecc0ff57bd4a21df4"
  _type = "naoqi_bridge_msgs/FaceROI"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 angle
float32 cx
float32 cy
float32 height
float32 width
float32 confidence
"""
  __slots__ = ['angle','cx','cy','height','width','confidence']
  _slot_types = ['float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       angle,cx,cy,height,width,confidence

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FaceROI, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.angle is None:
        self.angle = 0.
      if self.cx is None:
        self.cx = 0.
      if self.cy is None:
        self.cy = 0.
      if self.height is None:
        self.height = 0.
      if self.width is None:
        self.width = 0.
      if self.confidence is None:
        self.confidence = 0.
    else:
      self.angle = 0.
      self.cx = 0.
      self.cy = 0.
      self.height = 0.
      self.width = 0.
      self.confidence = 0.

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
      buff.write(_struct_6f.pack(_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence,) = _struct_6f.unpack(str[start:end])
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
      end = 0
      _x = self
      start = end
      end += 24
      (_x.angle, _x.cx, _x.cy, _x.height, _x.width, _x.confidence,) = _struct_6f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_6f = struct.Struct("<6f")
