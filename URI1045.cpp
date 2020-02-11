#include<iostream>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a>0 && b>0 && c>0)
    {

        if((a*a)==(b*b+c*c))
        {
            cout<<"TRIANGULO RETANGULO";
        }
        else
        {
            cout<<"Bal chilra etodin";
        }
        

    }
}