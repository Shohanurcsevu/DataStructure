#include<iostream>
using namespace std;

int BinarySearch(int values[],int seachvalue,int lengthofArray)
{
    int left,right,mid;
    left=0;
    right=lengthofArray-1;
    while (left<=right)
    {
        //*Here the mid value is calculated
        //*Every time for new execution the mid value should be calculated
        mid=(left+right)/2;
        if(values[mid]<seachvalue)
        {
            //!if the mid values of the array is less than the searched value 
            //!then the left of the  array will calculate here
            left=mid+1;
        }
        else if(values[mid]>seachvalue)
        {
            //!if the mid values of the arry is greater than the values of the searched vlue 
            //!then the right of the array will calculate here
            right=mid-1;
        }
        else 
        {
            //!after the itreation of finding all the mid values and dividing the segemnt if the 
            //!searched values found the return  the mid 
            return mid;
        }
    }

     //*If the searched value never found then return -1
    return -1;
    




}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int findValue,lengthOfArray,result;
    lengthOfArray=sizeof(arr)/sizeof(arr[0]);
    cin>>findValue;
    result = BinarySearch(arr,findValue,lengthOfArray);
    cout<<result<<endl;
    



}