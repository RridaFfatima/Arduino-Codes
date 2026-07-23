int pin=4;
int pinn=11;
int sensorstate;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
pinMode(pinn,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorstate=digitalRead(pin);
if(sensorstate==LOW){
digitalWrite(pinn,HIGH);
}
if(sensorstate==HIGH){
  digitalWrite(pinn,LOW);

}
}
