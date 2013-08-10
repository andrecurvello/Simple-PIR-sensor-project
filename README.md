Simple-PIR-sensor-project
=========================

Code for Stellaris lm3s6965


Author: Karolina
Year: 2013
Processor: lm3s6965

About project:
This simple project demonstrates how to work with PIR sensor.
For this example is used motion sensor with built on chip BISS0001.

How it works?
When Sensor sense motion onboard LED goes ON. Onboard LED is at PF0, sensor is at PA7.
If you want to replace ports and pins, you have to change it in: LEDFunctions.h for 
LED and PIRFunctios.h for PIR sensor. Also when using LED or PIR use definitions for PORTs 
and PINs defined LEDFunctions.h and PIRFunctios.h for better quality of your code.

All schematics and pictures are available at mine blog: http://simplearmprojects.blogspot.com

