#include<iostream>
using namespace std;
int main()
{
    int s,f;
    cin>>s>>f;
    int t=0;
    if (s==f)
    {cout << "O JOGO DUROU 24 HORA(S)" << endl;}
    if (s>f)
    {t=24+(f-s);
     cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;}
    if(f>s)
        {t=f-s;
         cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;}
     return 0; }
