#include<stdio.h>

int main()
{
    int n,s;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    s=(n*(n+1))/2;
    printf("Sum of %d numbers is: %d",n,s);
    return 0;
}
