#include <iostream>

using namespace std;
void bubblysort(int arr[],int n)
{

    int i,j;
    int flag,temp;
    for(i=0; i<n; i++)
    {
        //first loop start
        flag=0;//flag initiated
        for(j=0; j<n-i-1; j++)//second loop started
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];         //swap
                arr[j+1]=temp;
                flag=1;

            }
        }//second loop end
        if(!flag)
        {

            break;
        }
    }//first loop end

    //print the output array
    for(i=0;i<n;i++)
    {

        cout<<arr[i]<<"\t";
    }

}
int main()
{
    int arr[]= {34,242,62,6,5,35,4679,42,2,222,566};
    int lenght_of_Array;
    lenght_of_Array=sizeof(arr)/sizeof(arr[0]);
    bubblysort(arr,lenght_of_Array);
    return 0;
}
