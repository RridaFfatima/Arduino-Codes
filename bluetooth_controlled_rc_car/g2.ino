char data; // Variable to store received data

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate

  // Set motor control pins as output
  pinMode(8, OUTPUT); 
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read(); // Read received data

    // Control motor movement based on received data
    switch (data) {
     case 'F':   // Forward
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(8, LOW);
  break;

case 'B':   // Backward
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  break;

case 'L':   // Left
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(8, LOW);
  break;

case 'R':   // Right
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  break;

case 'S':   // Stop
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  break;
  }
}}