int temperature=A5;
int state=0;
float voltage=0;
float temp_c=0; 
float temp_f=0;
void setup() {
  // put your setup code here, to run once:
pinMode(temperature, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
state=analogRead(temperature);
voltage=state*(5.0/1024.0);
temp_c=voltage*100;

Serial.print("temperature is ");
Serial.println(temp_c);


}
