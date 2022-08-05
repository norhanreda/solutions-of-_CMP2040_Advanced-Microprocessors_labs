void setup() {
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
double va=analogRead(A0);
//double vout=map(va,0,1023,0,255);
//double R=10000.0/((vout)-1);
double R=10000.0/((1023/va)-1);
double Rt=(1.009249522e-03)+(2.378405444e-04)*log(R)+(2.019202697e-07)*log(R)*log(R)*log(R);
double T=(1.0/Rt)-273.15;

if(T>=0 && T<=50)
{
  //analogWrite(3,);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
 // delay(1000);
}

else if(T>=51 && T<=100)
{
   analogWrite(3,128);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
 //delay(1000);
}
else if(T>100 )
{
  analogWrite(3,255);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
 //delay(1000);
}
Serial.println(T);
}
