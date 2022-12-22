#include<simplecpp>

main_program{
  turtleSim();
  cout << "Value of n=";
  int n;
  cin >> n;
  cout << "Value of m=?";
  int m;
  cin >> m;
  repeat(6){
    repeat(n){
      forward(3);
      left(360.0/n);
      wait(0.005);
    }
    repeat(m){
      forward(3);
      right(60.0/m);
      wait(0.005);
    }
  }
  wait(10);
}
