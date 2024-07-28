/*朱俊泽 2351114 信15*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double pi = 3.14159;

int main(){
	cout<<"请输入三角形的两边及其夹角(角度)"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	double arc=sin(pi*c/180);
	cout << "三角形面积为 : "<<fixed<<setprecision(3)<<(a*b*arc/2)<<endl;
	return 0;
}
