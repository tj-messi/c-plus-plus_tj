/*朱俊泽 信15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;

void fun1(double a, double b, double c, double delta)
{
	cout << "不是一元二次方程" << endl;
}

void fun2(double a, double b, double c, double delta)
{
	cout << "有两个相等实根：" << endl;
	double res = (-b / (2 * a));
	cout << "x1=x2=" << res << endl;
}

void fun3(double a, double b, double c, double delta)//先输出大的
{
	double res1 = (-b + sqrt(delta)) / (2 * a);
	double res2 = (-b - sqrt(delta)) / (2 * a);
	if (res1 > res2)
	{
		cout << "x1=" << res1 << endl;
		cout << "x2=" << res2 << endl;
	}
	else
	{
		cout << "x1=" << res2 << endl;
		cout << "x2=" << res1 << endl;
	}
}

void fun4(double a, double b, double c, double delta)//虚根够小直接+-i
{
	cout << "有两个虚根：" << endl;
	double shi, xu;
	if (abs(-b / (2 * a)) < 1e-6)
	{
		shi = 0;
	}
	else
	{
		shi = -b / (2 * a);
	}
	if (abs(((abs((sqrt(0 - delta)) / (2 * a)) - 1))) < 1e-6)
	{
		xu = 1;
	}
	else
	{
		xu = sqrt(0 - delta) / (2 * a);
	}
	if (xu == 1)
	{
		if (shi == 0)
		{
			cout << "x1="  << "i" << endl;
			cout << "x2="  << "-i" << endl;
		}
		else
		{
			cout << "x1=" << shi << "+i" << endl;
			cout << "x2=" << shi << "-i" << endl;
		}
		
	}
	else
	{
		cout << "x1=" << shi << "+" << xu << "i" << endl;
		cout << "x2=" << shi << "-" << xu << "i" << endl;
	}
}

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