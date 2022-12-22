#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    int i,j,num,t,u=0;
    srand((unsigned)time(0));
    for(i=0;i<3;i++)
    {
        t=0;
        for(j=0;j<10;j++)
        {
           a: num=rand()%3+t+u;
            if(num==0||(i==2&&num%10==0))
                goto a;
            if(rand()%3!=0)
                cout<<num<<" ";
            else if(t==0)
                cout<<"  ";
            else
                cout<<"   ";
            t+=10;
        }
        u=u+4;
        cout<<endl;
    }
    return 0;
}
