int mappedvalue;
int value;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(A0);
mappedvalue=map(value,0,1023,0,255);
analogWrite(3,mappedvalue);

}
