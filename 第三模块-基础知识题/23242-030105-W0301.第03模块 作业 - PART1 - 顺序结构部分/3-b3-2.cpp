/*朱俊泽 2351114 信15*/
#include<iostream>
#include <iomanip>
using namespace std;


int main(){
	cout << "请输入[0,100亿)之间的数字:" << endl;
	double a;
	cin>>a;
	//可能超过了int上限；
	//分一个整数部分a0和a1；
	int a0=static_cast<int>(a/10);
	a /= 10;
	double a1=a-a0;
	cout << setw(7)<< setiosflags(ios::left) << "十亿位" << ": " << a0/ 100000000 % 10 << endl;
	a0-=100000000*(a0/100000000);
	cout << setw(7)<< setiosflags(ios::left) << "亿位" << ": " << (a0 / 10000000)%10 << endl;
	a0-=10000000*(a0/10000000);
	cout << setw(7)<< setiosflags(ios::left) << "千万位" << ": " << a0 / 1000000 % 10 << endl;
	a0-=1000000*(a0/1000000);
	cout << setw(7)<< setiosflags(ios::left) << "百万位" << ": " << a0 / 100000 % 10 << endl;
	a0-=100000*(a0/100000);
	cout << setw(7)<< setiosflags(ios::left) << "十万位" << ": " << a0 / 10000 % 10 << endl;
	a0-=10000*(a0/10000);
	cout << setw(7)<< setiosflags(ios::left) << "万位" << ": " << a0 / 1000 % 10 << endl;
	a0-=1000*(a0/1000);
	cout << setw(7)<< setiosflags(ios::left) << "千位" << ": " << a0 / 100 % 10 << endl;
	a0-=100*(a0/100);
	cout << setw(7)<< setiosflags(ios::left) << "百位" << ": " << a0 / 10 % 10 << endl;
	a0-=10*(a0/10);
	cout << setw(7)<< setiosflags(ios::left) << "十位" << ": " << a0 % 10 << endl;

	double y=(a1+0.0001)/0.1;
	cout << setw(7)<< setiosflags(ios::left) << "圆" << ": " << int(y)%10<< endl;
	double j = (a1 + 0.0001) / 0.01;
	cout << setw(7)<< setiosflags(ios::left) << "角" << ": " << int(j)%10<< endl;
	double f = (a1 + 0.0001) / 0.001;
	cout << setw(7)<< setiosflags(ios::left) << "分" << ": " << int(f)%10 << endl;
return 0;
}
