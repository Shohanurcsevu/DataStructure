#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for (i=0; i<10;i++)
    {
        cout << "i=" << i << endl;
        for (j = 0; j<10-i-1;j++)
        {
            cout << "**" << j << "**" << endl;

        }
        
    }
}