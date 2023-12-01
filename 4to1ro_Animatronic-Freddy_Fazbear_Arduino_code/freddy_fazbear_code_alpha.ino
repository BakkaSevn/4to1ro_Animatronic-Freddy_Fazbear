#include <Servo.h>
Servo leftEye;
Servo rightEye;
Servo left;
Servo right;
#define red 11
#define green 10
#define blue 9
int num;
int num_2;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  leftEye.attach(12);
  rightEye.attach(13);
  left.attach(2);
  right.attach(4);
  Serial.begin(9600);
};

void loop()
{
  for(int i = 0; i <= 10; i++){
    num = random(0,90);
    jawFred(num, num);
    delay(2000);
  for(int x = 0; i <= 10; x++){
    num_2 = random(0,90);
    eyesFred(num_2, num_2);
    delay(2000);
  }// Fin sec_for
  }// fin for
  
  delay(50);
  eyesFred(90, 90);
};//Fin loop

void eyesFred(int rightAngle , int leftAngle)
{
  rightEye.write(rightAngle);
  leftEye.write(leftAngle);
};//Fin Void eyesFred

void jawFred(int rightAngle , int leftAngle)
{
  left.write(leftAngle);
  right.write(rightAngle);
};//Fin void earFred