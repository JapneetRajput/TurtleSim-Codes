#include<simplecpp>

main_program{
    int a;
    turtleSim();
    cout << "Enter the no. of times you want to print a dash: ";
    cin >> a;
    repeat(a)
    {
        forward(10); wait(1);
        penUp();
        forward(10); wait(1);
        penDown();
    }
}
