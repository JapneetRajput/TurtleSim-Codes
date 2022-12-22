#include<simplecpp>

main_program{
  turtleSim();

  cout << "How many sides?";
  int nsides;
  cin >> nsides;
  right(40); forward(20.46); left(40);
  penUp(); right(90); right(90); forward(20.46); right(90); right(90);
  penDown();
  repeat(nsides){
    right(360.0/nsides);
    forward(1); wait(0.02);
  }
  right(90); right(50);
  forward(20.46); left(60); forward(100);
  wait(5);
}
