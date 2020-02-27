#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    n = 10;
    for (i = 0; i <= n;i++)
    {

        for (j = 0; j <= n-i-1;j++)
        {
            cout << j << endl;
        }
        cout << "*************"<<i<<"*****************"<<endl;
    }
}