#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
 double a;
 double b;
 string name;
cin>>name;
cin>>a;
cin>>b;
double bonus;
bonus= a+ ((b/100)*15);
cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<bonus<<endl;
return 0;}
