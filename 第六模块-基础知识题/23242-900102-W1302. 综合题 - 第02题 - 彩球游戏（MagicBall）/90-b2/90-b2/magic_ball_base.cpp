/*2351114 朱俊泽 信15*/
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

void initial_mp(int mp[12][12],int x,int y)
{			
	int rd = rand() % 9+1;
	mp[x][y] = rd;
}
void show_mp(int mp[12][12],int r,int c)
{
	cout << "  |";
	for (int i = 1; i <= c; i++)
		cout << "  " << i;
	cout << endl << "--+";
	for (int i = 1; i <= c; i++)
		cout << "---";
	cout << endl;
	for (int i = 1; i <= r; i++)
	{
		cout << (char)('A' + (i - 1)) << " |";
		for (int j = 1; j <= c; j++)
		{
			cout <<"  "<< mp[i][j];
		}
		cout << endl;
	}
}
bool check_same(int mp[12][12], int r, int c)
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c - 2; j++)
		{
			if (mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2])
			{
				return true;
			}
		}
	}
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= r - 2; j++)
		{
			if (mp[j][i] == mp[j + 1][i] && mp[j + 1][i] == mp[j + 2][i])
			{
				return true;
			}
		}
	}
	return false;
}
void show_same(int mp[12][12], int r, int c)
{
	int x, y;
	cct_getxy(x, y);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c - 2; j++)
		{
			if (mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2])
			{
				for (int k = 0; k < 3; k++)
				{
					cct_showch(2+3*(j+k), y  - r + i-1, mp[i][j]+'0', 14, 1, 1);
				}
			}
		}
	}
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= r - 2; j++)
		{
			if (mp[j][i] == mp[j+1][i] && mp[j+1][i] == mp[j+2][i])
			{
				for (int k = 0; k < 3; k++)
				{
					cct_showch(2 + 3 * i, y - r + j+k-1, mp[j][i] + '0', 14, 1, 1);
				}
			}
		}
	}
	cct_gotoxy(x, y);
	cct_setcolor(0);
}
bool check_full_0(int mp[12][12], int r, int c)
{
	for (int i = r; i >= 1; i--)
	{
		if (mp[i][c] != 0)
			return false;
	}
	return true;
}
void replace_by_0(int mp[12][12],int r,int c)
{
	int vis[10][10];
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c - 2; j++)
		{
			if (mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2])
			{
				vis[i][j] = 1;
				vis[i][j + 1] = 1;
				vis[i][j + 2] = 1;
			}
		}
	}
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= r - 2; j++)
		{
			if (mp[j][i] == mp[j + 1][i] && mp[j + 1][i] == mp[j + 2][i])
			{
				vis[j][i] = 1;
				vis[j + 1][i] = 1;
				vis[j + 2][i] = 1;
			}
		}
	}
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
				mp[i][j] = 0;
		}
	}
	for (int i = r; i >= 1; i--)
	{
		for (int j = 1; j <= c; j++)
		{
			while (mp[i][j] == 0&&!check_full_0(mp,i,j))
			{
				for (int k = i; k >1; k--)
				{
					 mp[k][j]=mp[k-1][j];
				}
				mp[1][j] = 0;				
			}
		}
	}
}
void show_0(int mp[12][12], int r, int c)
{
	int x, y;
	cct_getxy(x, y);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (mp[i][j]==0)
			{
				cct_showch(2 + 3 * (j), y - r + i - 1, mp[i][j] + '0', 14, 1, 1);
			}
		}
	}
	cct_gotoxy(x, y);
	cct_setcolor(0);
}
void renew(int mp[12][12], int r, int c,int op)
{
	int x, y;
	cct_getxy(x, y);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (mp[i][j] == 0)
			{
				mp[i][j] = rand() % 9 + 1;
				if(op==2)
					cct_showch(2 + 3 * (j), y - r + i - 1, mp[i][j] + '0', 14, 1, 1);
			}
		}
	}
	if (op == 2)
	{
		cct_gotoxy(x, y);
		cct_setcolor(0);
	}
}
void show_potential(int mp[12][12], int r, int c)
{
	int dx[5] = { 0,0,1,-1 };
	int dy[5] = { 1,-1,0,0 };
	int vis[10][10];
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				int nx = i + dx[k], ny = j + dy[k];
				int temp = mp[i][j];
				mp[i][j] = mp[ nx][ny];
				mp[nx][ ny] = temp;
				if (check_same(mp, r, c))
				{
					for (int ni = 1; ni <= r; ni++)
					{
						for (int nj = 1; nj <= c - 2; nj++)
						{
							if (mp[ni][nj] == mp[ni][nj + 1] && mp[ni][nj + 1] == mp[ni][nj + 2])
							{
								vis[i][j] = 1;
								vis[nx][ny] = 1;
							}
						}
					}
					for (int ni = 1; ni <= c; ni++)
					{
						for (int nj = 1; nj <= r - 2; nj++)
						{
							if (mp[nj][ni] == mp[nj + 1][ni] && mp[nj + 1][ni] == mp[nj + 2][ni])
							{
								vis[i][j] = 1;
								vis[nx][ny] = 1;
							}
						}
					}
				}
				mp[nx][ny]=mp[i][j];
				mp[i][j]=temp;
			}
		}
	}
	int x, y;
	cct_getxy(x, y);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
			{
				cct_showch(2 + 3 * (j), y - r + i - 1, mp[i][j] + '0', 14, 1, 1);
			}
		}
	}
	cct_gotoxy(x, y);
	cct_setcolor(0);
}
void game(int op)
{
	int mp[12][12];
	memset(mp, 0, sizeof mp);
	int r, c;
	cct_cls();
	while (1)
	{	
		cout << "请输入行数(5-9)：" << endl;
		cin >> r;
		if (!cin.good() || r > 9 || r < 5)
		{
			cin.clear();
			cin.ignore(9999, '\n');
			continue;
		}
		break;
	}
	while (1)
	{
		cout << "请输入列数(5-9)："<<endl;
		cin >> c;
		if (!cin.good() || c > 9 || c < 5)
		{
			cin.clear();
			cin.ignore(9999, '\n');
			continue;
		}
		break;
	}
	if (op == 1||op==2||op==3)
	{
		for (int i = 1; i <= r;i++)
		{
			for (int j = 1; j <= c; j++)
			{
				initial_mp(mp, i, j);
			}
		}
		cout << "初始数组:" << endl;
		show_mp(mp, r, c);
		cout << endl << "按回车键进行寻找初始可消除项的操作...";
		int cmd;
		while (1)
		{
			cmd = _getch();
			if (cmd == 13)
			{
				break;
			}
		}
		if (check_same(mp, r, c))
		{
			cout <<endl<< "初始可消除项（不同色标识）：" << endl;
			show_mp(mp, r, c);
			show_same(mp,r,c);
		}
		else
		{
			cout << "初始已无可消除项";
			if (op == 1 || op == 2)
				return;
			else
				cout << endl;
		}
		if ((op == 2 || op == 3))
		{
			while(check_same(mp,r,c))
			{
				cout << endl << "按回车键进行数组下落除0操作";
				while (1)
				{
					cmd = _getch();
					if (cmd == 13)
					{
						break;
					}
				}
				replace_by_0(mp, r, c);
				cout << "下落除0后的数组（不同色标识）：" << endl;
				show_mp(mp, r, c);
				show_0(mp, r, c);
				cout << endl << "按回车键进行新值填充";
				while (1)
				{
					cmd = _getch();
					if (cmd == 13)
					{
						break;
					}
				}
				cout << endl << "新值填充后的数组（不同色标识）:" << endl;
				show_mp(mp, r, c);
				renew(mp, r, c,2);
				if (check_same(mp, r, c))
				{
					cout << endl << "初始可消除项（不同色标识）：" << endl;
					show_mp(mp, r, c);
					show_same(mp, r, c);
				}
				else
				{
					cout <<endl<< "初始已无可消除项";
					if(op==1||op==2)
						return;
					if (op == 3)
					{
						cout << endl;
						break;
					}
				}
			}
			cout << endl << "可选择的消除提示（不同色标识）："<<endl;
			show_mp(mp, r, c);
			show_potential(mp, r, c);
		}
	}
	if (op == 4||op==5||op==6||op==7)
	{
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				initial_mp(mp, i, j);
			}
		}
		cout << "初始数组:" << endl;
		show_mp(mp, r, c);
		cout << endl << "按回车键显示图型...";
		int cmd;
		while (1)
		{
			cmd = _getch();
			if (cmd == 13)
			{
				break;
			}
		}
		print_without_edge(mp,r, c, op);
		int x, y;
		cct_getxy(x, y); 
		visual_show_same( mp, r, c,op);
		while (op == 7&&check_same(mp,r,c))
		{
			int vis[12][12];
			memset(vis, 0, sizeof vis);
			cct_gotoxy(x, y);
			cout << endl << "按回车键进行消除及下落除0操作...";
			int cmd;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13)
				{
					break;
				}
			}
			
			visual_remove(mp, r, c, op);
			visual_replace_by_0(mp, r, c);
			cct_gotoxy(x, y);
			cout << "                                   ";
			cct_gotoxy(x, y);
			cout << endl << "按回车键进行新值补充...";
			 cmd=0;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13)
				{
					break;
				}
			}
			visual_renew(mp, r, c);
			if (!check_same(mp, r, c))
			{
				cct_gotoxy(14, 0);
				cout << "（初始已无可消除项）";
			}
			else
			{
				visual_show_same(mp, r, c, op);
				continue;
			}
			cct_gotoxy(x, y);
			cout << "                                   ";
			cct_gotoxy(x, y);
			cout << endl << "按回车键显示消除提示...";
			cmd = 0;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13)
				{
					break;
				}
			}
			visual_show_potential(vis,mp, r, c);

		}
		cct_gotoxy(x, y);
	}
	if (op == 8)
	{
		int vis[12][12];
		memset(vis, 0, sizeof vis);
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				initial_mp(mp, i, j);
			}
		}
		print_without_edge(mp, r, c, 7);
		int x, y;
		cct_getxy(x, y);
		while(check_same(mp,r,c))
		{
			visual_show_same(mp, r, c, 7);
			pause(100);
			visual_remove(mp, r, c, op);
			pause(100);
			visual_replace_by_0(mp, r, c);
			pause(100);
			visual_renew(mp, r, c);
		}
		visual_show_potential(vis,mp, r, c);
		cct_enable_mouse();
		while (1)
		{
			int m_x=0, m_y=0,m_action=0,k1=0,k2=0;
			int res=cct_read_keyboard_and_mouse(m_x, m_y,m_action,k1,k2);
			m_x /= 2;
			char char_r = 'A' + (m_y - 2) / 2;
			int int_c = (m_x + 1) / 2;
			cct_gotoxy(x, y);
			if((m_y%2==0)&&(m_x%2==1)&&((m_y - 2) / 2<r)&&((m_x + 1) / 2<=c))
				cout << endl << "[当前光标]" << char_r << "行 " << int_c << "列";
			else
				cout << endl << "[当前光标]" << "位置非法";
			if (m_action == MOUSE_RIGHT_BUTTON_CLICK)
				return;
			if (m_action == MOUSE_LEFT_BUTTON_CLICK)
			{
				if ((m_y % 2 == 0) && (m_x % 2 == 1))
				{
					visual_show_potential(vis,mp, r, c);
					if (vis[(m_y ) / 2][(m_x + 1) / 2])
					{
						cct_gotoxy(x, y);
						cout << endl << "                              ";
						cct_gotoxy(x, y);
						cout <<endl<< "当前选择" << char_r << "行 " << int_c << "列";
						pause(200);
						return;
					}
					else
					{
						cct_gotoxy(x, y);
						cout << endl << "                              ";
						cct_gotoxy(x, y);
						cout <<endl<< "不能选择" << char_r << "行 " << int_c << "列";
						pause(200);
					}
				}
			}	
		}
		cct_gotoxy(x, y);
	}
	if (op == 9)
	{
		int vis[12][12];
		memset(vis, 0, sizeof vis);
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				initial_mp(mp, i, j);
			}
		}
		print_without_edge(mp, r, c, 7);
		int x, y;
		cct_getxy(x, y);
		while (check_same(mp, r, c))
		{
			visual_show_same(mp, r, c, 7);
			pause(100);
			visual_remove(mp, r, c, op);
			pause(100);
			visual_replace_by_0(mp, r, c);
			pause(100);
			visual_renew(mp, r, c);
		}
		visual_show_potential(vis, mp, r, c);
		cct_enable_mouse();
		int score = 0;
		int pr = 0, pc = 0;
		while (1)
		{
			//visual_show_potential(vis, mp, r, c);
			if (!check_end(vis, r, c))
				break;
			cct_setcolor(0);
			show_score(score);
			int m_x = 0, m_y = 0, m_action = 0, k1 = 0, k2 = 0;
			int res = cct_read_keyboard_and_mouse(m_x, m_y, m_action, k1, k2);
			m_x /= 2;
			char char_r = 'A' + (m_y - 2) / 2;
			int int_c = (m_x + 1) / 2;
			cct_gotoxy(x, y);
			if ((m_y % 2 == 0) && (m_x % 2 == 1) && ((m_y - 2) / 2 < r) && ((m_x + 1) / 2 <= c))
				cout << endl << "[当前光标]" << char_r << "行 " << int_c << "列";
			else
				cout << endl << "[当前光标]" << "位置非法";
			if (m_action == MOUSE_RIGHT_BUTTON_CLICK)
				return;
			if (m_action == MOUSE_LEFT_BUTTON_CLICK)
			{
				if ((m_y % 2 == 0) && (m_x % 2 == 1))
				{
					visual_show_potential(vis, mp, r, c);
					if (vis[(m_y) / 2][(m_x + 1) / 2])
					{
						cct_gotoxy(x, y);
						cout << endl << "                              ";
						cct_gotoxy(x, y);
						cout << endl << "当前选择" << char_r << "行 " << int_c << "列";
						pause(200);
						bool check=choose_ball(mp, (m_y) / 2, (m_x + 1) / 2, pr, pc);
						
						if (check_same(mp, r, c)&& check)
						{
							while(check_same(mp,r,c))
							{
								cct_showstr(4 * pc - 2, 2 * pr, "〇", mp[pr][pc] + 4, 0, 1);
								cct_showstr(4 * (m_x + 1) / 2 - 2, 2 * (m_y) / 2, "〇", mp[(m_y) / 2][(m_x + 1) / 2] + 4, 0, 1);
								visual_show_same(mp, r, c, 7);
								pause(100);
								score += visual_remove(mp, r, c, op);
								pause(100);
								visual_replace_by_0(mp, r, c);
								pause(100);
								visual_renew(mp, r, c);
								memset(vis, 0, sizeof vis);
								visual_show_potential(vis, mp, r, c);
							}
							pr = 0;
							pc = 0;
						}
						else if(check)
						{
							cct_setcolor(0);
							cct_gotoxy(x, y);
							cout << endl << "                              ";
							cct_gotoxy(x, y);
							cout << endl << "不能交换" << 'A' + pr - 1 << "行" << pc << "列" << "<=>" << char_r << "行 " << int_c << "列";
							pause(200);
							int temp = mp[(m_y) / 2][(m_x + 1) / 2];
							mp[(m_y) / 2][(m_x + 1) / 2] = mp[pr][pc];
							mp[pr][pc] = temp;
							cct_showstr(4 * pc - 2, 2 * pr, "◎", mp[pr][pc] + 4, 0, 1);
							cct_showstr(4 * (m_x + 1) / 2 - 2, 2 * (m_y) / 2, "◎", mp[(m_y) / 2][(m_x + 1) / 2] + 4, 0, 1);
							pr = 0;
							pc = 0;
						}
						else
						{
							if (pr == (m_y) / 2 && pc == (m_x + 1) / 2)
							{
								pr = 0;
								pc = 0;
							}
							else
							{
								pr = (m_y) / 2;
								pc = (m_x + 1) / 2;
							}
						}
						
					}
					else
					{
						cct_gotoxy(x, y);
						cout << endl << "                              ";
						cct_gotoxy(x, y);
						cout << endl << "不能选择" << char_r << "行 " << int_c << "列";
						pause(200);
					}
				}
			}
			
		}
		cct_gotoxy(x, y);
	}
}