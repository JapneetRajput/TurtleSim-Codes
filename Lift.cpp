#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int l1=0,l2=0,l3=0,f,d1,d2,d3,ch,m,c,c1=0,c2=0,c3=0;
    cout<<"Enter the maximum no of floors in your building : ";
    cin>>m;
    cout<<"If any of the lifts are nonfunctional enter the code next to the lift";
    a: cout<<"\nL1-100\nL2-101\nL3-102 : ";
    cin>>c;
    if(c==100)
        c1=1;
    if(c==101)
        c2=1;
    if(c==102)
        c3=1;
    cout<<"If more than one lift is nonfunctional enter 1 and then enter the code of the nonfunctional lift else press 0 to continue : ";
    cin>>c;
    if(c==1)
        goto a;
    do
    {
        if(c1==1&&c2==1&&c3==1)
        {
            cout<<"No available lifts";
            break;
        }
        cout<<"Enter the floor youre on : ";
        cin>>f;
        d1=abs(f-l1);
        d2=abs(f-l2);
        d3=abs(f-l3);
        if(f>m)
        {
            cout<<"Error"<<endl;
        }
        else if(l1==l2&&l1==l3&&c1==0)
        {
            cout<<"L1 moves from "<<l1<<" to "<<f<<endl;
            cout<<"Enter the floor you want to go to : ";
            cin>>f;
            l1=f;
        }
        else if((d1<=d2&&d1<=d3&&c1==0)||(c2==1&&c3==1))
        {
            cout<<"L1 moves from "<<l1<<" to "<<f<<endl;
            cout<<"Enter the floor you want to go to : ";
            cin>>f;
            l1=f;
        }
        else if((d2<=d3&&c2==0)||(c1==1&&c3==1))
        {
            cout<<"L2 moves from "<<l2<<" to "<<f<<endl;
            cout<<"Enter the floor you want to go to : ";
            cin>>f;
            l2=f;
        }
        else if(c3==0)
        {
            cout<<"L3 moves from "<<l3<<" to "<<f<<endl;
            cout<<"Enter the floor you want to go to : ";
            cin>>f;
            l3=f;
        }
        cout<<"Lift 1 is on floor "<<l1<<"\nLift 2 is on floor "<<l2<<"\nLift 3 is on floor "<<l3<<"\n";
        cout<<"Enter 1 to continue : ";
        cin>>ch;
    }while(ch==1);
    return 0;
}
