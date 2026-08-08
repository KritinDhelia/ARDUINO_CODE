int trig = 10;
int echo = 9;
int light = 8;
int t;
long dist;
void setup() {
  // put your setup code here, to run once:
  pinMode(light, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  t = pulseIn(echo,HIGH);
  dist = 0.034 * t/2;
  Serial.println(dist);
  delay(300);
}
