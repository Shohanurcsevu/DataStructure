#include <iostream>
using namespace std;

int BinarySearch(int values[], int lengthOfArray, int target)
{
    int left, right, mid;
    left = 0;
    mid = 0;
    right = lengthOfArray - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (values[mid] < target)
        {
            left = mid + 1;
        }
        else if (values[mid] > target)
        {
            right = mid - 1;
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
    int arr[] = {0, 1896, 24568, 3286, 4896, 5496, 68569, 76984, 84568, 385659};
    int length, find, result;
    length = sizeof(arr) / sizeof(arr[0]);
    cin >> find;
    result = BinarySearch(arr, length, find);
    cout << result << endl;
}