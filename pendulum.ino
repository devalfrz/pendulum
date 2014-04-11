/* Pendulum
 by BEHUNS <http://behuns.com> 
 This example code is in the public domain.
 
 This is a simple sketch made to create a simple
 pendulum using a servo. If you hit the natural
 frequency of your pendulum it wll swing.

 modified 11 Apr 2014
 by Alfredo Rius
 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
           
      /*
       *
       *  REPLACE THE XXXXXX in PERIOD
       *
       */
       
#define PERIOD XXXXXX  // This is the pendulum natural frequency period
                       //   in miliseconds.
#define SERVO_MAX 20   // This is the servo maximum swing
                       //   this value is between 0 and 90 degrees


Servo myservo;  // create servo object to control the servo 
 
int s_max = 90 + SERVO_MAX; // The maximum servo value
int s_min = 90 - SERVO_MAX; // The minimum servo value
int half_period = PERIOD/2; // The period has to be devided by two
                            //   this value should be calculated only once

void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{                   
  myservo.write(s_max); // tell servo to go to its max position
  delay(half_period);   // delay for half the period  
  myservo.write(s_min); // tell servo to go to its min position
  delay(half_period);   // delay the other half to complete the period
} 
