#include <iostream>

using namespace std;

int linerseach(int values[], int target, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (values[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int elemnts[] = {1, 5, 65, 2, 7, 8, 34};
    int findvalue;
    int length;
    length = sizeof(elemnts) / sizeof(elemnts[0]);
    cout << "Enter the values that you want to search:=";
    cin >> findvalue;
    cout << linerseach(elemnts, findvalue, length);
}
