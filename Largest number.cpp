#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter 3 numbers=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
        printf("Largest number=%d",a);
    else if(b>=c)
        printf("Largest number=%d",b);
    else
        printf("Largest number=%d",c);
	return 0;
}
