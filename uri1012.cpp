#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ double A,B,C;
cin>>A>>B>>C;
double pi,areaTri,areaCir,areaTrape,areaSqu,areaRect;
pi=3.14159;
areaTri=0.5*A*C;
areaCir=pi*(C*C);
areaTrape=((A+B)/2)*C;
areaSqu= B*B;
areaRect= A*B;
cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<areaTri<<endl;
cout<<"CIRCULO: "<<fixed<<setprecision(3)<<areaCir<<endl;
cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<areaTrape<<endl;
cout<<"QUADRADO: "<<fixed<<setprecision(3)<<areaSqu<<endl;
cout<<"RETANGULO: "<<fixed<<setprecision(3)<<areaRect<<endl;
return 0;
}
