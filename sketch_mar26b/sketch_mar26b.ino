// Left Motor
#define IN1 7
#define IN2 8
#define ENA 5

// Right Motor
#define IN3 9
#define IN4 10   // assumed
#define ENB 6

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  // Move Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 150); // speed (0–255)
  analogWrite(ENB, 150);

  delay(3000);

  // Stop
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  delay(2000);

  // Move Backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 150);
  analogWrite(ENB, 150);

  delay(3000);

// Turn Left
digitalWrite(IN1, LOW);  // Left motor backward
digitalWrite(IN2, HIGH);
digitalWrite(IN3, HIGH); // Right motor forward
digitalWrite(IN4, LOW);
analogWrite(ENA, 150);
analogWrite(ENB, 150);
delay(1000);

// Turn Right
digitalWrite(IN1, HIGH); // Left motor forward
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);   // Right motor backward
digitalWrite(IN4, HIGH);
analogWrite(ENA, 150);
analogWrite(ENB, 150);
delay(1000);
}