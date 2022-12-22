#include<simplecpp>

main_program{
  turtleSim();
  left(9);
  repeat(5){
    left(54); forward(20); wait(0.2);
    right(90); right(36); forward(20); wait(0.2);
  }
  left(110); forward(100);
  wait(10);
}
