
#include<Servo.h>
Servo s;
int x;
void setup() {
  s.attach(3);
  Serial.begin(9600);
}

void loop() 
{
  /*x=s.read();
  Serial.println(x);*/
  for(int i=70;i<=120;i+=1)
  {
    s.write(i);
    delay(15);
  }
  for(int i=120;i>=70;i-=1)
  {
    s.write(i);
    delay(15);
  }
}
