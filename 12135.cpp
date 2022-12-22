#include <stdio.h>

int main()

{

     char c;

      printf("Enter the character : ");

      scanf("%c", &c);

      (c>='a' && c<='z') ? printf("\n%c is a lower case alphabet\n",c) : printf("\n%c is not a lower case alphabet\n",c);



    return 0;



}
