// ---------- Motor Pins ----------
const int IN1 = 3;
const int IN2 = 5;
const int IN3 = 6;
const int IN4 = 9;

// ---------- IR Sensor Pins ----------
const int S1 = 7;
const int S2 = 11;
const int S3 = 10;
const int S4 = 12;
const int S5 = 8;

// ---------- PID Constants ----------
float Kp = 65;
float Ki = 0;
float Kd = 20;

int baseSpeed = 120;

float error = 0;
float previousError = 0;
float integral = 0;

int weights[5] = {-2, -1, 0, 1, 2};
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(S5, INPUT);
}

void loop() {

  int sensor[5];

  sensor[0] = digitalRead(S1);
  sensor[1] = digitalRead(S2);
  sensor[2] = digitalRead(S3);
  sensor[3] = digitalRead(S4);
  sensor[4] = digitalRead(S5);

  int sum = 0;
  int count = 0;

  // Active LOW: 0 = Black
  for (int i = 0; i < 5; i++) {
    if (sensor[i] == 0) {
      sum += weights[i];
      count++;
    }
  }

  if (count > 0)
    error = (float)sum / count;
  else
    error = previousError;

  integral += error;
  float derivative = error - previousError;

  float correction = Kp * error + Ki * integral + Kd * derivative;

  int leftSpeed = constrain(baseSpeed + correction, 0, 255);
int rightSpeed = constrain(baseSpeed - correction, 0, 255);
  // Left Motor (same direction as your working code)
  analogWrite(IN1, leftSpeed);
  digitalWrite(IN2, LOW);

  // Right Motor (same direction as your working code)
  analogWrite(IN3, rightSpeed);
  digitalWrite(IN4, LOW);

  previousError = error;
}