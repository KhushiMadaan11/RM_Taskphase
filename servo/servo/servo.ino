// C++ code
//
#include <Servo.h>
Servo servo_13;
int angle=15; 

void setup()
{
  servo_13.attach(13);
}

void loop()
{
  servo_13.write(angle);
  delay(100); // Wait for 100 millisecond(s)
}
