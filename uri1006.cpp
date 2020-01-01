0--#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A,B,C,average;
    cin>>A;
    cin>>B;
    cin>>C;
    average=(A*2+B*3+C*5)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<average<<endl;
    return 0;
}

