#include <iostream>
using namespace std;

//Linear Search Function
int linearSearch(int values[], int target, int lengthOfArray)
{
    int i;
    for (i = 0; i < lengthOfArray; i++)
    {
        if (values[i] == target)
        {
            return i+1;
        }
    }
    return -1;
}
// Main Function
int main()
{
    int ar[] = {45, 67, 89, 34, 5, 234, 6, 45};
    int len, find;
    len = sizeof(ar) / sizeof(ar[0]);
    cout<<"Enter the Value You Want to Search For=";
    cin>>find;
    cout<<linearSearch(ar, find, len);
}

