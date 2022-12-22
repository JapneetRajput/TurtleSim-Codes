#include<stdio.h>
#include<simplecpp>

int main()
{
    int y;
    printf("Enter a year:\n");
    scanf("%d",&y);
    y%400==0?printf("%d is a leap year",y):y%4==0?(y%100==0?printf("%d is not a leap year",y):printf("%d is a leap year",y)):printf("%d is not a leap year",y);
    return 0;
}
