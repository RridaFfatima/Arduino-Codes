int value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 value=analogRead(A0);
if(value>500){
  Serial.print("Analog reading: ");
  Serial.print(value);
  Serial.print(" - Day");
  Serial.println(" ");
}
if(value<=500){
  Serial.print("Analog reading: ");
  Serial.print(value);
  Serial.print(" - Night");
  Serial.println(" ");
}
}
