#include<stdio.h>
int main ()
{
    int x,y,z;

    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z)
    {
        printf("the greatest number is %d",x);
    }
    else if(y>z)
    {
        printf("the greatest number is %d",y);
    }
    else
    {
        printf("the greatest number is %d",z);
    }
    return 0;
}
