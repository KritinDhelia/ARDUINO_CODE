// C++ code
//
int echoDistance = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(8, LOW);
  delay(0.2); // Wait for 0.2 millisecond(s)
  digitalWrite(8, HIGH);
  delay(1); // Wait for 1 millisecond(s)
  digitalWrite(8, LOW);
  echoDistance = 0.01723 * readUltrasonicDistance(8, 9);
  if (echoDistance < 10) {
    digitalWrite(7, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(7, LOW);
  }
  if (echoDistance < 20) {
    digitalWrite(6, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(6, LOW);
  }
  if (echoDistance < 30) {
    digitalWrite(5, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  } else {
    digitalWrite(5, LOW);
  }
}
