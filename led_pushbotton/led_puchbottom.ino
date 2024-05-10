int led =7;
int buttom=6;
int state=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(buttom,INPUT);

}

void loop() {
  state=digitalRead(buttom);

  if (state==HIGH) {
  digitalWrite(led,HIGH);
  }
  else {
  digitalWrite(led, LOW);
  }

}
