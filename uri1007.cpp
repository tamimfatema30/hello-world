#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D, prod1,prod2,difference;
    cin>>A;
    cin>>B;
    prod1=A*B;
    cin>>C;
    cin>>D;
    prod2=C*D;
    difference=prod1-prod2;
    cout<<"DIFERENCA = "<<difference<<endl;
    return 0;
}
