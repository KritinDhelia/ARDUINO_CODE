int pot_value ;
int brightness;
int led = 10;
int pot = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  pot_value = analogRead(pot);
  Serial.println(pot_value);
  brightness = map(pot_value,0,1023,0,255);
  analogWrite (led,brightness);
  delay(100);
  
}
