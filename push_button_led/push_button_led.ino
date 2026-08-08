#define BUTTON_PIN 2 ;
int pushbutton = 2
void setup() {
  Serial.begin (9600);
  pinMode(pushbutton, INPUT);
}

void loop() {
  Serial.println(digitalRead pushbutton);
  delay(100);
}
