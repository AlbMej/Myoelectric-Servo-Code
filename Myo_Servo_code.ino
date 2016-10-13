#include <Servo.h> 
Servo myservo;
const int threshValue = 200; /*threshvalue depeneds on the strength of your electric signals, I.e. Lower value for stronger signals*/
void setup() 
{ 
  myservo.attach(9);
Servo myservo;
myservo.attach(10); /*need to modify code, only 1 servo moves*/
Servo myservo3;
myservo.attach(11);
Servo myservo4;
myservo.attach(6);
Servo myservo5;
myservo.attach(5);
}

void loop() 
{ 
  int value = analogRead(A0);

  if(value < threshValue)        
  { 
            myservo.writeMicroseconds(800);  
  }
  else 
  { 
            myservo.writeMicroseconds(2250);
  } 
  
  if(value < threshValue)        
  { 
            myservo4.writeMicroseconds(800);  
  }
  else 
  { 
            myservo4.writeMicroseconds(2250);
  } 
}
}
