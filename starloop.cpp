#include<iostream>
using namespace std;
int main()
{
    int i, j,k;
    for (i = 1; i < 10;i++)
    {
        for (j = 0; j<18-i;j++)
        {
            cout << " ";
        }
        for (k = 0; k < i;k++)
        {
            cout << "*"<<" " ;
        }
        cout<<"\n";
    }
}