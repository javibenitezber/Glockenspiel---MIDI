#include <Servo.h>

Servo DO;
Servo RE;
Servo MI;
Servo FA;
Servo SOL;
Servo LA;
Servo SI;
Servo DO2;
const int REPOSO = 180;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  DO.write(REPOSO);  DO.attach(2);
  RE.write(REPOSO);  RE.attach(3);
  MI.write(REPOSO);  MI.attach(4);
  FA.write(REPOSO);  FA.attach(5);
  SOL.write(REPOSO); SOL.attach(6);
  LA.write(REPOSO);  LA.attach(7);
  SI.write(REPOSO);  SI.attach(8);
  DO2.write(REPOSO); DO2.attach(9);
}

void loop() {
  // // put your main code here, to run repeatedly:
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
  for(pos = 3; pos <=180; pos+=1){
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
  for(pos = 35; pos <=180; pos+=1){
    MI.write(pos);
    delay(5);
  }
}

void tocar_FA(){
  for(pos = 5; pos <=180; pos+=1){
    FA.write(pos);
    delay(5);
  }
}

void tocar_SOL(){
  for(pos = 1; pos <=180; pos+=1){
    SOL.write(pos);
    delay(5);
  }
}

void tocar_LA(){
  for(pos = 13; pos <=180; pos+=1){
    LA.write(pos);
    delay(5);
  }
}

void tocar_SI(){
  for(pos = 1; pos <=180; pos+=1){
    SI.write(pos);
    delay(5);
  }
}

void tocar_DO2(){
 for(pos = 25; pos <=180; pos+=1){
    DO2.write(pos);
    delay(5);
  }
}
