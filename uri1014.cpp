#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X;
    cin>>X;
    double Y,avg;
    cin>>Y;
    avg=X/Y;
    cout<<fixed<<setprecision(3)<<avg<<" km/l"<<endl;
    return 0;
}
