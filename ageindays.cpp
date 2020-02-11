#include<iostream>
using namespace std;

int calculateDays(int days)
{
    int y,m,d,ty;
    y=days/365;
    ty=days%365;
    m=ty/30;
    d=ty%30;    
    cout<<y<<" "<<"ano(s)"<<endl;
    cout<<m<<" "<<"mes(es)"<<endl;
    cout<<d<<" "<<"dia(s)"<<endl;
}


int main()
{
    int daysfrominput;
    int i=5;
    cin>>daysfrominput;
    calculateDays(daysfrominput);
    
}