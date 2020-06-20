
#include<Servo.h>
Servo servo1;
Servo servo2;
int servopos=0;

void setup()
{
  servo1.attach(2);
  servo2.attach(9);
}

void loop()
{
  for(servopos>=0;servopos<=180;servopos++){
    servo1.write(servopos);
    servo2.write(servopos);
    delay(10);
  }
  
  for(servopos<=180;servopos>=0;servopos--){
    servo1.write(servopos);
    servo2.write(servopos);
    delay(10);
  }
}
    