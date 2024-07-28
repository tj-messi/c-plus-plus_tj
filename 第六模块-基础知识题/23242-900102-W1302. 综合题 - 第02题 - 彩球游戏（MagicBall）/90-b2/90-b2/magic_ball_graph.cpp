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

void print_without_edge(int mp[12][12], int r, int c, int op)
{
	cct_setcolor(0);
	cct_cls();
	cct_setfontsize("新宋体", 36, 24);
	if(op==4||op==6)
		cct_setconsoleborder(40, (6 + r) , 40, (6 + r));
	else
		cct_setconsoleborder(40, 5+ r * 2, 40, 5 + r * 2);
	int row, column,rrow,rcolumn;
	cct_getconsoleborder(row, column,rrow,rcolumn);
	cout << "屏幕：" << column << "行" << row << "列" ;
	if ((op == 6||op==7) && !check_same(mp,r,c))
		cout << "(未找到初始可消除项)";
	cout << endl;
	int x, y;
	cct_getxy(x,y);
	for (int i = 1; i <= r; i++)
	{
		if (i == 1)
		{
			cct_showstr(x, y, "╔", 15, 0, 1);
			for (int j = 1; j <= c; j++)
			{
				pause();
				if(op==4||op == 6)
					cct_showstr(x + 2 * j, y, "═", 15, 0, 1);
				else
				{
					cct_showstr(x + 4 * j - 2, y, "═", 15, 0, 1);
					if(j!=c)
						cct_showstr(x + 4 * j , y, "╦", 15, 0, 1);
				}
			}
			if(op==4||op==6)
				cct_showstr(x+2*(c)+2, y, "╗", 15, 0, 1);
			if(op==5||op==7)
				cct_showstr(x + 4 * (c), y, "╗", 15, 0, 1);
		}
		if (op == 4|| op == 6)
			cct_showstr(x, y + i, "║", 15, 0, 1);
		else
			cct_showstr(x, y + 2 * i - 1, "║", 15, 0, 1);
		for (int j = 1; j <= c; j++)
		{
			if(op==4|| op == 6)
				cct_showstr(x + 2 * j, y+i, "〇", mp[i][j]+4, 0, 1);
			else
			{
				cct_showstr(x + 4 * j - 2, y + 2 * i - 1, "〇", mp[i][j] + 4, 0, 1);
				cct_showstr(x + 4 * j, y + 2 * i - 1, "║", 15, 0, 1);
			}
			pause();
		}
		if (op==4||op==6)
			cct_showstr(x + 2  * (c + 1), y + i, "║", 15, 0, 1);
		if (i == r && (op == 4|| op == 6))
		{
			cct_showstr(x, y+r+1, "╚", 15, 0, 1);
			for (int j = 1; j <= c; j++)
			{
				pause();
				cct_showstr(x + 2 * j, y+r+1, "═", 15, 0, 1);
			}
			cct_showstr(x + 2 * (c+1 ), y+r+1, "╝", 15, 0, 1);
		}
		else if(i==r&& (op == 5 || op == 7))
		{
			cct_showstr(x, y + 2*r, "╚", 15, 0, 1);
			for (int j = 1; j <= c; j++)
			{
				pause(); 
				cct_showstr(x + 4 * j-2, y + 2 * r , "═", 15, 0, 1);
				cct_showstr(x + 4 * j, y + 2 * r, "╩", 15, 0, 1);
			}
			cct_showstr(x + 4 * (c ), y + 2 * r , "╝", 15, 0, 1);
		}
		if (i != r && (op == 5||op==7))
		{
			cct_showstr(x, y + 2 * i , "╠", 15, 0, 1);
			for (int j = 1; j <= c; j++)
			{
				pause();
				cct_showstr(x+4*j-2, y + 2 * i, "═", 15, 0, 1);
				cct_showstr(x+4*j, y + 2 * i, "╬", 15, 0, 1);
			}
			cct_showstr(x+4*c, y + 2 * i, "╣", 15, 0, 1);
		}
	}
	cct_setcolor(0);
}
void visual_show_same(int mp[12][12], int r, int c,int op)
{
	int vis[12][12];
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c - 2; j++)
		{
			if (mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2])
			{
				for (int k = 0; k < 3; k++)
				{
					vis[i][j + k] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= r - 2; j++)
		{
			if (mp[j][i] == mp[j + 1][i] && mp[j + 1][i] == mp[j + 2][i])
			{
				for (int k = 0; k < 3; k++)
				{
					vis[j + k][i] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)//●
		{
			if (op == 6)
			{
				if(vis[i][j])
					cct_showstr(2 * j, i + 1, "●" ,mp[i][j] + 4, 0, 1);
			}
			if (op == 7)
			{
				if (vis[i][j])
					cct_showstr(4 * j-2, 2*i , "●", mp[i][j] + 4, 0, 1);
			}
		}
	}
	cct_setcolor(0);
}
void dfs(int mp[12][12], int vis[12][12], int r, int c, int op,int i,int j)
{
	for (int k = 1; k <= 5; k++)
	{
		pause(50);
		cct_showstr(4 * j - 2, 2 * i, "〇", mp[i][j] + 4, 0, 1);
		pause(50);
		cct_showstr(4 * j - 2, 2 * i, "¤", mp[i][j] + 4, 0, 1);
	}
	cct_showstr(4 * j - 2, 2 * i, "〇", 15, 15, 1);
	int dx[] = { 0,1,-1,0,0 }, dy[] = {0, 0,0,-1,1 };
	vis[i][j] = 0;
	for (int l = 0; l < 5; l++)
	{
		int ti = i+dx[l], tj = j+dy[l];
		if (vis[ti][tj])
		{
			dfs(mp, vis, r, c,op, ti, tj);
		}
	}
	mp[i][j] = 0;
}
int visual_remove(int mp[12][12], int r, int c, int op)
{
	int res = 0;
	int vis[12][12];
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c - 2; j++)
		{
			if (mp[i][j] == mp[i][j + 1] && mp[i][j + 1] == mp[i][j + 2])
			{
				for (int k = 0; k < 3; k++)
				{
					vis[i][j + k] = 1;
				}
			}
		}
	}
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= r - 2; j++)
		{
			if (mp[j][i] == mp[j + 1][i] && mp[j + 1][i] == mp[j + 2][i])
			{
				for (int k = 0; k < 3; k++)
				{
					vis[j + k][i] = 1;
				}
			}
		}
	}for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
			{
				res++;
			}
		}
	}
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
			{
				pause(500);
				dfs(mp, vis, r, c, op, i, j);
			}
		}
	}
	cct_setcolor(0);
	return res;
}
void visual_replace_by_0(int mp[12][12],int r,int c)
{
	for (int j = 1; j <= c;j++)
	{
		for (int i = r; i >= 1; i--)
		{
			if (mp[i][j]==0)
			{
				for (int k = i ; k >= 1; k--)
				{
					int cnt = 1;
					if (mp[k][j] != 0)
					{
						while (mp[k + cnt][j] == 0 && (k + cnt <= r))
						{
							cnt++;
						}
						cnt--;
						for (int l=1; l<=cnt; l++)
						{
							pause(50);
							cct_showstr(4 * j - 2, 2 * k+(l-1)*2, "〇", 15, 15, 1);
							pause(50);
							cct_showstr(4 * j - 2, 2 * k+1 + (l - 1) * 2, "〇", mp[k][j] + 4, 0, 1);
							pause(50);
							cct_showstr(4 * j - 2, 2 * k+1 + (l - 1) * 2, "═", 15, 0, 1);
							pause(50);
							cct_showstr(4 * j - 2, 2 * k+2 + (l - 1) * 2, "〇", mp[k][j] + 4, 0, 1);
						}
						mp[k+cnt][j] = mp[k][j];
						mp[k][j] = 0;
					}

				}
	
			}
		}
	}
	cct_setcolor(0);
}
void visual_renew(int mp[12][12],int  r,int c)
{
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (mp[i][j] == 0)
			{
				pause(100);
				mp[i][j] = rand() % 9 + 1;
				cct_showstr(4 * j - 2, 2 * i, "〇", mp[i][j] + 4, 0, 1);
			}
		}
	}
	cct_setcolor(0);
}
void visual_show_potential(int vis[12][12],int mp[12][12], int r, int c)
{
	int dx[5] = { 0,0,1,-1 };
	int dy[5] = { 1,-1,0,0 };
	memset(vis, 0, sizeof vis);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				int nx = i + dx[k], ny = j + dy[k];
				int temp = mp[i][j];
				mp[i][j] = mp[nx][ny];
				mp[nx][ny] = temp;
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
				mp[nx][ny] = mp[i][j];
				mp[i][j] = temp;
			}
		}
	}
	pause(100);
	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (vis[i][j])
			{
				cct_showstr(4 * j - 2, 2 * i, "◎", mp[i][j] + 4, 0, 1);
			}
			else
				cct_showstr(4 * j - 2, 2 * i, "〇", mp[i][j] + 4, 0, 1);
		}
	}
	cct_setcolor(0);
}
bool choose_ball(int mp[12][12],int nr, int nc, int pr, int pc)
{
	if (pr == 0 && pc == 0)
	{
		cct_showstr(4 * nc - 2, 2 * nr, "◎", mp[nr][nc] + 4, 15, 1);
	}
	else if (nr == pr && nc == pc)
	{
		cct_showstr(4 * nc - 2, 2 * nr, "◎", mp[nr][nc] + 4, 0, 1);
	}
	else if ((abs(nr - pr) + abs(nc - pc))>1)
	{
		cct_showstr(4 * pc - 2, 2 * pr, "◎", mp[pr][pc] + 4, 0, 1);
		cct_showstr(4 * nc - 2, 2 * nr, "◎", mp[nr][nc] + 4, 15, 1);
	}
	else
	{
		int temp = mp[nr][nc];
		mp[nr][nc] = mp[pr][pc];
		mp[pr][pc] = temp;
		return true;
	}
	cct_setcolor(0);
	return false;
}