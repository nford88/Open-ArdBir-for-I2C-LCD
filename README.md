# Open-ArdBir-for-I2C-LCD
=========================
A fork of Open ArdBir that integrates support for the use of I2C LCD

This build is a slightly modified version of the excellent Open ArdBir Single Vessel Brewing Software. If you would like to support the team, please head over to their GitHub https://github.com/ArdBir/Open-ArdBir

This build has added support for I2C LCD Display with Open ArdBir. It assumes you have set up your I2C device correctly on your Arduinio, installed the latest I2C library from "fmalpartida" and have identified the correct address for your device. 
If you have not done any of these then I advice you to read through this guide to get it up and working - http://forum.arduino.cc/index.php?topic=128635.0

By default, this build has set I2C address to 0x3F.

I have disabled some of the debugging features in Open ArdBir as the library for I2C is slightly bigger than the default LCD library to enable it to be compiled on a Arduino Uno R3.


###To install
===========

Download and open Open-ArdBir.ino in your Arduinio IDE and upload. Simple!

###To change address
=================

If your address is different to the default 0x3F, simply search through the whole sketches and replace 0x3F with your I2C address.

Enjoy.

 
