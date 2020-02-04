#include<Servo.h>
Servo sL;
Servo sR;
Servo sM;
Servo sC;
void right_fwd();
void right_rvrs();
void left_fwd();
void left_rvrs();
void main_L();
void main_R();
void claw_op();
void claw_cl();

void setup() {
  sL.attach(3);
  sR.attach(6);
  sM.attach(9);
  sC.attach(10);
  Serial.begin(9600);
  for(int i=90;i>=30;i--)
  {
    sR.write(i);
    delay(15);
  }
  for(int i=90;i<=180;i++)
  {
    sM.write(i);
    delay(15);
  }
  
}

void loop() 
{
  sL.write(90);
  main_L();
  claw_op();
  right_fwd();
  claw_cl();
  right_rvrs();
  main_R();
  right_fwd();
  claw_op();
  right_rvrs();
  claw_cl();
}
void right_fwd()
{
  for(int i=30;i<=100;i+=1)
  {
    sR.write(i);
    sL.write(90);
    delay(15);
  } 
}
void right_rvrs()
{
  for(int i=100;i>=30;i-=1)
  {
    sR.write(i);
    sL.write(90);
    delay(15);
  }
}
void left_fwd()
{
   for(int i=70;i<=120;i+=1)
  {
    sL.write(i);
    delay(15);
  }
}
void left_rvrs()
{
   for(int i=120;i>=70;i-=1)
  {
    sL.write(i);
    delay(15);
  }
}
void main_L()
{
      for(int i=180;i>=0;i-=1)
    {
      sM.write(i);
      delay(10);
    }
    
}
void main_R()
{
  for(int i=0;i<=180;i+=1)
    {
      sM.write(i);
      delay(7);
    }
}
void claw_cl()
{
  for(int i=25;i<=65;i+=1)
    {
      sC.write(i);
      delay(20);
    }
}
void claw_op()
{
      for(int i=65;i>=25;i-=1)
    {
      sC.write(i);
      delay(20);
    }
}
