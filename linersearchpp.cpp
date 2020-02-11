#include <iostream>

using namespace std;

int linerSearch(int values[], int target, int lenghtofArray)
{
    int i;
    for (i = 0; i < lenghtofArray; i++)
    {
        if (values[i] == target)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {23, 66, 535, 34, 2, 6, 8};
    int l, f, result, t = 0;
    l = sizeof(arr) / sizeof(arr[0]);

    while (t == 0)
    {
        cin >> f;
        result = linerSearch(arr, f, l);
        cout << result << endl;
    }
}