#include<iostream>
#include<cmath>
using namespace std;

 double BankNotesCalulate( double  money)
{
    double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    a=money/100;
    b=fmod(money,100);
    c=b/50;
    d=fmod(b,50);
    e=d/20;
    f=fmod(d,20);
    g=f/10;
    h=fmod(f,10);
    i=h/5;
    j=fmod(h,5);
    k=j/2;
    l=fmod(j,2);
    m=l/1;
    n=fmod(l,1);
    o=n/.50;
    p=fmod(n,.50);
    q=p/.25;
    r=fmod(p,.25);
    s=r/.10;
    t=fmod(r,.10);
    u=t/0.05;
    v=fmod(t,0.05);
    w=v/0.01;
    cout<<"NOTAS:"<<endl;
    cout<<int(a)<<" "<<"nota(s) de R$ 100.00"<<endl;
    cout<<int(c)<<" "<<"nota(s) de R$ 50.00"<<endl;
    cout<<int(e)<<" "<<"nota(s) de R$ 20.00"<<endl;
    cout<<int(g)<<" "<<"nota(s) de R$ 10.00"<<endl;
    cout<<int(i)<<" "<<"nota(s) de R$ 5.00"<<endl;
    cout<<int(k)<<" "<<"nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<int(m)<<" "<<"moeda(s) de R$ 1.00"<<endl;
    cout<<int(o)<<" "<<"moeda(s) de R$ 0.50"<<endl;
    cout<<int(q)<<" "<<"moeda(s) de R$ 0.25"<<endl;
    cout<<int(s)<<" "<<"moeda(s) de R$ 0.10"<<endl;
    cout<<int(u)<<" "<<"moeda(s) de R$ 0.05"<<endl;
    cout<<int(w)<<" "<<"moeda(s) de R$ 0.01"<<endl;

}

int main()
{
      double m;
    cin>>m;
    BankNotesCalulate(m);


}