#include<stdio.h>

int main()
{
    int i,s,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d factorial= %d",n,s);
    return 0;
}
