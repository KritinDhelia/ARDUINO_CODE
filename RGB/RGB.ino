int RED = 9;
int GREEN = 10;
int BLUE = 11;
int R,G,B ;
void setup() {
  // put your setup code here, to run once:
pinMode (RED, OUTPUT);
pinMode (GREEN, OUTPUT);
pinMode (BLUE, OUTPUT);
}

void loop() 
{
  analogWrite(RED,255);
  analogWrite(GREEN, 0);
  analogWrite(BLUE,0);
delay(1000);
  analogWrite(RED, 200);
  analogWrite(GREEN, 100);
  analogWrite(BLUE, 200);
delay(1000);
analogWrite(RED, 50);
  analogWrite(GREEN, 50);
  analogWrite(BLUE, 200);
delay(1000);
}
