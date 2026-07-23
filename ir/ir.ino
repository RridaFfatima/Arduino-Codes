int pin=4;
int buzzerpin=11;
int i=0;
bool prevstate=false;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
pinMode(buzzerpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pin)==LOW && !prevstate ){
    i++;
    Serial.println(i);
digitalWrite(buzzerpin,HIGH);
    delay(200);
digitalWrite(buzzerpin,LOW);
prevstate=true;
  }
  if(digitalRead(pin)==HIGH){
prevstate=false;

  }
}