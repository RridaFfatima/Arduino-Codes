int pin=4;
int sensorstate;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate=digitalRead(pin);
if(sensorstate==LOW){
  Serial.println("yes obstacle");
}
if(sensorstate==HIGH){
  Serial.println("no obstacle");
}
}
