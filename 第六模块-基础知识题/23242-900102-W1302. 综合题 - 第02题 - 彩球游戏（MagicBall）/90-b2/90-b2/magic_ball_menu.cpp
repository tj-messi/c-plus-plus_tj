/*2351114 �쿡�� ��15*/
#include"cmd_console_tools.h"
#include"magic_ball.h"
#include<iostream>
#include<conio.h>
using namespace std;


char menu()
{
	cct_setconsoleborder(120, 40, 120, 9000);
	cct_cls();
	cout << "-----------------------------------" << endl
		<< "1.�ڲ����飬���ɳ�ʼ״̬��Ѱ���Ƿ��г�ʼ��������" << endl
		<< "2.�ڲ����飬������ʼ����������0�����䲢��0���" << endl
		<< "3.�ڲ����飬������ʼ������������������ʾ" << endl
		<< "4.n*n�Ŀ��(�޷ָ���),��ʾ��ʼ״̬" << endl
		<< "5.n*n�Ŀ��(�зָ���),��ʾ��ʼ״̬" << endl
		<< "6.n*n�Ŀ��(�зָ���),��ʾ��ʼ״̬����ʼ��������" << endl
		<< "7.n*n�Ŀ��(�зָ���),������ʼ�����������ʾ������ʾ" << endl
		<< "8.cmdͼ�ν���������(�зָ��ߣ�����ƶ�ʱ��ʾ���꣬�Ҽ��˳�)" << endl
		<< "9.cmdͼ�ν���������" << endl
		<< "0.�˳�" << endl
		<< "-----------------------------------" << endl
		<< "[��ѡ��0-9] ";
	while (1)
	{
		const char num = _getch();
		if (num < '0' || num>'9')
		{
			cin.clear();
			continue;
		}
		return num;
	}
}
