/*朱俊泽 信15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;

void fun1(double a, double b, double c, double delta);
void fun2(double a, double b, double c, double delta);
void fun3(double a, double b, double c, double delta);
void fun4(double a, double b, double c, double delta);


int main()
{
	double a, b, c; double delta;
	cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
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
		fun1(a, b, c, delta);
	}
	else if (delta == 0) {
		fun2(a, b, c, delta);
	}
	else if (delta > 0) {
		fun3(a, b, c, delta);
	}
	else if (delta < 0) {
		fun4(a, b, c, delta);
	}
	return 0;
}