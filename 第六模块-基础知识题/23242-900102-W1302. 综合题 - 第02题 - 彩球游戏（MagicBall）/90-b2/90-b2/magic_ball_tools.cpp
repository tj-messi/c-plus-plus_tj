/*2351114 �쿡�� ��15*/
#include"cmd_console_tools.h"
#include"magic_ball.h"
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <string.h>
#include <Windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

void pause(int time)
{
	Sleep(time);
}
void show_score(int now)
{
	cct_gotoxy(14, 0);
	cout << "����ǰ����:";
	cout << std::right << setw(3) << now;
	cout<< " �Ҽ��˳���";
}
bool check_end(int vis[12][12], int r, int c)
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
				return true;
		}
	}
	return false;
}