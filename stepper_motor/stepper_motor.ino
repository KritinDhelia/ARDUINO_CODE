//include arduino stepper library
#include <Stepper.h>
//define steps par rotation
const int stpr = 2038;
//create stepper class.enter sequence IN1 IN2 IN3 IN4
Stepper S = Stepper(stpr,6,9,10,11);
void setup() {

}

void loop() {
//rotate cw fast
S.setSpeed(700);
S.step(stpr);
delay (1000);
//rotate ccw slow
S.setSpeed(200);
S.step(-stpr);
delay (1000);
}
