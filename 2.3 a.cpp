#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=1;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
