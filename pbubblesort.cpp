#include <iostream>
using namespace std;

void bubblesort(int values[], int lenghtOfArray)
{
    int i, j, temp;
    for (i = 0; i < lenghtOfArray; i++)
    {
        for (j = 0; j < lenghtOfArray - i - 1; j++)
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

 

    //* After the Bubble sort the Binary Search Will Work

    int search;
    cout << "Enter the number you wanted to search";
    cin >> search;
   
        int left, right, mid;
        left = 0;
        right = lenghtOfArray - 1;
        while (left <= right)
        {

            mid = (left + right) / 2;

            if (values[mid] < search)
            {
                left = mid + 1;
            }
            else if (values[mid] > search)
            {
                right = mid - 1;
            }
            else
            {
                cout<<  mid;
            }
        }

      
    }
  


int main()
{
    int arr[] = {4, 2, 7, 33, 754, 536, 83, 26, 15, 5689};
    int lenghtofarray;
    lenghtofarray = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, lenghtofarray);
}