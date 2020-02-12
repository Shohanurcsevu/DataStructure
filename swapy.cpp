#include<iostream>
using namespace std;


void swapy(int  xp,int yp)
{
    int temp= xp;
    xp=yp;
    yp=temp;
    cout<<xp<<endl<<yp<<endl;
}
int main()
{
    int a,b;
    a=2;
    b=3;
    swapy(a,b);
    //cout<<a<<b;
}