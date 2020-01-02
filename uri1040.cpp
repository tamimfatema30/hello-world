#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float n1,n2,n3,n4;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;
    float average;
    average = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<average<<endl;
if (average>=7.0)
{
    cout<<"Aluno aprovado."<<endl;
}
else if (average<5.0)
{
    cout<<"Aluno reprovado."<<endl;
}
if (average>=5.0 && average<=6.9)
{
    cout<<"Aluno em exame."<<endl;
    float n5,averagef;
    cin>>n5;
    cout<<"Nota do exame: "<<fixed<<setprecision(1)<<n5<<endl;
    averagef=(average+n5)/2.00;
if (averagef>=5.0)
{
    cout<<"Aluno aprovado."<<endl;

}
else if (averagef<=4.9)
{
    cout<<"Aluno reprovado."<<endl;
}
else{cout<<"NO"<<endl;}
cout<<"Media final: "<<fixed<<setprecision(1)<<averagef<<endl;}
return 0; }
