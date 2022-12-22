#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,d,z;
	float e;
	int c;
    printf("Enter 2 numbers=");
    scanf("%d%d",&a,&b);
	do
	{
        printf("\nMenu\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter choice\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
				d=a+b;
				printf("\nAddition=%d",d);
				break;
            case 2:
                d=a-b;
				printf("\nSubtraction=%d",d);
				break;
            case 3:
				d=a*b;
				printf("\nMultiplication=%d",d);
				break;
            case 4:
				e=(float)a/b;
				printf("\nDivision=%f",e);
				break;
            default:
				printf("\nInvalid choice");

        }
	printf("\nPress 1 to continue...");
	scanf("%d",&z);
	}
	while(z==1);
	return 0;
}
