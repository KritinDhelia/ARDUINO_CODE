void setup() {
  // initialize serial communication
  Serial.begin(9600);
  Serial.println("hello arduino");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("in the loop");
  delay(1000);
  Serial.println("KRITIN IS THE COOLEST");
  delay(1000);
  Serial.println("KRITIN IS THE GOAT");
  delay(1000);
}
