#include <IRremote.h>
int led = 9;
const int recvpin = 8; // from left s(pin 8) gnd 5v for reciever blub
IRrecv irrecv(recvpin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    switch(results.value){
      case 0xFF30CF:
        digitalWrite (led,HIGH);
        delay(2000);
        digitalWrite (led,LOW);
        break;
      default:
        digitalWrite (led,LOW);
    }
    irrecv.resume();
  }
  
}
