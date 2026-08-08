#define LED_PIN 11

void setup() {
  pinMode(LED_PIN, OUTPUT);

  analogWrite(LED_PIN, 200); 
  delay(1000);
   analogWrite(LED_PIN, 20); 
}

void loop() {

}
