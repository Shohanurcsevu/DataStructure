#include <iostream>
using namespace std;

//* Member Function
void insertionsort(int v[], int n);
int main()
{
    int a[] = {5, 1, 8, 3, 2134, 554};
    int l = sizeof(a) / sizeof(a[0]);
    insertionsort(a, l);
}

//*Insertion Sort Function Implementation
void insertionsort(int v[], int n)
{
    int i, j, k;
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            k = v[j - 1];
            v[j - 1] = v[j];
            v[j] = k;
            j--;
        }
    }

    //*Print the output
    for (i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }
}
