#include <Servo.h>
#define numOfValsRec 5
#define digitsPerValueRec 1

Servo servoThumb;
Servo servoIndex;
Servo servoMiddle;
Servo servoRing;
Servo servoPinky;

int valsRec[numOfValsRec];
int stringLength = numOfValsRec * digitsPerValueRec + 1; //$00000
int counter = 0;
bool counterStart = false;
String receivedString;

void setup() {
  Serial.begin(9600);
  servoThumb.attach(3);
  Serial.begin(9600);
  servoIndex.attach(4);
  Serial.begin(9600);
  servoMiddle.attach(5);
  Serial.begin(9600);
  servoRing.attach(6);
  Serial.begin(9600);
  servoPinky.attach(7);
}

void receiveData() {
  while(Serial.available()) 
  {
    char c = Serial.read();

    if (c=='$') {
      counterStart = true;
    }
    if (counterStart) {
      if (counter < stringLength) {
        receivedString = String(receivedString+c);
        counter++;
      }
      if (counter >=stringLength) {
        for(int i=0; i<numOfValsRec; i++)
        {
          int num = (i*digitsPerValueRec)+1;
        valsRec[i] = receivedString.substring(num,num + digitsPerValueRec).toInt();
        }
        receivedString = "";
        counter = 0;
        counterStart = false;

      }
    }
    }

}



void loop() {
  receiveData();
  if (valsRec[0] == 1){servoThumb.write(180);}else{servoThumb.write(0);}
  if (valsRec[1] == 1){servoIndex.write(180);}else{servoIndex.write(0);}
  if (valsRec[2] == 1){servoMiddle.write(180);}else{servoMiddle.write(0);}
  if (valsRec[3] == 1){servoRing.write(180);}else{servoRing.write(0);}
  if (valsRec[4] == 1){servoPinky.write(180);}else{servoPinky.write(0);}
}
