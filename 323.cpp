#include <iostream>
#include <simplecpp>
int main()
{
    int i,n;
    cout<<"Insert value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        repeat(i)
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
