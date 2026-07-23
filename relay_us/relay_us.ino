
int irpin=8;
int relaypin=9;
int ledpin=13;
int buzzerpin=2;
void setup() {
  // put your setup code here, to run once:
pinMode(irpin,INPUT);
pinMode(relaypin,OUTPUT);
pinMode(ledpin,OUTPUT);
pinMode(buzzerpin,OUTPUT);
digitalWrite(relaypin,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int irstatus=digitalRead(irpin);
    Serial.println(irstatus);

  if(irstatus==LOW){
    digitalWrite(relaypin,LOW);
       digitalWrite(ledpin,HIGH);
       digitalWrite(buzzerpin,HIGH);


  }
  else{
        digitalWrite(relaypin,HIGH);
          digitalWrite(ledpin,LOW);
       digitalWrite(buzzerpin,LOW);


  }
          delay(100);

}
