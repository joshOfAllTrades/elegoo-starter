//www.elegoo.com
//2018.12.19
#include <Servo.h>
Servo myservo;

void setup(){
  myservo.attach(9);
  myservo.write(90);// move servos to center position -> 90°
} 
void loop(){
  myservo.write(90);// move servos to center position -> 90°
  delay(500);
  myservo.write(30);// move servos to center position -> 60°
  delay(500);
  myservo.write(90);// move servos to center position -> 90°
  delay(500);
  myservo.write(150);// move servos to center position -> 120°
  delay(500);
}
