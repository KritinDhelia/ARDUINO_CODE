int trig =10;
int echo =9;
int buzz = 8;
int t;
long distance;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  t = pulseIn(echo,HIGH);
  distance=(0.0234*t)/2;
  Serial.println(distance);
  if (distance > 7)
  {
    digitalWrite(buzz, HIGH);
    delay(200);
    digitalWrite(buzz,LOW);
    delay(200);
  }
  else
  {
    digitalWrite(buzz,LOW);
    delay(200);
  }
}
