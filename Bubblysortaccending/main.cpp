#include <iostream>

using namespace std;
void bubblysort(int a[],int n);

int main()
{
    int a[1005];
    int n,i;
    cout<<"Enter the number of elements = ";
    cin>>n;
    cout<<"Enter  the Elements"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubblysort(a,n);
    return 0;
}

void bubblysort(int a[],int n)
{

    int i,j,temp,flag;
    for(i=0; i<n; i++)
    {
        flag=0;
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;

            }
        }
        if(!flag)
        {
            break;
        }

    }





    //printing the array
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }


}
