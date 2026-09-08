const int IN1 = 5;
const int IN2 = 6;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  // Increase speed
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(IN1, speed);
    digitalWrite(IN2, LOW);
    delay(20);   // Smaller delay = faster acceleration
  }

  // Decrease speed
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(IN1, speed);
    digitalWrite(IN2, LOW);
    delay(20);
  }
}