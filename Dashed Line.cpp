#include<simplecpp>
main_program{
  turtleSim();
  repeat(10){
    penDown();
    forward(10); wait(1);
    penUp();
    forward(10); wait(1);
  }
  wait(10);
}
