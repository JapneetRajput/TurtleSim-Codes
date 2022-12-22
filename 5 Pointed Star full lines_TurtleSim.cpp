#include<simplecpp>

main_program{
  turtleSim();
  left(72); forward(200); wait(1);
  right(90); right(54); forward(200); wait(1);
  repeat(3){
    right(90); right(54); forward(200); wait(1);
  }
  wait(5);
}
