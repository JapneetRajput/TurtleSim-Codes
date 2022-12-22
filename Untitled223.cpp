#include <stdio.h>

int main()
{
    int l,b,r1,r2,h;
    float area;
    printf("To Calculate Area of Rectangle\n\n");
    printf("Enter length and breadth of rectangle\n");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of Rectangle = %f\n\n",area);
    printf("To Calculate Area of Circle\n\n");
    printf("Enter radius of circle\n");
    scanf("%d",&r1);
    area=3.14*r1;
    printf("Area of Circle = %f\n\n",area);
    printf("To Calculate Surface Area of Cylinder\n\n");
    printf("Enter radius and height of cylinder\n");
    scanf("%d%d",&r2,&h);
    area=2*3.14*r2*h;
    printf("Surface Area of Cylinder = %f",area);
    return 0;
}
