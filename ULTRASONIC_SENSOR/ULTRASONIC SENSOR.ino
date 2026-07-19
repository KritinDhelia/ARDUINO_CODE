int trig=8;
int echo=9;
int buzz=7;
long echotime;
int distance;
void setup() {
  // put your setup code here, to run once:
pinMode (echo, INPUT);
pinMode (trig, OUTPUT);
pinMode (buzz, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, LOW);//check trig is off
delayMicroseconds(2);// Wait for 2 Microseconds 
digitalWrite(trig, HIGH);//turn trig on
delayMicroseconds(10);// wait for 10 Microseconds
digitalWrite(trig, LOW);

echotime=pulseIn(echo, HIGH);
//take input from echo pin
distance=(0.034*echotime/2);
Serial.println(distance);
}
