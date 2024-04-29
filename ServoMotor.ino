#include <Servo.h>
Servo s1;
int pos;
const int s1pin = A0; // Check later 

void setup(){
  s1.attach(s1pin);  // attaches the servo on pin 9 to the servo object

}

void loop() {
  
  


  for (pos = 180; pos >= 0; pos -= 15) { // goes from 180 degrees to 0 degrees
    s1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(150);                       // waits 15ms for the servo to reach the position
  }
  

}