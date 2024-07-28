/*朱俊泽 2351114 信15*/
#include<iostream>
#include<iomanip>
using namespace std;
const double pi=3.14159;

int main(){
	cout<<"请输入半径和高度"<<endl;
	double r,h;
	cin>>r>>h;
	cout<<"圆周长     : "<<fixed<<setprecision(2)<<2*pi*r<<endl;
	cout<<"圆面积     : "<<fixed<<setprecision(2)<<pi*r*r<<endl;
	cout<<"圆球表面积 : "<<fixed<<setprecision(2)<<4*pi*r*r<<endl;
	cout<<"圆球体积   : "<<fixed<<setprecision(2)<<pi*r*r*r*4/3<<endl;
	cout<<"圆柱体积   : "<<fixed<<setprecision(2)<<pi*r*r*h<<endl;
	return 0;
}
