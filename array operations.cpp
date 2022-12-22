#include <stdio.h>
#include <stdlib.h>
void trav(int arr[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<10000000000)
            printf("Accessed %d element.\n",i);
    }
}
void ins_beg(int arr[100],int n)
{
    int i,m;
    printf("Enter the number you want to insert: ");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        arr[n-i]=arr[n-(i+1)];
    }
    arr[0]=m;
}
void ins_end(int arr[100],int n)
{
    int m;
    printf("Enter the number you want to insert: ");
    scanf("%d",&m);
    arr[n-1]=m;
}
void ins_loc(int arr[100],int n)
{
    int l,m,i;
    printf("Enter the location where you want to insert it: ");
    scanf("%d",&l);
    printf("Enter the number you want to insert: ");
    scanf("%d",&m);
    for(i=l-1;i<n;i++)
    {
        arr[n-i]=arr[n-(i+1)];
    }
    arr[l-1]=m;

}
void del_beg(int arr[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
}
void del_end(int arr[100],int n)
{
    arr[n]=0;
}
void del_loc(int arr[100],int n)
{
    int i,l;
    printf("Enter the location where you want to remove it from: ");
    scanf("%d",&l);
    for(i=l-1;i<n;i++)
    {
        arr[i]=arr[i+1];
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
    int a[100],ch,n=0,c;
    do
    {
        printf("1.Traverse\n2.Insert at beg\n3.Insert at end\n4.Insert at given location\n5.Delete at beg\n6.Delete at end\n7.Delete from given location\n8.Merge\n9.Search\n10.Sort ascending order\n11.Sort descending order\n12.Remove duplicate\n13.Display");
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            trav(a,n);
            break;
        case 2:
            n++;
            ins_beg(a,n);
            break;
        case 3:
            n+=1;
            ins_end(a,n);
            break;
        case 4:
            n+=1;
            ins_loc(a,n);
            break;
        case 5:
            n-=1;
            del_beg(a,n);
            break;
        case 6:
            n-=1;
            del_end(a,n);
            break;
        case 7:
            n-=1;
            del_loc(a,n);
            break;
        /*case 8:
            merge(a,n);
            break;
        case 9:
            search(a,n);
            break;
        case 10:
            sort_asc(a,n);
            break;
        case 11:
            sort_dsc(a,n);
            break;
        case 12:
            rem_dup(a,n);
            break;*/
        case 13:
            display(a,n);
            break;
        default:
            printf("Wrong choice");
        }
        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%d",&c);
    }while(c==1);
}
