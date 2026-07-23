int trigpin=8;
int echopin=9;
int ledpin=13;
float duration, distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

duration=pulseIn(echopin,HIGH);
distance=(duration *0.034)/2;
Serial.println(distance);
delay(200);
if(distance<30){
  digitalWrite(ledpin,HIGH);
}
else{
    digitalWrite(ledpin,LOW);

}
}