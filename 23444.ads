#include <stdio.h>

#include <stdlib.h>



void fib(int n)

{

    int a=0;

    int b=1;

    printf("%d %d ",a,b);

    for(int i=2;i<=n;i++)

    {

        int c=a+b;

        a=b;

        b=c;

        printf("%d ",c);



    }

    return;

}



int main()

{

    int n;

    printf("enter n terms: ");

    scanf("%d",&n);





    fib(n);

    return 0;

}
