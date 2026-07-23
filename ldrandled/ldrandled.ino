int mappedvalue;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(A0);
mappedvalue=map(value,0,1023,0,255);
  analogWrite(9,value);
  Serial.println(value);
  delay(100);


}

