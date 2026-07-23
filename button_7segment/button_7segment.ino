int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int buttonpin=11;
int buttonstate;
int count=0;
int prevstate=HIGH;
void zero(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
//delay(1000);
}

void one(){
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
//delay(1000);
}

void two(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
//delay(1000);
}

void three(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
//delay(1000);  

}

void four(){
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//delay(1000);
}

void five(){
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//delay(1000);
}

void six(){
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//delay(1000);
}

void seven(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
//delay(1000);
}

void eight(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//delay(1000);

}

void nine(){
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
//delay(1000);

}
void setup() {
  // put your setup code here, to run once:

  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(buttonpin,INPUT_PULLUP);
}


void loop() {
  // put your main code here, to run repeatedly:
buttonstate=digitalRead(buttonpin);
if(buttonstate==LOW && prevstate==HIGH){
count++;

if(count>10){
  count=1;
}
  delay(200);

}
prevstate=buttonstate;


if(count==1){
zero();
}
else if(count==2){
one();
}
else if(count==3){
two();
}
else if(count==4){
three();
}
else if(count==5){
four();
}
else if(count==6){
five();
}
else if(count==7){
six();
}
else if(count==8){
seven();
}
else if(count==9){
eight();
}else if(count==10){
nine();
}
}
