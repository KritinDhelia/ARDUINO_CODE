// C++ code
//
int echoDistance = 10;

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
    digitalWrite(8, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(8, LOW);
    delay(500); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(8, LOW);
  }
}
