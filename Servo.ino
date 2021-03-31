#include <Servo.h>

Servo motor;


void setup()
{
  motor.attach(6);
}

void loop()
{ 

  for(int i=0; i<=180; i+=30){
  motor.write(i);
  delay(1000);
    
  }
    
      
  for(int i=180; i>0; i-=15){
  motor.write(i);
  delay(1000);
    
  }
  
}
