int value;
int mappedvalue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(A1);
mappedvalue=map(value,0,1023,100,200);
if(mappedvalue>=100 && mappedvalue<=130){
Serial.print("Mapped Value: ");
Serial.println(mappedvalue);
Serial.println("LOW");
}
else if (mappedvalue>=131 && mappedvalue<=170){

  Serial.println("MEDIUM");
}

else if(mappedvalue>=171 && mappedvalue<=200){

  Serial.println("HIGH");
}
delay(200);
}


