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
  tocar_DO();
  tocar_RE();
  tocar_MI();
  tocar_DO();
  tocar_DO();
  tocar_RE();
  tocar_MI();
  tocar_DO();
  tocar_MI();
  tocar_FA();
  tocar_SOL();
  tocar_MI();
  tocar_FA();
  tocar_SOL();
  tocar_SOL();
  tocar_LA();
  tocar_SOL();
  tocar_FA();
  tocar_MI();
  tocar_DO();
  tocar_SOL();
  tocar_LA();
  tocar_SOL();
  tocar_FA();
  tocar_MI();
  tocar_DO();
  tocar_DO();
  tocar_RE();
  tocar_DO();
  tocar_DO();
  tocar_RE();
  tocar_DO();
  }
  
//FUNCIONES ACCIONADORAS DE NOTAS
void tocar_DO(){
  for(pos = 1; pos <=180; pos+=1){
    DO.write(pos);
    delay(5);
  }
}

void tocar_RE(){
  for(pos = 5; pos <=180; pos+=1){
    RE.write(pos);
    delay(5);
  }
}

void tocar_MI(){
  for(pos = 1; pos <=180; pos+=1){
    MI.write(pos);
    delay(5);
  }
}

void tocar_FA(){
  for(pos = 1; pos <=180; pos+=1){
    FA.write(pos);
    delay(5);
  }
}

void tocar_SOL(){
  for(pos = 1; pos <=180; pos+=1){
    SOL.write(pos);
    delay(6);
  }
}

void tocar_LA(){
  for(pos = 15; pos <=180; pos+=1){
    LA.write(pos);
    delay(5);
  }
}

void tocar_SI(){
  for(pos = 1; pos <=180; pos+=1){
    SI.write(pos);
    delay(6);
  }
}

void tocar_DO2(){
 for(pos = 1; pos <=180; pos+=1){
    DO2.write(pos);
    delay(5);
  }
}
