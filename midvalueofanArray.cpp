#include<iostream>
using namespace std;

int  main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<len-1;

    return 0;

}