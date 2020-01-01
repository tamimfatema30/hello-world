#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int a,b,c,d;
float e,f,value1,value2,total;
cin>>a;
cin>>b;
cin>>e;
value1=b*e;
cin>>c;
cin>>d;
cin>>f;
value2=d*f;
total=value1+value2;
cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;
return 0;}
