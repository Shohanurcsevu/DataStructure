#include <iostream>
using namespace std;

//*Member function declared here
void insertionsort(int values[], int n);
void printarray(int array[], int n);

int main()
{
    int arr[] = {5, 1, 6, 2, 4, 3};
    int lengthOfArray;
    lengthOfArray = sizeof(arr) / sizeof(arr[0]);
    //*Here the insertion sort function called
    insertionsort(arr, lengthOfArray);
}

void insertionsort(int values[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && values[j - 1] > values[j])
        {
            key = values[j - 1];
            values[j - 1] = values[j];
            values[j] = key;
            j--;
        }
    }

    printarray(values, n);
}

void printarray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
}