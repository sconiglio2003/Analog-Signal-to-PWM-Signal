Author: Samuel R. Coniglio
Date: 5.21.2025
IDE: Arduino, Nightly 
MCU: Arduino Uno R3 ripoff from Amazon

Introduction
  The code simply takes an analog input from a potentiometer (which has a range from 0-1023), and then calculates the appropriate PWM signal (1-255) to send from the pin labeled "LEDpin" . 
  It may seem simple, but it was written completely from scratch by myself only. Using a micocontroller to interract with real life is what I'm all about. Microcontrollers control systems
  with reflexes that humans could never have, and fine tune important things on engines so that they work better than purely mechanical systems. This simple setup shows analog to digital conversion, 
  something that could certainly be used in the context of real life machines to change how a microcontroller sends out a controlling signal for a complex system. 

1. Potentiometer Setup
  I consulted my book "Encyclopedia of Electronic Components Volume 1: Resistors, Capacitors, Inductors, Switches, Encoders, Relays, Transistors" by Charles Platt to see how to hook up
  my potentiometer correctly. After a few seconds, it became obvious and I connected the leftmost and rightmost pins to the negative and positive. The center pin connected to the arduino's 
  analog input. This is where the analog signal from the potentiometer enters the microcontroller.

2. LED Setup
  Next, I selected a digital pin that had PWM capability for connecting the LED to. To my knowlegdge, the ones of the right side of the board are all digital. I chose a pin which had a ~ printed on its side.
  That's critical for this to work. Only certain pins on the arduino can output PWM, or Pulse Width Modulation. It's the act of quickly turning a digital pin off and on - very precisely - to imitate an analog
  signal. It's very accurate and works well especially for light brightness, servo control, and brushless motor control.

3. Utilization
  Connect the micocontroller to the IDE and upload the code. Turn the potentiometer and the LED should change brightness!
