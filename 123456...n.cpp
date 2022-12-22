#include<stdio.h>
#include<simplecpp>

int main()
{
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(;n>0;n--)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",i);
        }
    printf("\n");
    }
}
