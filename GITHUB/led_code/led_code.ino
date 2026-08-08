int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int dp=9;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop()
{
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
   delay(500); // Wait for 500 millisecond(s)
   digitalWrite(b,HIGH);
  digitalWrite(c, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
   delay(500); // Wait for 500 millisecond(s)
   digitalWrite(b,LOW);
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  delay(500); // Wait for 500 millisecond(s)
  }
