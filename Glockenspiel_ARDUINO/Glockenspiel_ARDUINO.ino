#include <Servo.h>

Servo DO;
Servo RE;
Servo MI;
Servo FA;
Servo SOL;
Servo LA;
Servo SI;
Servo DO2;

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  DO.attach(0);
  RE.attach(1);
  MI.attach(2);
  FA.attach(3);
  SOL.attach(4);
  LA.attach(5);
  SI.attach(6);
  DO2.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
    for(pos = 1; pos <=180; pos+=1){
    DO.write(pos);
    delay(4);
    
  }

  for(pos = 1; pos <=180; pos+=1){
    RE.write(pos);
    delay(4);
    
  }

  for(pos = 1; pos <=180; pos+=1){
    MI.write(pos);
    delay(4);
    
  }

  for(pos = 1; pos <=180; pos+=1){
    FA.write(pos);
    delay(4);
    
  }

  for(pos = 6; pos <=180; pos+=1){
    SOL.write(pos);
    delay(5);
    
  }

  for(pos = 15; pos <=180; pos+=1){
    LA.write(pos);
    delay(5);
    
  }

  for(pos = 3; pos <=180; pos+=1){
    SI.write(pos);
    delay(6);
    
  }

  for(pos = 1; pos <=180; pos+=1){
    DO2.write(pos);
    delay(4);
    
  }
  
    
}
