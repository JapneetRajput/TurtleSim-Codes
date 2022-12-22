// Program to create a simple calculator
#include <stdio.h>

int main() {
    char op;
    float n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f",&n1, &n2);

    switch(op)
    {
        case '+':
            printf("%f + %f = %f",n1, n2, n1+n2);
            break;

        case '-':
            printf("%f - %f = %f",n1, n2, n1-n2);
            break;

        case '*':
            printf("%f * %f = %f",n1, n2, n1*n2);
            break;

        case '/':
            printf("%f / %f = %f",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
