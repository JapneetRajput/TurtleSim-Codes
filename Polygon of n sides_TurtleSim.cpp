#include<simplecpp>

main_program{
  turtleSim();
  cout << "How many sides?";
  float nsides;
  cin >> nsides;
  repeat(nsides){
    forward(80);
    left(200.0/nsides);
    wait(0.5);
  }
  wait(10);
}
