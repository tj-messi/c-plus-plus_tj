/*�쿡�� ��15 2351114*/
#include<iostream>
#include<cmath>
using namespace std;

extern double a, b, c;

void fun1()
{
	cout << "����һԪ���η���" << endl;
}

void fun2()
{
	cout << "���������ʵ����" << endl;
	double res = (-b / (2 * a));
	cout << "x1=x2=" << res << endl;
}

void fun3()//��������
{
	double delta = b * b - 4 * a * c;
	if (abs(delta) < 1e-6)
	{
		delta = 0;
	}
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

void fun4()//�����Сֱ��+-i
{
	double delta = b * b - 4 * a * c;
	if (abs(delta) < 1e-6)
	{
		delta = 0;
	}
	cout << "�����������" << endl;
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