#include<iostream>
using namespace std;

int linearSearch(int arr[],int lenghtOfArray,int find)
{
    for(int i=0;i<lenghtOfArray;i++)
    {
        if(arr[i]==find)
        {
            return i;

        }
    }
    return -1;
}
int main()
{
    int arr[]={4,5,2,54,786,245,8356,723,2456,6};
    int lenghtOfArray;
    int find, result;
    lenghtOfArray=sizeof(arr)/sizeof(arr[0]);
    cin>>find;
    result=linearSearch(arr,lenghtOfArray,find);
    cout<<result;
}