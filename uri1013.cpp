#include<iostream>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a;
    cin>>b;
    cin>>s;
    if(a>b && a>s)
    {
        cout<<a<<" eh o maior"<<endl;
    }
    else if(b>a && b>s)
    {
        cout<<b<<" eh o maior"<<endl;
    }
    else {cout<<s<<" eh o maior"<<endl;}
      return 0;
}
