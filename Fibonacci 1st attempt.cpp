#include<stdio.h>
int main()
{
    int i,s,n,t,a;
    printf("Enter the value of n:");
    scanf("%d",&n);
    a=(n/2)-1;
    s=0,t=1;
    printf("%d,%d,",s,t);
    for(i=0;i<=a;i++)
    {
        s=s+t;
        printf("%d,",s);
        if(n%2!=0)
        {
            if(i==a)
            {
                break;
            }
        }
        t=t+s;
        printf("%d,",t);
    }
    return 0;
}
