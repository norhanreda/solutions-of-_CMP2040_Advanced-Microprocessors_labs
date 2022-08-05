void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);

}
