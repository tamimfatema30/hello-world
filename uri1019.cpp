#include<iostream>
using namespace std;
int main()
{int N = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	cin>>N;
	hours= N/3600;
	N = N%3600;
	minutes = N/60;
	N = N%60;
	seconds = N;
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;

	return 0;
}
