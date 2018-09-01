#include "giz_steering.h"

Servo steering;

GizSteering::GizSteering(){
  steering.attach(STEER_PIN);
}
//0=straight, more positive=more right, less positive = more left
void GizSteering::steer(int v){
  int i=STEER_MID+v;
      steering.write(i);
}


