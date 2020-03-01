#include <iostream>

using namespace std;

void swapy(int *a,int *b)
{

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[]= {10,80,30,90,40,50,70};
    int i,j,high,low,pivot,temp;
    low=0;
    i=(low-1);
    high=sizeof(arr)/sizeof(arr[0]);
    pivot=arr[high-1];
    for(j=low; j<=high-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swapy(&arr[i],&arr[j]);

        }

    }
    for(j=0; j<=high-1; j++)
    {
        cout<<arr[j]<<"\t";
    }


    return 0;
}
