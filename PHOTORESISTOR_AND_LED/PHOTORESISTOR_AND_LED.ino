int LDR=A0;
int LED=8;
int VALUE=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
VALUE=analogRead(LDR);
Serial.println(VALUE);
if (VALUE < 500)
{
  digitalWrite(LED, HIGH);
  }
else digitalWrite(LED, LOW);
}
