#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double pi,R,vol;
  pi=3.14159;
  cin>>R;
  vol=(4.0/3.0)*pi*(R*R*R);
  cout<<"VOLUME = "<<fixed<<setprecision(3)<<vol<<endl;
  return 0;
}

