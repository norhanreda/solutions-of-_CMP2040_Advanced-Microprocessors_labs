#include <Servo.h>
Servo Servo1;


void setup() {
  // put your setup code here, to run once:
  Servo1.attach(9);
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
 Serial.begin(9600);
}

void loop() 
{

 // Servo1.write(120);
   //delay(500);
   //Servo1.write(50);
   //delay(500);
  // put your main code here, to run repeatedly:
  //0
  if(digitalRead(0)==LOW&&digitalRead(1)==LOW&&digitalRead(2)==LOW&&digitalRead(3)==LOW)
  {
      Serial.println("zero");
    Servo1.write(0);
   delay(100);
  }
  //1
  else if(digitalRead(0)==HIGH&&digitalRead(1)==LOW&&digitalRead(2)==LOW&&digitalRead(3)==LOW)
  {
    Serial.println("one");
     Servo1.write(20);
   delay(100);
  }
  //2
   else if(digitalRead(0)==LOW&&digitalRead(1)==HIGH&&digitalRead(2)==LOW&&digitalRead(3)==LOW)
  {
    Serial.println("two");
     Servo1.write(40);
   delay(100);
  }
  //3
   else if(digitalRead(0)==HIGH&&digitalRead(1)==HIGH&&digitalRead(2)==LOW&&digitalRead(3)==LOW)
  {
    Serial.println("three");
     Servo1.write(60);
   delay(100);
  }
  //4
   else if(digitalRead(0)==LOW&&digitalRead(1)==LOW&&digitalRead(2)==HIGH&&digitalRead(3)==LOW)
  {
    Serial.println("four");
     Servo1.write(80);
   delay(100);
  }
  //5
   else if(digitalRead(0)==HIGH&&digitalRead(1)==LOW&&digitalRead(2)==HIGH&&digitalRead(3)==LOW)
  {
    Serial.println("five");
     Servo1.write(100);
   delay(100);
  }
  //6
   else if(digitalRead(0)==LOW&&digitalRead(1)==HIGH&&digitalRead(2)==HIGH&&digitalRead(3)==LOW)
  {
    Serial.println("sex");
     Servo1.write(120);
   delay(100);
  }
  //7
   else if(digitalRead(0)==HIGH&&digitalRead(1)==HIGH&&digitalRead(2)==HIGH&&digitalRead(3)==LOW)
  {
    Serial.println("seven");
     Servo1.write(140);
   delay(100);
  }
  //8
   else if(digitalRead(0)==LOW&&digitalRead(1)==LOW&&digitalRead(2)==LOW&&digitalRead(3)==HIGH)
  {
    Serial.println("eight");
     Servo1.write(160);
   delay(100);
  }
  //9
   else if(digitalRead(0)==HIGH&&digitalRead(1)==LOW&&digitalRead(2)==LOW&&digitalRead(3)==HIGH)
  {
    Serial.println("nine");
     Servo1.write(180);
   delay(100);
  }
  else
  {
     Servo1.write(180);
     Serial.println("invalid input..........");
   delay(100);
  }
}
