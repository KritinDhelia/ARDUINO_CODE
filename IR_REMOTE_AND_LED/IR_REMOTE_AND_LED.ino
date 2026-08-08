#include <IRremote.h>
const int rcv=8;
IRrecv irrecv(rcv);
decode_results result;
int red=10;
int blue=9;
void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
irrecv.blink13(true);
pinMode(red, OUTPUT);
pinMode (blue, OUTPUT);
}

void loop() {
if (irrecv.decode(&result)) {
  Serial.println(result.value, DEC);
  irrecv.resume();
  if (result.value == 4294967295){
    digitalWrite (blue, HIGH);
    delay (1000);
    }
}
}
