#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet\n");
    scanf("%c",&c);
    c>=97&&c<=122?printf("\nLower Case"):printf("\nUpper Case");
    return 0;
}
