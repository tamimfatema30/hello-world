#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int h,v;
    float l;
    cin>>h;
    cin>>v;
    l=(h*v)/12.0;
    cout<<fixed<<setprecision(3)<<l<<endl;
    return 0;
}
