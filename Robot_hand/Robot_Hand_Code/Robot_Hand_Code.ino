#include <Servo.h>
Servo myservo;  
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

int potpin = 1;  
int potpin1 = 2;
int potpin2 = 3;
int potpin3 = 4;
int potpin4 = 5;

int val;   
int val1;
int val2;
int val3;
int val4;

void setup()
{
  myservo.attach(5);  
  myservo1.attach(6);
  myservo2.attach(7);
  myservo3.attach(8);
  myservo4.attach(4);
}

void loop() 
{ 
  val = analogRead(potpin);     
  val1 = analogRead(potpin1);
  val2 = analogRead(potpin2);
  val3 = analogRead(potpin3);
  val4 = analogRead(potpin4);
  
  val = map(val, 0, 900, 0, 180);     
  val1 = map(val1, 0, 1023, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  val3 = map(val3, 0, 1023, 0, 180);
  val4 = map(val4, 0, 1023, 0, 180);
  
  myservo.write(val);               
  myservo1.write(val1);
  myservo2.write(val2);
  myservo3.write(val3);
  myservo4.write(val4);
  
  delay(15);                          
} 

