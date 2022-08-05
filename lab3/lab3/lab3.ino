#include<Stepper.h>
const int stepPerRevolution =200;
int myspeed;
int Direction=1;
Stepper mystepper(stepPerRevolution,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
  mystepper.setSpeed(60);
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  
 // Serial.println("please enter the motor speed ");
  if(Serial.available())
  {
    //control speed
      myspeed=Serial.parseInt();
      mystepper.setSpeed(myspeed);
        Serial.print("the speed is : ");
        Serial.println(myspeed);

     
 

        
  }

      //control direction 
      if(digitalRead(13)==1)
       Direction=1;
       else
        Direction=0;



    // control steps
  int potvalue=analogRead(A0);
  int stepsToMove=map(potvalue,0,1023,0,stepPerRevolution);

  Serial.print("stepsToMove: ");
    Serial.println(stepsToMove);
  

  //movement
  
    if(Direction==1)
     mystepper.step(-stepsToMove);

     else if(Direction==0)
     mystepper.step(stepsToMove);

      delay(500);
   
  


    

 

  
  
}
