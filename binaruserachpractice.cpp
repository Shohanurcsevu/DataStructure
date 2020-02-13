#include <iostream>
using namespace std;

int binarySearch(int values[], int lengthOfArray, int find)
{

    int left, right, mid;
    left = 0;
    right = lengthOfArray - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (values[mid] > find)
        {
            right = mid - 1;
        }
        else if (values[mid] < find)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 7, 77, 9909};
    int lenghtOfArray;
    int find, result;
    lenghtOfArray = sizeof(arr) / sizeof(arr[0]);
    cin>>find;
    result = binarySearch(arr, lenghtOfArray, find);
    cout << result;
}