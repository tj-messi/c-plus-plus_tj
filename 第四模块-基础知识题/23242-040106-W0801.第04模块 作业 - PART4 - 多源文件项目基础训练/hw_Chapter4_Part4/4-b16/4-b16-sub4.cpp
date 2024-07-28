/*朱俊泽 信15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;



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
			cout << "x1=" << "i" << endl;
			cout << "x2=" << "-i" << endl;
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