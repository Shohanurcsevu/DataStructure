#include <iostream>
using namespace std;

void bubblesort(int values[], int lengthOfArray)
{
    int i, j, temp;
    for (i = 0; i < lengthOfArray; i++)
    {
        for (j = 0; j < lengthOfArray - i - 1; j++)
        {
            if (values[j + 1] < values[j])
            {
                temp = values[j + 1];
                values[j + 1] = values[j];
                values[j] = temp;
                
            }
        }
    }

    cout<<"The Output Of The Bubble Sort Algorithmn: "<<endl;
    for(i=0;i<lengthOfArray;i++)
    {
        cout<<values[i]<<"\t";
    }

}

int main()
{
    int arr[] = {4, 63, 65426, 1345, 46, 154, 6724};
    int lenghtOfArray = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, lenghtOfArray);
}