int trig = 9;
int echo = 10;
long t;
long distance;
int r = 11;
int y = 12;
int g = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  t= pulseIn(echo,HIGH);
  distance = (0.034/2)*t;
  delay(200);
  Serial.println(distance);
  if(distance<20)
  {
    digitalWrite(r, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
  }
  else if (distance<40)
  {
    digitalWrite(y, HIGH);
    digitalWrite(r, LOW);
    digitalWrite(g, LOW);
  }
  else if (distance<60)
  {
    digitalWrite(g, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(r, LOW);
  }
  else
  {
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
  }
}
