#include<Servo.h>
Servo myservo;
int buttonState=0;


void setup() {

  myservo.attach(9);
  pinMode(2,INPUT);

}

void loop() {
  buttonState=digitalRead(2);
  if(buttonState==0)
  {
    myservo.write(180);
    delay(2000);
  }
  else
  {
    myservo.write(0);
    delay(2000);
  }


}
