int pin=4;
int buzzerpin=11;
int i=0;
int sensorstate;
void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
pinMode(buzzerpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorstate=digitalRead(pin);
  if(sensorstate==LOW  ){
    i++;
    Serial.println(i);
    while(!sensorstate){

digitalWrite(buzzerpin,HIGH);
  sensorstate=digitalRead(pin);

  }
  }
  else{
digitalWrite(buzzerpin,LOW);


  }
}