#include<simplecpp>
main_program{
  turtleSim();
  repeat(6){
    left(60); forward(20); wait(0.2);
    right(90); right(30); forward(20); wait(0.2);
  }
  wait(20);
}

