#include <iostream>

using namespace std;

int main()
{
    int a[1005];
    int i,e=0,o=0,p=0,n=0;
    for(i=0; i<5; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<5; i++)
    {
      if(a[i]>0 && a[i]%2!=0)
      {
          p++;
          o++;
      }
      else if(a[i]>0 && a[i]%2==0)
      {
          p++;
          e++;
      }
     else if(a[i]<0 && a[i]%2!=0)
      {
          n++;
          o++;
      }
      else if(a[i],0 && a[i]%2==0)
      {
          n++;
          e++;
      }
    }
    cout<<o<<endl;
    cout<<e<<endl;
    cout<<n<<endl;
    cout<<n<<endl;

    return 0;
}
