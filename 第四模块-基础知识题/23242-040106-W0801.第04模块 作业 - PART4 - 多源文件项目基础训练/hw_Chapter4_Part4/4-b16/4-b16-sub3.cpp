/*朱俊泽 信15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;


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
