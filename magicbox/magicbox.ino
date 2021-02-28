#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int SwitchPin = 8;
int waittime = 1000;
int val;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
  servo5.attach(13);
}

void loop() {
  val = digitalRead(SwitchPin);
  
  if(val == LOW)
  {
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
    servo5.write(0);
    
    delay(waittime);
    
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo5.write(90);
    
    delay(waittime);
    
    servo1.write(180);
    servo2.write(180);
    servo3.write(180);
    servo4.write(180);
    servo5.write(180);
    
    delay(waittime);
  }
  
}
