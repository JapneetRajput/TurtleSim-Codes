#include<stdio.h>

int main()
{
    int i,s,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    s=0;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of %d numbers is: %d",n,s);
    return 0;
}
