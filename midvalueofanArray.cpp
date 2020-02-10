#include<iostream>
using namespace std;

int  main()
{
    int arr[10]={1,2,3,4,5,6,7};
    int f,l,m;
    f=arr[0];
    l=arr[6];
    m=f+(l-f)/2;
    cout<<m;

    return 0;

}