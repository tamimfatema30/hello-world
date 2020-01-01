#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int empnum,whrs;
    float sal,total;
    cin>>empnum;
    cin>>whrs;
    cin>>sal;
    total=whrs*sal;
    cout<<"NUMBER = "<<empnum<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}
