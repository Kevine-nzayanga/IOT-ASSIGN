
#include <Servo.h>

int position = 0;

int i = 0;

Servo servo_2;

void setup()
{
  servo_2.attach(2, 500, 2500);
}

void loop()
{
  position;

  for (position = 1; position <= 31; position += 1) {
    servo_2.write(position);
    delay(25); 
  }
  for (position = 31; position <= 90; position += 1) {
    servo_2.write(position);
    delay(25); 
  }
}
