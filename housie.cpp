#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int a[90],b[90],i,j,t,k=0,s;
    srand((unsigned)time(0));
    for(i=0;i<90;i++)
    {
        b[i]=i+1;
        a: t=rand()%90+1;
        for(j=0;j<i;j++)
        {
            if(t==a[j])
                goto a;
        }
        a[i]=t;
    }
    for(j=0;j<90;j++)
    {
        cout<<"The "<<j+1<<"th number is : "<<a[j]<<endl;
        for(i=1;i<=90;i++)
        {
            if(a[j]==b[i-1])
                b[i-1]=0;
            if(b[i-1]==0)
                cout<<"-  ";
            else
            {
                cout<<b[i-1]<<" ";
                if(i<10)
                    cout<<" ";
            }
            if(i%10==0)
                cout<<"\n";
        }
        cout<<"Enter 1 to continue and 0 to exit : ";
        cin>>s;
        if(s==0)
            break;
        cout<<"\n";
    }
}
