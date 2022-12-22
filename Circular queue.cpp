#include <stdio.h>
#include <stdlib.h>
int s=3,arr[3],fr=-1,re=0;
int ins()
{
    if((fr==0&&re==s)||(fr==re))
    {
        printf("Queue full\n");
        return 0;
    }
    else if(re==s)
    {
        re=0;
        ins();
        return 0;
    }
    else
    {
        printf("Enter the element you want to insert : ");
        scanf("%d",&arr[re]);
    }
    if(fr==-1)
        fr++;
    if(re!=s)
    {
        re++;
    }
}
int del()
{
    if(fr==-1)
    {
        printf("Queue empty\n");
        return 0;
    }
    else if(fr==s)
    {
        fr=0;
        del();
        return 0;
    }
    else
    {
        printf("%d deleted\n",arr[fr]);
    }
    fr++;
    if((fr==re&&fr!=s)||(fr==re&&re==s))
    {
        fr=-1;
        re=0;
    }
}
void disp()
{
    int f=fr;
    if(f==-1)
    {
        printf("Queue empty\n");
    }
    else
    {
        do
        {
            printf("%d ",arr[f]);
            f++;
            if(f==s&&f!=re)
                f=0;
        }while(f!=re);
        printf("\n");
    }
}
int main()
{
    int ch;
    do
    {
        printf("1.Insert Element\n2.Delete Element\n3.Display Queue\n4.Exit\nEnter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            ins();
            break;
        case 2:
            del();
            break;
        case 3:
            disp();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice");
        }
    }while(ch!=4);
    return 0;
}
