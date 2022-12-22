#include<simplecpp>

main_program{
  turtleSim();
  repeat(4){
    repeat(4){
      penDown();
      repeat(4){
      forward(20); right(90); wait(0.2);
      }
    penUp();
    forward(24); wait(0.5);
    }
    right(90); forward(24); wait(0.2);
    right(90); forward(96); wait(0.2);
    right(90); right(90);
  }
}
