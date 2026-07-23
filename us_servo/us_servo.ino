#include <Servo.h>
int trigpin=8;
int echopin=9;
int ledpin=7;
int buzzerpin=11;
int servopin=3;
float duration, distance;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(ledpin,OUTPUT);
pinMode(buzzerpin,OUTPUT);
myservo.attach(servopin);
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

if(distance<=15){
  
myservo.write(180);
Serial.print("angle: ");
Serial.print(180);
Serial.print(" ");



}
else if(distance >15 && distance <=30){
myservo.write(90);
Serial.print("angle: ");
Serial.print(90);
Serial.print(" ");
}


else {
myservo.write(0);
Serial.print("angle: ");
Serial.print(0);
Serial.print(" ");
}

}