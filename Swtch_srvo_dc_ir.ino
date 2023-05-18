void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a =digitalRead(7);
  if(a==0)
  {
    digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitWrite(3,HIGH);
        digitWrite(4,LOW);

  }
  else if(a==1)
  {
    digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
    
    digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(10);

    digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(10);

    digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(10);

    digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(10);
  }

}
