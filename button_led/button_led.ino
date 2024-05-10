int led=3;
int button=7;
int state=0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button, INPUT_PULLUP); 
}

void loop() {
  state=digitalRead(button);

  if (state==LOW) {
    digitalWrite(led,HIGH);
  
  }
  else {
  digitalWrite(led, LOW);
  }
  
}