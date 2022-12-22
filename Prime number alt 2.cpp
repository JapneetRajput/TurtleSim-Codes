#include<stdio.h>
#include<stdio.h>

int main()
{
    int a,n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
       a=n%i==0?1:2;
       if(a==1)
       break;
    }
    if(a==1)
    printf("%d is not a prime number",n);
    else if(a==2)
    printf("%d is a prime number",n);
    return 0;
}
