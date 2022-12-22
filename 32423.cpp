#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int i,j,num,t;
    srand((unsigned)time(0));
    for(i=0;i<3;i++)
    {
        t=0;
        for(j=0;j<10;j++)
        {
           a: num=rand()%10+t;
            if(num==0)
                goto a;
            if(rand()%9<4)
                cout<<num<<" ";

            else
                cout<<"   ";
            t+=10;
        }
        cout<<endl;
    }
    return 0;
}
