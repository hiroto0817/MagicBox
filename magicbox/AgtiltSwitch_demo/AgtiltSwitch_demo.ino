int led = 13;
int Agtilt = 3;
int val;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(Agtilt, INPUT);
  
}

void loop() {
  val = digitalRead(Agtilt);
  if(val == HIGH)
  {
    digitalRead(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }

}
