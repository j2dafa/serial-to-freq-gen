A slight modification on the original project by Martyn Davies to use Serial1 instead of the software library. This can be used with an Arduino Mega 2560. Make sure to wire PIN 19 (RX) to TX on the device and PIN 18 (TX) to RX on the board. The ground on the module should be wired to the Arudinos ground.

--------

Modified version of the Arduino Software Serial sample (https://www.arduino.cc/en/Tutorial/SoftwareSerialExample)
for certain types of frequency generator that have serial control with a preculiar flavour:

- sent commands must have a continuous block of characters, but no terminating LF or CR
- received responses have LF termination

You can see the videos here:
Part1: https://youtu.be/MkO1HJ91cQs
Part2: https://youtu.be/SLVd_VzNrac
Part3: https://youtu.be/1gkhW2-eBPA
