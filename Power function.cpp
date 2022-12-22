#include<stdio.h>
#include<simplecpp>

int main()
{
    int a,b,c;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("a to the power b is %d",c);
    return 0;
}
