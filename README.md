# Digispark-ATtiny85
The ATtiny85 is a microcontroller in a similar vein to the Arduino, but with much less IO pins, smaller memory and a smaller form factor

![image](https://user-images.githubusercontent.com/83519387/141671925-7821b8c8-eb35-42a3-b0bf-92c9fe209867.png)

# What can I do with it?
 The short answer is, if you can do it with an Arduino, then it is highly likely that it can be done with the ATtiny85. From simple LEDs flashing, to WS2812B multicolour LED strings, to elaborate sensor projects, the ATtiny85 can do it, and with a cloned board retailing for around $2, there is no excuse to try one out.
# How to use
**1. Pair with the Arduino IDE**
  - Install the Arduino IDE
  - Navigate to the Arduino IDE ATtiny microcontroller support GitHub page
  - Follow the instructions to add this new feature 
  - Once properly installed, navigate to Tools > Board on the Arduino IDEs, and you'll see a pair of selections listed under ATtiny Microcontrollers.
 
 **2. Program the ATtiny85 with Arduino**
With the drivers sorted out, follow these steps:

- Go into your Arduino IDE under Tools > Board
- Select the option under that says ATtiny25/45/85
- Under Tools, select Processor: ATtiny85 and the Clock: Internal 1 MHz. You may note that this is a slightly different procedure than you normally go through when working with Arduino boards. The 1 MHz speed may change later, but this speed is a good starting point for experimentation
- Change the Programmer setting to USBtinyISP
- When you're ready to upload, plug the ATtiny85 into the dedicated socket
- Hit the arrow key to start the process (no port selection needed)

Most likely, you'll need to install the correct driver, especially if you're using Windows. Installing the proper driver "libusb-win32" is the final step

# Simple project
This Script is trolling your friends with any YT video you want and a fake Windows update. 
This is available for both, Windows and MacOS. Just plug it in!
