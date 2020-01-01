#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,n=3.14159,A;
    cin>>r;
    A=n*(r*r);
    cout<<"A="<<fixed<<setprecision(4)<<A<<endl;

    return 0;
}
