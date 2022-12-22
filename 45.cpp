#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two integers\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The interchanged values are \n");
    printf("a= %d",a);
    printf("\nb= %d",b);
    return 0;
}
