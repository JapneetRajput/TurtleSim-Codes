#include<simplecpp>

main_program{
  turtleSim();

  cout << "How many sides?";
  float nsides;
  cin >> nsides;
   right(40); forward(30);
  repeat(nsides){
    right(200.0/nsides);
    forward(1); wait(0.02);
  }
  right(40);
  forward(30); left(60); forward(100);
  wait(50);
}
