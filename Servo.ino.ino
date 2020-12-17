
#include <Servo.h>

//define servo
Servo servo_x;

// define joystick pins
int joystick_x = A0;

//read values from the analog pin
int joystick_xvalue = 0;

void setup() {
  pinMode(joystick_x, INPUT);
  servo_x.attach(3); //attach servo to pin 3 (one of 6 PWM pins)
}

void loop() {
  // put your main code here, to run repeatedly:
  joystick_xvalue = 0;
  
  //read values from joystick_x
  joystick_xvalue = analogRead(joystick_x);// taking input from joystick
  joystick_xvalue = map (joystick_xvalue, 0, 1023, 0, 180); // mapping joystick so that we can use it based on moving
  servo_x.write(joystick_xvalue); //write position of servo depending on joystick_xvalue
  delay(15);
}
