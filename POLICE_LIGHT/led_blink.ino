void setup() {
  // put your setup code here, to run once:
  //Set led pin to output
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // mak led blink
   digitalWrite(11,HIGH);
   delay(250);
   digitalWrite(11,LOW);
   digitalWrite(13,HIGH);
   delay(250);
   digitalWrite(13,LOW);
   digitalWrite(11,HIGH);
   delay(250);
   digitalWrite(11,LOW);
   digitalWrite(13,HIGH);
   delay(250);
   digitalWrite(13,LOW);
   
   digitalWrite(11,HIGH);
   delay(250);
   digitalWrite(11,LOW);
   delay(250);
   digitalWrite(11,HIGH);
   delay(250);
   digitalWrite(11,LOW);

   digitalWrite(13,HIGH);
   delay(250);
   digitalWrite(13,LOW);
   delay(250);
   digitalWrite(13,HIGH);
   delay(250);
   digitalWrite(13,LOW);
   
}
