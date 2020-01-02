#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ float a,b,c;
cin>>a;
cin>>b;
cin>>c;
double a2;
a2=2*a;
double b2;
b2=b*b;
double prod;
prod=4*a*c;
double r;
r=sqrt(b2-prod);
double x;
x=(-b+r)/a2;
double x1;
x1=(-b-r)/a2;
if (a2==0 || r<0)
{
    cout<<"Impossivel calcular"<<endl;
}
else {cout<<"R1 = "<<fixed<<setprecision(5)<<x<<endl;
cout<<"R2 = "<<fixed<<setprecision(5)<<x1<<endl;
}
return 0; }

