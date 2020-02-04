#include<Servo.h>
Servo s; 
int x;
void setup() 
{
  s.attach(10);
  Serial.begin(9600);
  s.write(55);
}

void loop() 
{
    x=s.read();
    Serial.println(x);
    /*for(int i=25;i<=60;i+=1)
    {
      s.write(i);
      delay(20);
    }
    for(int i=60;i>=25;i-=1)
    {
      s.write(i);
      delay(20);
    }*/
}
