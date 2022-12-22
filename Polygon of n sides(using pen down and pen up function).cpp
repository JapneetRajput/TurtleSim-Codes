#include<simplecpp>

main_program{
  turtleSim();
  cout << "How many sides?";
  int nsides;
  cin >> nsides;
  repeat(nsides){
    penDown();
    forward(5);
    right(180.0/nsides);
    wait(0.05);
    penUp();
    forward(5);
    right(180.0/nsides);
    wait(0.05);
  }
  wait(10);
}
