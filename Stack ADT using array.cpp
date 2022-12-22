#include <stdio.h>
#include <stdlib.h>

void push(int arr[100],int n)
{
    if(n==100)
    {
        printf("The stack is full\n");
    }
    else
    {
        printf("Enter the number you want to insert : ");
        scanf("%d",&arr[n]);
    }
}
void pop(int arr[100],int n)
{
    if(n<0)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("%d is deleted\n",arr[n]);
    }
}
void display(int arr[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int a[100],n=0,ch;
    a:
    printf("Enter\n1-Push 2-Pop 3-Peek\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push(a,n);
        n++;
        break;
    case 2:
        if(n>=0)
            n--;
        pop(a,n);
        if(n<0)
            n=0;
        break;
    case 3:
        display(a,n);
        break;
    default:
        printf("wrong choice\n");
    }
    printf("Enter 1 to continue and 2 to exit : ");
    scanf("%d",&ch);
    if(ch==1)
        goto a;
    else
        return 0;
}
