#include<iostream>
using namespace std;

int linerSearch(int values[],int lengthOfArray,int findValues)
{
    int i;
    for(i=0;i<lengthOfArray;i++)
    {
        if (values[i]==findValues)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={4,6,3,7,2,72,25,6,2,71};
    int lengthOfArray,findValues,result;
    lengthOfArray=sizeof(arr)/sizeof(arr[0]);
    cin>>findValues;
    result = linerSearch(arr,lengthOfArray,findValues);
    cout<<result<<endl; 


}