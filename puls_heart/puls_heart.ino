int soundPin=5;
unsigned long lastevint=0;
void setup() {
  Serial.begin(9600);
  pinMode(soundPin, INPUT);

}

void loop() {
  int data=digitalRead(soundPin);

  if (data== LOW) {
    if (millis()-lastevint>25) {
    Serial.println("clap detected");
    }
  
  }

}
