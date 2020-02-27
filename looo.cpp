#include<iostream>
using namespace std;
int main()
{
    int n=10, i, j;
    for (i = 0; i<n;i++)
    {
        for (j= 0; j <n-i-1; j++)

        {
            cout<<"This is J"<<j<<endl;
       }
       cout << "This is i " <<i<< endl;
    }
}