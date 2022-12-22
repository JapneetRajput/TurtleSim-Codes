#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }while(n/10!=0);
    printf("sum is %d",sum);
}
