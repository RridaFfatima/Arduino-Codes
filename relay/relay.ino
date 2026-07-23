int relaypin=7;
int buttonpin=11;
int buttonstate;
//int prevstate=HIGH;
int relaystate=LOW;
void setup() {
  // put your setup code here, to run once:
pinMode(relaypin,OUTPUT);
pinMode(buttonpin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  relaystate=digitalRead(relaypin);
buttonstate=digitalRead(buttonpin);
if(buttonstate==LOW ){
  relaystate=!relaystate;
  digitalWrite(relaypin,relaystate);
  //prevstate=buttonstate;
  delay(50);
}
}