/*�쿡�� 2351114 ��15*/
#include<iostream>
#include<iomanip>
using namespace std;
const double pi=3.14159;

int main(){
	cout<<"������뾶�͸߶�"<<endl;
	double r,h;
	cin>>r>>h;
	cout<<"Բ�ܳ�     : "<<fixed<<setprecision(2)<<2*pi*r<<endl;
	cout<<"Բ���     : "<<fixed<<setprecision(2)<<pi*r*r<<endl;
	cout<<"Բ������ : "<<fixed<<setprecision(2)<<4*pi*r*r<<endl;
	cout<<"Բ�����   : "<<fixed<<setprecision(2)<<pi*r*r*r*4/3<<endl;
	cout<<"Բ�����   : "<<fixed<<setprecision(2)<<pi*r*r*h<<endl;
	return 0;
}
