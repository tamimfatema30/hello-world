#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int years=0;
    int months=0;
    int days=0;
    cin>>num;
    years=num/365;
    num= num%365;
    months=num/30;
    num=num%30;
    days=num;
    cout<<years<<" ano(s)"<<endl;
    cout<<months<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    return 0;


}
