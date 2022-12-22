#include<simplecpp>

main_program{
  turtleSim();
  cout << "Value of n";
  int n;
  cin >> n;
  cout << "Value of m";
  int m;
  cin >> m;
  cout << "Value of o";
  int o;
  cin >> o;
    repeat(n){
    left(360.0/n);
    forward(3);
    wait(0.01);
    }
    repeat(m){
    penUp();
    left(90.0/m);
    forward(3);
    wait(0.01);
    }
    penDown();
    repeat(n){
    right(360.0/n);
    forward(3);
    wait(0.01);
    }
    repeat(o){
    penUp();
    right(180/o);
    forward(3);
    wait(0.01);
    }
  wait(10);
}
