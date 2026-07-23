int sensorstate;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate=analogRead(A0);
Serial.print("state: ");
Serial.print(sensorstate);
Serial.println(" ");
delay(500);

}
