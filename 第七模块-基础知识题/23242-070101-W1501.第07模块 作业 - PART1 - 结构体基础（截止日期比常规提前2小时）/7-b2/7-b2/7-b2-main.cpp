/* 学号 班级 姓名*/
#include <iostream>
#include <conio.h>
using namespace std;

#include "cmd_console_tools.h"
#include "7-b2.h"

/***************************************************************************
  函数名称：
  功    能：显示提示信息
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
static void to_be_continued(const char* prompt = NULL, const int X = 0, const int Y = 28)
{
	cct_setcolor(); //恢复缺省颜色
	cct_gotoxy(X, Y);

	if (prompt)
		cout << prompt << "，按回车键继续...";
	else
		cout << "按回车键继续...";

	/* 忽略除回车键外的所有输入（注意：_getch的回车是\r，而getchar是\n）*/
	while (_getch() != '\r')
		;

	return;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	const char menu[][MAX_ITEM_LEN] = {
		" 1.内部数组，生成初始状态，寻找是否有初始可消除项",
		" 2.内部数组，消除初始可消除项后非0项下落并用0填充",
		" 3.内部数组，消除初始可消除项后查找消除提示",
		" 4.n*n的框架(无分隔线)，显示初始状态",
		" 5.n*n的框架(有分隔线)，显示初始状态",
		" 6.n*n的框架(无分隔线)，显示初始状态及初始可消除项",
		" 7.n*n的框架(有分隔线)，消除初始可消除项后显示消除提示",
		" 8.cmd图形界面完整版(有分隔线，鼠标移动时显示坐标，右键退出)",
		" 9.cmd图形界面完整版",
		"10,玩会原神",
		"11.玩会钢铁雄心",
		"12.玩会英雄联盟",
		" 0.退出",
		NULL
	};

	if (1) {
		cct_setconsoleborder(120, 35);
		cct_cls();
		cout << "测试1：在窗口中完整显示，宽度足够容纳最长的菜单项，高度足够容纳所有的菜单项" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单1"; //标题是单数字符
		parameter.start_x = 30;
		parameter.start_y = 10;
		parameter.width = 80;	//不含菜单框左右框线
		parameter.high = 15;	//不含菜单框上下框线，如果超过了菜单的实际项数，则缩为实际项数
		parameter.bg_color = COLOR_BLACK;	//背景色
		parameter.fg_color = COLOR_HWHITE; //前景色

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 20);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	if (1) {
		cct_setconsoleborder(120, 35);
		cct_cls();
		cout << "测试2：在窗口中完整显示，宽度足够容纳最长的菜单项，但高度不足容纳所有的菜单项" << endl;
		cout << "       菜单项需要上下滚屏" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单二"; //标题是双数字符
		parameter.start_x = 20;
		parameter.start_y = 5;
		parameter.width = 59;	//不含菜单框左右框线，此处和给出60的最终显示应该一致
		parameter.high = 5;	//不含菜单框上下框线，如果超过了菜单的实际项数，则需要滚动
		parameter.bg_color = COLOR_RED;	//背景色
		parameter.fg_color = COLOR_HYELLOW; //前景色

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 20);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	if (1) {
		cct_setconsoleborder(120, 35);
		cct_cls();
		cout << "测试3：在窗口中完整显示，宽度不足以容纳最长的菜单项，高度足够容纳所有的菜单项" << endl;
		cout << "       超过宽度的菜单项需要截断" << endl;
		cout << "       截断时需要考虑半个汉字问题，即如果最后只剩下一个字符位置，但需要打印一个汉字时，跳过该汉字，用空格填充" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单三"; //标题是双数字符
		parameter.start_x = 10;
		parameter.start_y = 8;
		parameter.width = 40;	//不含菜单框左右框线
		parameter.high = 20;	//不含菜单框上下框线，如果超过了菜单的实际项数，则需要滚动
		parameter.bg_color = COLOR_HWHITE;	//背景色
		parameter.fg_color = COLOR_BLACK; //前景色

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 23);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	if (1) {
		cct_setconsoleborder(120, 35);
		cct_cls();
		cout << "测试4：在窗口中完整显示，宽度不足以容纳title的长度，高度足够容纳所有的菜单项" << endl;
		cout << "       最小宽度为完整显示title所需的宽度，超过宽度的菜单项需要截断" << endl;
		cout << "       截断时需要考虑半个汉字问题，即如果最后只剩下一个字符位置，但需要打印一个汉字时，跳过该汉字，用空格填充" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单4-加长版"; //标题是双数字符
		parameter.start_x = 10;
		parameter.start_y = 8;
		parameter.width = 6;	//不含菜单框左右框线（小于title的长度）
		parameter.high = 20;	//不含菜单框上下框线，如果超过了菜单的实际项数，则需要滚动
		parameter.bg_color = COLOR_HWHITE;	//背景色
		parameter.fg_color = COLOR_BLACK; //前景色

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 23);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	if (1) {
		cct_setconsoleborder(120, 35);
		cct_cls();
		cct_gotoxy(0, 15);
		cout << "测试5：在窗口中完整显示，宽度不足以容纳最长的菜单项，高度不足以容纳所有的菜单项" << endl;
		cout << "       超过宽度的菜单项需要截断，菜单项需要上下滚屏" << endl;
		cout << "       截断时需要考虑半个汉字问题，即如果最后只剩下一个字符位置，但需要打印一个汉字时，跳过该汉字，用空格填充" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单5"; //标题是单数字符
		parameter.start_x = 0;
		parameter.start_y = 0;
		parameter.width = 40;		//不含菜单框左右线条（注意，宽度不够，此时要保持半个汉字不乱）
		parameter.high = 5;		//不含菜单框上下线条
		parameter.bg_color = COLOR_YELLOW;
		parameter.fg_color = COLOR_HBLUE;

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 20);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	if (1) {	//高度大于项数，宽度大于串长，宽度越界
		cct_cls();
		cct_setconsoleborder(80, 30);
		cct_gotoxy(0, 15);
		cout << "测试6：菜单的显示宽度超过了窗口宽度，需要折返到下一行的起始位置（包括title）" << endl;
		cout << "       菜单项需要上下滚屏且显示不乱" << endl;
		cout << "       为了减负，本测试项不测试宽度不够的情况" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单6"; //标题是单数字符
		parameter.start_x = 44;//不含菜单框左右线条（注意，本测试项不测试其实位置为奇数的情况）
		parameter.start_y = 2;
		parameter.width = 70;	//不含菜单框左右线条（注意，本测试项不测试宽度不够的情况）
		parameter.high = 7;		//不含菜单框上下线条
		parameter.bg_color = COLOR_HBLUE;
		parameter.fg_color = COLOR_YELLOW;

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 20);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;

		to_be_continued();
	}
	
	if (1) {	//高度大于项数，宽度大于串长，宽度越界但可滚动
		cct_cls();
		cct_setconsoleborder(80, 30, 200, 50); //注意：四个参数
		cct_gotoxy(0, 15);
		cout << "测试7：菜单的显示宽度超过了窗口宽度，但是未超过缓冲区的宽度" << endl;
		cout << "       不需要折返打印，但是后面的内容需要移动cmd窗口下方的水平滚动杆才能看到" << endl;
		cout << "       超过宽度的菜单项需要截断，菜单项需要上下滚屏" << endl;
		cout << "       截断时需要考虑半个汉字问题，即如果最后只剩下一个字符位置，但需要打印一个汉字时，跳过该汉字，用空格填充" << endl;

		struct PopMenu parameter;
		parameter.title = "彩球菜单7";
		parameter.start_x = 60;
		parameter.start_y = 0;
		parameter.width = 40;	//不含菜单框左右线条（注意，宽度不够，此时要保持半个汉字不乱）
		parameter.high = 8;		//不含菜单框上下线条
		parameter.bg_color = COLOR_BLUE;
		parameter.fg_color = COLOR_HYELLOW;

		/* 调用pop_menu函数，返回选择的菜单项数（从1开始计数）*/
		int ret = pop_menu(menu, &parameter);

		cct_gotoxy(0, 20);
		cct_setcolor(); //恢复缺省颜色
		if (ret > 0)
			cout << "本次选择为菜单的第" << ret << "项." << endl;
		else
			cout << "本次未选择菜单." << endl;
		to_be_continued();
	}

	return 0;
}
