#include<iostream>
using namespace std;
int liner_Search(int array[], int find,int n);

int main()
{
    int arr[] = {54, 35, 23, 76, 2345, 847};
    int lenght_Of_Array,find,result;
    lenght_Of_Array = sizeof(arr) / sizeof(arr[0]);
    cin >> find;
    result=liner_Search(arr, find,lenght_Of_Array);
    cout << result;


}

int liner_Search(int array[], int find,int n)
{
    int i;
    for (i = 0; i < n;i++)
    {
        if(array[i]==find)
        {
            return i;
        }
    }

    return -1;
}