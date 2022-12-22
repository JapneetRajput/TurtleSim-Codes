#include<stdio.h>
#include<simplecpp>

int main()
{
    int a,b,c,d;
    printf("Enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=a>b?(a>c?a:c):(b>c?b:c);
    printf("Greatest number is %d",d);
    return 0;
}
