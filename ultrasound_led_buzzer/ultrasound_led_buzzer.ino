int trigpin=8;
int echopin=9;
int ledpin=7;
int buzzerpin=11;
float duration, distance;
void setup() {
  // put your setup code here, to run once:
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(ledpin,OUTPUT);
pinMode(buzzerpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);

duration=pulseIn(echopin,HIGH);
distance=(duration *0.034)/2;
Serial.print("distance: ");
Serial.print(distance);
Serial.println(" ");
delay(200);
if(distance<30){
  digitalWrite(ledpin,HIGH);
}
else{
    digitalWrite(ledpin,LOW);

}
if(distance<10){
  digitalWrite(buzzerpin,HIGH);
}
else{
  digitalWrite(buzzerpin,LOW);

}
}