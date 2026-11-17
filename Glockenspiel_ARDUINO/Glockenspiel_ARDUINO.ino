#include <Servo.h>

Servo servo1;
Servo servo2;

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos = 40; pos <=180; pos+=1){
    servo1.write(pos);
    delay(3);
    }

    for(pos = 180; pos >=40; pos-=1){
    servo1.write(pos);
    delay(3);
    }

    for(pos = 40; pos <=160; pos+=1){
    servo2.write(pos);
    delay(3);
    
    }
    
    for(pos = 160S; pos >=40; pos-=1){
    servo2.write(pos);
    delay(3);
    }


}
  
  
