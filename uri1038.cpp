#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int x,y;
float z;
cin>>x;
cin>>y;
if (x==1)
{
 z=y*4.00;
 cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
else if (x==2)
{
    z=y*4.50;
 cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
else if(x==3)
{
    z=y*5.00;
 cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
else if (x==4)
{
    z=y*2.00;
 cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
else if (x==5)
{
    z=y*1.50;
 cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
else {cout<<"Unavailable"<<endl;}
return 0; }
