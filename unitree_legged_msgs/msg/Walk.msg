uint8 levelflag # 0x00-highlevel 0xff-lowlevel
uint8 mode # 0-default stand; 1-forced stand; 2-walk
float32 forwardspeed
float32 sidespeed
float32 rotatespeed
float32 footraiseheight
uint8[40] wirelessremote
uint8[40] appremote             # Old version Aliengo does not have
uint32 reserve  #?                # Old version Aliengo does not have
int32 crc #?
uint8 time
