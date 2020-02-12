#include <iostream>
using namespace std;

int find_Reapeat_Values(int values[], int length_Of_Array)
{

    int i, j;
    for (i = 0; i < length_Of_Array; i++)
    {

        for (j = i + 1; j < length_Of_Array; j++)
        {
            if (values[i] == values[j])
            {
                cout << values[i] << endl;
            }
        }
    }

    return -1;
}
int main()
{
    int arr[] = {9,1, 2, 34, 6, 4, 2, 7, 2, 7, 4, 9};
    int lengthOfArray, result;
    lengthOfArray=sizeof(arr)/sizeof(arr[0]);
    find_Reapeat_Values(arr, lengthOfArray);
}