#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("Enter coefficients of quadratic equations:\n");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are real and unequal\n");
        printf("root1=%f\n",(-b+sqrt(d))/(2*a));
        printf("root2=%f\n",(-b+sqrt(d))/(2*a));
    }
    else if(d==0)
    {
        printf("Roots are real and equal\n");
        printf("root1=root2=%f\n",-b/(2*a));
    }
    else
    {
        printf("root1=%f+%fi\n",-b/(2*a),sqrt(-d)/(2*a));
        printf("root2=%f-%fi\n",-b/(2*a),sqrt(-d)/(2*a));
    }
    return 0;
}
