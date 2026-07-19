// C++ code
//
#include <Servo.h>

int position = 0;

int i = 0;

Servo servo_9;

Servo servo_0;

void setup()
{
  servo_9.attach(9, 500, 2500);

  servo_0.attach(0, 500, 2500);

}

void loop()
{
  position = 0;
  for (position = 1; position <= 179; position += 1) {
    servo_9.write(position);
  }

  servo_0.write(0);
  delay(10); // Delay a little bit to improve simulation performance
} 
