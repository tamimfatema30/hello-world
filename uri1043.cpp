#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float a,b,c;
    float p=0,area=0;
    cin>>a;
    cin>>b;
    cin>>c;
    if(((a+b)>c) && ((a+c)>b) && ((b+c)>a))
    {
        p=a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<p<<endl;}

    else {area=((a+b)/2)*c;
    cout<<"Area = "<<fixed<<setprecision(1)<<area<<endl;

    }
return 0;
}
