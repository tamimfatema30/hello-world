#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && b>c)
   {cout<<c<<endl;
    cout<<b<<endl;
    cout<<a<<endl; }
    else if (a>c && c>b)
    {cout<<b<<endl;
    cout<<c<<endl;
    cout<<a<<endl;}
    else if (b>a && a>c)
    {cout<<c<<endl;
    cout<<a<<endl;
    cout<<b<<endl;}
    else if (b>c && c>a)
    {cout<<a<<endl;
    cout<<c<<endl;
    cout<<b<<endl;}
    else if (c>a && a>b)
   {cout<<b<<endl;
    cout<<a<<endl;
    cout<<c<<endl;}
    else
    {cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;}
    cout<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
return 0; }
