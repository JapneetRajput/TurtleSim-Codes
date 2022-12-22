#include <stdio.h>
#include <math.h>

int main()
{
    int i,d,c,f;
    float s;
    printf("All three digit Amstrong numbers are:");
    for(i=100;i<=999;i++)
    {
        c=i;
        s=0;
        while(c>0)
        {
            d=c%10;
            s=s+pow(d,3);
            c=c/10;
        }
        if(s==i)
            printf("\n%d",i);
    }
    return 0;
}
