#include<stdio.h>
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++);
    {
        n%i==0?printf(""):printf("%d is not a prime number",n);
    }

    return 0;
}
