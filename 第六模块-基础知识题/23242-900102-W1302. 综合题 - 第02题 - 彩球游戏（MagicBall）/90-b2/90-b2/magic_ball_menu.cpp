/*2351114 朱俊泽 信15*/
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
		<< "1.内部数组，生成初始状态，寻找是否有初始可消除项" << endl
		<< "2.内部数组，消除初始可消除项后非0项下落并用0填充" << endl
		<< "3.内部数组，消除初始可消除项后查找消除提示" << endl
		<< "4.n*n的框架(无分隔线),显示初始状态" << endl
		<< "5.n*n的框架(有分隔线),显示初始状态" << endl
		<< "6.n*n的框架(有分隔线),显示初始状态及初始可消除项" << endl
		<< "7.n*n的框架(有分隔线),消除初始可消除项后显示消除提示" << endl
		<< "8.cmd图形界面完整版(有分隔线，鼠标移动时显示坐标，右键退出)" << endl
		<< "9.cmd图形界面完整版" << endl
		<< "0.退出" << endl
		<< "-----------------------------------" << endl
		<< "[请选择0-9] ";
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
