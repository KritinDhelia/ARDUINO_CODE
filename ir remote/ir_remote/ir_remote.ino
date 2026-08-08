#include <IRremote.h>

const int recvpin = 8; // from left s(pin 8) gnd 5v for reciever blub
IRrecv irrecv(recvpin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}
