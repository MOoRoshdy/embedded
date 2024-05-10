int trager=13;
int echo=12;

float duration =0;
float distance =0;//

void setup() {
 pinMode(trager, OUTPUT);
 pinMode(echo, INPUT);

 Serial.begin(9600);

}

void loop() {
  digitalWrite(trager,LOW);
  delayMicroseconds(2);
  digitalWrite(trager, HIGH);
  delayMicroseconds(10);
  digitalWrite(trager, LOW);
//calculate duration 

duration=pulseIn(echo, HIGH);

distance=duration*0.034/2;

Serial.print("distance :");
Serial.println(distance);
delay(500);


}
