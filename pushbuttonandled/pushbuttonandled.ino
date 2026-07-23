bool state=0;

void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}

void loop() {

  if (state(digitalRead(7)) != 0) {      // Button pressed
    digitalWrite(4, HIGH); // LED ON
  } else {
    digitalWrite(4, LOW);  // LED OFF
  }
}