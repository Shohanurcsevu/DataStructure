#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,result,sum=0;
    int i,c=0;

    for(i=0;i<=6;i++)
    {
        cin>>a;
        if(a>=0)
        {
            c++;
            sum=sum+a;
        }

    }
    result=sum/c;
    cout<<c<<"\t"<<"valores positivos"<<endl;
    cout<<result<<setprecision(1)<<endl;

    return 0;
}
