#include<iostream>
using namespace std;
int  main()
{

    int n=10,i,j;
    for(i=0;i<n;i++)
    {

        for(j=0;j<n-i;j++)
        {
            cout<<"j=["<<j<<"]"<<endl;



        }
        cout<<"------------------"<<endl;
         cout<<"i=["<<i<<"]"<<endl;
        cout<<"------------------"<<endl;


    }
}
