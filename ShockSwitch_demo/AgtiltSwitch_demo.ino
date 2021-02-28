int led = 13;
int SwitchPin = 10;
int val;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(SwitchPin, INPUT);
  
}

void loop() {
  val = digitalRead(SwitchPin);
  
  if(val == HIGH)
  {
    digitalWrite(led, LOW);
  }
  else if(val == LOW)
  {
    digitalWrite(led, HIGH);
    delay(10000);
  }

}
