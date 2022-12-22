#include<stdio.h>
#include<simplecpp>

int main()
{
    int a,b,c;
    float Area,s;
    printf("Enter the sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area is %f",Area);
    return 0;
}
