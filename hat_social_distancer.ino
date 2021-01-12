#include <HCSR04.h>



int THRESH = 100;
int rightTonePin = 8;
int leftTonePin = 4;
int rightTriggerPin = 13;
int rightEchoPin = 12;

int leftEchoPin = 7;
int leftTriggerPin = 2;


UltraSonicDistanceSensor rightSonic(rightTriggerPin, rightEchoPin);
UltraSonicDistanceSensor leftSonic(leftTriggerPin, leftEchoPin);






void setup() {
  Serial.begin(9600);
 // pinMode(IRPIN, INPUT);
  
}

void loop() {

  // grab a distance
  double rightDistance = rightSonic.measureDistanceCm();

  double leftDistance = leftSonic.measureDistanceCm();

  if (rightDistance < THRESH && rightDistance > 0) {
    tone(rightTonePin, 250, 250);
    delay(250);
  }

  if (leftDistance < THRESH && leftDistance > 0) {
    tone(leftTonePin, 250, 250);
    delay(250);

  }


  




  // delay 250 ms
  delay(250);


    
}
