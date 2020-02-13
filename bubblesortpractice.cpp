#include<iostream>
using namespace std;

void sort(int arr[],int lenghtOfArray)
{
   
    int i ,j,temp;

    for(i=0;i<lenghtOfArray;i++)
    {

        for(j=0;j<lenghtOfArray-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

 for ( i=0;i<lenghtOfArray;i++)
 {
     cout<<arr[i]<<"\t";
 }


}
int main()
{

    int arr[]={3,6,2,7,22,77,4,6847,3434542,689365,54,246};
    int lenghtOfArray;
    lenghtOfArray=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,lenghtOfArray);
}