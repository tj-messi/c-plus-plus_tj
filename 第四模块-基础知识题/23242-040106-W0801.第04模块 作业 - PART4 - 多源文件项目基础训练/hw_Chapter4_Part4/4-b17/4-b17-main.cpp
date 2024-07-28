/*朱俊泽 信15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;

double a, b, c;

void fun1();
void fun2();
void fun3();
void fun4();


int main()
{
	cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
	cin >> a >> b >> c;
	double delta = b * b - 4 * a * c;
	if (abs(delta) < 1e-6)
	{
		delta = 0;
	}
	if (abs(a) < 1e-6)
	{
		a = 0;
	}
	if (abs(b) < 1e-6)
	{
		b = 0;
	}
	if (abs(c) < 1e-6)
	{
		c = 0;
	}
	if (a == 0) {
		fun1();
	}
	else if (delta == 0) {
		fun2();
	}
	else if (delta > 0) {
		fun3();
	}
	else if (delta < 0) {
		fun4();
	}
	return 0;
}