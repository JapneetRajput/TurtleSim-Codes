#include<simplecpp>

main_program{
    turtleSim();
    int L;
    float M, N;
    cout << "Enter the length of the side of the square: ";
    cin >> L;
    repeat(4)
    {
        forward(L); right(90); wait(1);
    }
    forward(L/2);
    N= L*L/2;
    M=sqrt(N);
    right(45); wait(1);
    repeat(4)
    {
        forward(M); right(90); wait(1);
    }
    wait(5);
}
