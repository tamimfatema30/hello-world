#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ double p1,p2,x1,x2,y1,y2,z1,z2,distance;
cin>>x1;
cin>>y1;
cin>>x2;
cin>>y2;
p1=x2-x1;
p2=y2-y1;
z1=p1*p1;
z2=p2*p2;
distance=sqrt(z1+z2);
cout<<fixed<<setprecision(4)<<distance<<endl;
return 0;
}

