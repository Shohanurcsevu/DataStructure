#include<iostream>
using namespace std;

int  main()
{
    string arr[]={"1","2","3","4","5","6","7"};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<len;

    return 0;

}