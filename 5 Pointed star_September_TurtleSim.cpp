#include<simplecpp>

main_program{
    turtleSim();
    repeat(5)
    {
    forward(150); right(90); right(54); wait(0.5);
    }
    left(90); left(90); left(45);
    forward(1000); wait(10);
}
