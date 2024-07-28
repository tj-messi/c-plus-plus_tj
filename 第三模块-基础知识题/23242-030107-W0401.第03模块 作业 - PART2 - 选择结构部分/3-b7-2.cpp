/*2351114 信15 朱俊泽*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"请输入找零值："<<endl;
	double a;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
	cin>>a;
	//先计算再输出
	if(a>=50){
		a1=1;
		a-=50;
	}
	if(a>=20){
		a2=(int)(a/20);
		a-=a2*20;
	}
	if(a>=10){
		a3=(int)(a/10);
		a-=a3*10;
	}
	if(a>=5){
		a4=(int)(a/5);
		a-=a4*5;
	}
	if(a>=1){
		a5=(int)(a/1);
		a-=a5;
	}
	if(a>=0.5){
		a6=1;
		a-=0.5;
	}
	if(a>=0.1){
		a7=(int)((a+0.001)/0.1);
		a-=a7*0.1;
	}
	if(a>=0.05){
		a8=(int)((a+0.001)/0.05);
		a-=a8*0.05;
	}
	if(a>=0.02){
		a9=(int)((a+0.001)/0.02);
		a-=a9*0.02;
	}
	if(a>=0.01){
		a10=(int)((a+0.001)/0.01);
		a-=a10*0.01;
	}
	
	
	
	
	//输出
	cout << "共"  << a1+a2+a3+a4+a5+a6+a7+a8+a9+a10 <<"张找零，具体如下：" << endl;
	if (a1 != 0) {
		cout << setiosflags(ios::left) << setw(5) << "50元" << " : " << a1 <<"张" <<endl;
	}
	if (a2 != 0) {
		cout << setiosflags(ios::left) << setw(5) << "20元" << " : " << a2<< "张" << endl;
	}
	if (a3 != 0) {
		cout << setiosflags(ios::left) << setw(5) << "10元" << " : " << a3<< "张" << endl;
	}
	if (a4 != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5元" << " : " << a4 << "张" << endl;
	}
	if (a5!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "1元" << " : " << a5<< "张" << endl;
	}
	if (a6!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "5角" << " : " << a6<< "张" << endl;
	}
	if (a7!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "1角" << " : " << a7<< "张" << endl;
	}
	if (a8!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "5分" << " : " << a8<< "张" << endl;
	}
	if (a9!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "2分" << " : " << a9<< "张" << endl;
	}
	if (a10!= 0) {
		cout << setiosflags(ios::left) << setw(5) << "1分" << " : " << a10<< "张" << endl;
	} 
	return 0;
}
