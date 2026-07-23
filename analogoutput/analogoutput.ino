int LEDpin=3;
void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<=255; i++){
  analogWrite(LEDpin,i);
  delay(2);
}

for (int i=255; i>=0; i--){
  analogWrite(LEDpin,i);
  delay(2);
}

}
