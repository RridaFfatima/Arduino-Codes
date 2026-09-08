int IN1=5;
int IN2=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(IN1,100);
digitalWrite(IN2,LOW);
delay(2000);

digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
delay(2000);

analogWrite(IN2,100);
digitalWrite(IN1,LOW);
analogWrite(IN2,100);

delay(2000);

}
