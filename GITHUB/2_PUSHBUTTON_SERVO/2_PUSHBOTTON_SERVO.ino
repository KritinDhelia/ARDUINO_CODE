// C++ code
//
#include <Servo.h>

int POSITION = 0;

int i = 0;

int j = 0;

Servo servo_8;

Servo servo_9;

void setup()
{
  servo_8.attach(8, 500, 2500);

  servo_9.attach(9, 500, 2500);

}

void loop()
{
  POSITION = 0;
  for (POSITION = 1; POSITION <= 180; POSITION += 1) {
    servo_8.write(POSITION);
  }

  POSITION = 180;
  for (POSITION = 180; POSITION >= 1; POSITION -= 1) {
    servo_9.write(POSITION);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
