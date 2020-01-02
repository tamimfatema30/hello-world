#include<iostream>
using namespace std;
int main()
{ int N=0;
int Hundreds=0;
int Fiftys=0;
int Twentys=0;
int Tens=0;
int Fives=0;
int Twos=0;
int Ones=0;
cin>>N;
cout<<N<<endl;
Hundreds=N/100;
N=N%100;
Fiftys=N/50;
N=N%50;
Twentys=N/20;
N=N%20;
Tens=N/10;
N=N%10;
Fives=N/5;
N=N%5;
Twos=N/2;
N=N%2;
Ones=N;
cout<<Hundreds<<" nota(s) de R$ 100,00"<<endl;
cout<<Fiftys<<" nota(s) de R$ 50,00"<<endl;
cout<<Twentys<<" nota(s) de R$ 20,00"<<endl;
cout<<Tens<<" nota(s) de R$ 10,00"<<endl;
cout<<Fives<<" nota(s) de R$ 5,00"<<endl;
cout<<Twos<<" nota(s) de R$ 2,00"<<endl;
cout<<Ones<<" nota(s) de R$ 1,00"<<endl;
return 0;
}
