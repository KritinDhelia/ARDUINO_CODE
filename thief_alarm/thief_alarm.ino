int trig = 10;
int echo = 9;
long t;
long distance;
int caught = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  pinMode(caught,OUTPUT);
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
  if(distance<25
  )
  {
    digitalWrite(caught, HIGH);
    delay(500);
    digitalWrite(caught, LOW);
    delay(500);
    digitalWrite(caught, HIGH);
    delay(500);
    digitalWrite(caught, LOW);
    delay(500);
    digitalWrite(caught, HIGH);
    delay(500);
    digitalWrite(caught, LOW);
    delay(500);
    digitalWrite(caught, HIGH);
    delay(500);
    digitalWrite(caught, LOW);
    delay(500);
    digitalWrite(caught, HIGH);
    delay(500);
    digitalWrite(caught, LOW);
  }
  
}
