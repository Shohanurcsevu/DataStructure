#include <iostream>

using namespace std;


int main()
{
    int a[]={12,43,234,6,24,634345,5,53};
    int i,n,j,temp;
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }

}
