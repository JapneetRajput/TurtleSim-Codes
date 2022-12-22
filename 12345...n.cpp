#include<iostream>
#include<simplecpp>

int main()
{
    int i,n,j;
    cout<<"Insert value of n\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<".";
        }
    cout<<endl;
    }
    for(i=n;i>0;i--)
        {
        repeat(i)
        {
            cout<<".";
        }
    cout<<endl;
    }
     return 0;
}
