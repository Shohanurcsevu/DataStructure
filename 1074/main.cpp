#include <iostream>

using namespace std;

int main()
{
   int n,t;
   cin>>n;
   while(n>0)
   {
       cin>>t;
       if(t==0)
       {
           cout<<"NULL"<<endl;
       }
       else if(t%2!=0 && t>0)
       {
           cout<<"ODD POSITIVE"<<endl;
       }
       else if(t%2!=0 && t<0)
       {
           cout<<"ODD NEGATIVE"<<endl;
       }
       else if(t%2==0 && t<0)
       {
           cout<<"EVEN NEGATIVE"<<endl;
       }
       else if(t%2==0 && t>0)
       {
           cout<<"EVEN POSITIVE"<<endl;
       }


       n--;
   }
    return 0;
}
