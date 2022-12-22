#include<simplecpp>

main_program{
  turtleSim();

  cout << "How many sides?";
  float nsides;
  cin >> nsides;
   right(40); forward(24.38);
  repeat(nsides){
    right(160.0/nsides);
    forward(1); wait(0.02);
  }
  right(40);
  forward(24.38); left(60); forward(100);
  wait(50);
}
