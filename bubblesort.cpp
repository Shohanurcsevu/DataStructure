#include<iostream>
using namespace std;

void bubblesort(int values[],int lengthOfArray)
{
    int i,j,temp;

    for(i=0;i<lengthOfArray;i++)
    {
        for(j=0;j<lengthOfArray-i-1;j++)
        {
            if(values[j]>values[j+1])
            {
                temp=values[j];
                values[j]=values[j+1];
                values[j+1]=temp;
            }
            
        }
    }


    //!Printing the final Array Output

    for(i=0;i<lengthOfArray;i++)
    {
        cout<<values[i]<<"\t";
    }



}


int main()
{
    int arr[]={9,4,6,3,7,2,8,1};
    int lengthofArray;
    lengthofArray=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,lengthofArray);

}