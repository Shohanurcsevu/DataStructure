#include<iostream>
using namespace std;

void bubbbleSort(int values[],int lenghtOfArray)
{
    int i,j,temp;
    for(i=0;i<lenghtOfArray;i++)
    {
        for(j=0;j<lenghtOfArray-i-1;j++)
        {
            if(values[j]>values[j+1])
            {
                temp=values[j];
                values[j]=values[j+1];
                values[j+1]=temp;
            }
        }
    }


    for(i=0;i<lenghtOfArray;i++)
    {
        cout<<values[i]<<"\t";
    }
}

int main()
{
    int arr[]={34,6,4,6,2,89,66,8,90};
    int lengthOfArray;

    lengthOfArray=sizeof(arr)/sizeof(arr[0]);
    bubbbleSort(arr,lengthOfArray);
}