#include<stdio.h>
#include<simplecpp>

int main()
{
    int i,s,n,t,a,f;
    printf("Enter the value of n:");
    scanf("%d",&n);
    s=0,t=1;
    if(n==1)
        printf("%d",s);
    if(n>1)
        printf("%d,",s);
    if(n==2)
        printf("%d",t);
    if(n>2)
        printf("%d,",t);
    if(n%2==0)
    {
        a=(n/2)-1;
        for(i=0;i<a;i++)
        {
            s=s+t;
            printf("%d,",s);
            t=t+s;
            printf("%d,",t);
        }
    }
    if(n%2!=0)
    {
        a=((n+1)/2)-2;
        for(i=0;i<=a;i++)
        {
            s=s+t;
            printf("%d,",s);
            if(i==a)
            {
                break;
            }
            t=t+s;
            printf("%d,",t);
        }
    }
    return 0;
}
