int buzzer=13;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while (true) {
for (int i=0;i<=100; ++i) {
digitalWrite (buzzer,HIGH);
delay(1);
digitalWrite(buzzer,LOW);
}
}
}
