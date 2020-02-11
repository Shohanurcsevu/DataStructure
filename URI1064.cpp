#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    float arr[10005];
    int i;
    float l;
    float c = 0;
    float sum, result = 0;
    //l = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] >= 0)
        {
            c++;
        }
        if (c != 0)
        {
            sum += arr[i];
        }
    }
    result = sum / c;
    cout << c << " valores positivos" << endl;
    cout << result << setprecision(1) << endl;
}