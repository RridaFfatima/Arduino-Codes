int relayPin = 7;
int buttonPin = 11;
bool relayState=LOW;
int buttonState;
int prevButtonState = HIGH;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  digitalWrite(relayPin, relayState);

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && prevButtonState == HIGH) {

    relayState = !relayState;          
    digitalWrite(relayPin, relayState);

    delay(50);                         
  }
  prevButtonState = buttonState;
}