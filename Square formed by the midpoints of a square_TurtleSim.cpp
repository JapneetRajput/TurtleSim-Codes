#include<simplecpp>

main_program{
  turtleSim();
  cout << "Enter the length of the side of the square";
  int a ;
  cin >> a ;
  wait(5);
  repeat(4){
    forward(a); right(90); wait(1);
  }
  forward(a/2); right(45); wait(1);
  repeat(4){
    forward(a/2*sqrt(2)); right(90); wait(1);
  }
  wait(10);
}
