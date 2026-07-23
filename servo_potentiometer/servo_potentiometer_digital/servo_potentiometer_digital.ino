int mappedvalue;
int value;
#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(A0);
mappedvalue=map(value,0,1023,0,180);

myservo.write(mappedvalue);

}
