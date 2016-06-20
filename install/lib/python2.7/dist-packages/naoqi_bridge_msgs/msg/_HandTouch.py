# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from naoqi_bridge_msgs/HandTouch.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class HandTouch(genpy.Message):
  _md5sum = "d8d5c81c96dbe6a9e8e5d80beb70299d"
  _type = "naoqi_bridge_msgs/HandTouch"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# A message for Nao and Pepper's hand touch interface (touched tactile sensors on the hands)

uint8 hand            # which hand (left or right)
uint8 state           # state of the hands (pressed or released)

uint8 RIGHT_BACK=0
uint8 RIGHT_LEFT=1
uint8 RIGHT_RIGHT=2
uint8 LEFT_BACK=3
uint8 LEFT_LEFT=4
uint8 LEFT_RIGHT=5

uint8 stateReleased=0
uint8 statePressed=1
"""
  # Pseudo-constants
  RIGHT_BACK = 0
  RIGHT_LEFT = 1
  RIGHT_RIGHT = 2
  LEFT_BACK = 3
  LEFT_LEFT = 4
  LEFT_RIGHT = 5
  stateReleased = 0
  statePressed = 1

  __slots__ = ['hand','state']
  _slot_types = ['uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       hand,state

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HandTouch, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.hand is None:
        self.hand = 0
      if self.state is None:
        self.state = 0
    else:
      self.hand = 0
      self.state = 0

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
      buff.write(_struct_2B.pack(_x.hand, _x.state))
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
      end += 2
      (_x.hand, _x.state,) = _struct_2B.unpack(str[start:end])
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
      buff.write(_struct_2B.pack(_x.hand, _x.state))
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
      end += 2
      (_x.hand, _x.state,) = _struct_2B.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2B = struct.Struct("<2B")
