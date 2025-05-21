#include <Arduino.h>
#include <HardwareSerial.h>
#include <string.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
}

int digitalVal = 0; 
int minDigital = 1; 
int maxDigital = 255; 

float analogVal = 1.00; 
float minAnalog = 1.00; 
float maxAnalog = 1023.00; 
int LEDpin = 3; 
void loop() {
  analogVal = analogRead(0); 
  // put your main code here, to run repeatedly:
  Serial.print("Analog: " + String(analogVal)); 

  // make a conversion
  digitalVal = int((analogVal * maxDigital) / maxAnalog); 
  Serial.print("     Digital: " + String(digitalVal)); 
  Serial.println(); 
  analogWrite(LEDpin,digitalVal); 
  // the distance between where the servo is and where the endpoint can be mapped from rate min to rate max. 
  // the servo receives a desired endpoint
  // the servo measures the distance between current position and endpoint
  // the servo uses math to determine the rate of turn. 
  // the servo is turned at the new rate. 
}
