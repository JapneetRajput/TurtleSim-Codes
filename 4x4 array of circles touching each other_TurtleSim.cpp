#include<simplecpp>

main_program{
  turtleSim();
  cout << "Value of n";
  int n;
  cin >> n;
  repeat(4){
  repeat(4){
  penDown();
    repeat(n){
      left(360.0/n);
      forward(1);
      wait(0.01);
    }
  penUp();
  forward(31.91);
  }
  penUp();
  right(90); forward(31.91);
  right(90); forward(127.32);
  right(90); right(90);
  }
  wait(10);
}

