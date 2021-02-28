#include <VarSpeedServo.h>

VarSpeedServo servo1;
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;
VarSpeedServo servo5;

int angle1 = 0;
int angle2 = 90;
int rollspeed = 20;
int SwitchPin = 8;
int waittime = 5000;
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
  
  
  servo1.write(angle1);
  servo2.write(angle1);
  servo3.write(angle1);
  servo4.write(angle1);
  servo5.write(angle1);


  
  if(val == LOW)
  {
    delay(5000);
    
    servo1.write(angle2, rollspeed, false);
    servo2.write(angle2, rollspeed, false);
    servo3.write(angle2, rollspeed, false);
    servo4.write(angle2, rollspeed, false);
    servo5.write(angle2, rollspeed, true);
    
    delay(waittime);
    
    servo1.write(angle1, rollspeed);
    servo2.write(angle1, rollspeed);
    servo3.write(angle1, rollspeed);
    servo4.write(angle1, rollspeed);
    servo5.write(angle1, rollspeed, true);
    
    delay(waittime);
  }
  
}
