#include<simplecpp>

main_program{
  turtleSim();
  left(51.43); forward(200); wait(1);
  right(90); right(12.84); forward(200); wait(1);
  repeat(5){
    right(90); right(12.84); forward(200); wait(1);
  }
  wait(10);
}
