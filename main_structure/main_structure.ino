#include<Servo.h>
Servo s; 
void setup() 
{
  s.attach(6);
  Serial.begin(57600);
  for(int i=90;i<=180;i+=1)
    {
      s.write(i);
      delay(20);
    }
}

void loop() 
{
    for(int i=180;i>=0;i-=1)
    {
      s.write(i);
      delay(20);
    }
    for(int i=0;i<=180;i+=1)
    {
      s.write(i);
      delay(20);
    }
}
