/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <conio.h>
#include<cstring>
using namespace std;

#include "cmd_console_tools.h"
#include "7-b2.h"
/* 1���������ͷ�ļ�
   2����������ȫ�ֱ�����������̬ȫ�֣���������const��define
   3����������Ҫ�Ľṹ�塢�����ȣ������ޱ�Դ�����ļ�ʹ�� */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    �����������Դ�����ļ���Ҫ�ĺ���������Ϊstatic����
***************************************************************************/
static int check_length(const char* str)
{
	int res = 0;
	while (*str != '\0')
	{
		res++;
		str++;
	}
	return res;
}

static int count_menu_items(const char menu[][MAX_ITEM_LEN]) {
	int count = 0;
	while (menu[count][0] != '\0')
	{ // ��鵱ǰ�ַ����Ƿ�Ϊ��  
		count++;
	}
	return count; // ���طǿ��ַ���������  
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ��������������õĺ���������������ͷ�ļ���
  ���������cct_showstr(original_para->start_x, original_para->start_y, menu[0], original_para->bg_color, original_para->fg_color, 1);
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* original_para)
{
	int i=0,pi=-1;
	int x = original_para->start_x, y = original_para->start_y;
	int bg = original_para->bg_color, fg = original_para->fg_color;
	int max_high = count_menu_items(menu);
	if (original_para->high >= count_menu_items(menu))//�߶ȹ�
	{
		int high = count_menu_items(menu);
		int width;
		if (original_para->width <= check_length(original_para->title))
		{
			 width = check_length(original_para->title);//��ʱ��Ҫ�޸�
		}
		else
			width = original_para->width;
		if (width % 2 != 0)width++;
		cct_showstr(x, y, "�X", bg, fg, 1);
		cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
		cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
		cct_showstr(x + 2 + (width - check_length(original_para->title) )/ 2, y, original_para->title, bg, fg, 1);
		for (int i = 1; i <= high; i++)
		{
			cct_showstr(x, y+i, "�U", bg, fg, 1);
			cct_showstr(x + 2 + width, y + i, "�U", bg, fg, 1);
		}
		cct_showstr(x, y+high+1, "�^", bg, fg, 1);
		cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
		cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);
		for (int i = 0; i < high; i++)
		{
			if (check_length(menu[i]) >= width)
			{
				cct_showstr(x + 2, y + i + 1, " ", bg, fg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i], bg, fg, 1);
				cct_setcolor(0);
				cct_showstr(x + 4 + width, y + i + 1, " ", 0, 0, check_length(menu[i]) - width);
				cct_showstr(x + 2 + width, y + i + 1, "�U", bg, fg, 1);
			}
			else
			{
				cct_showstr(x + 2, y + i + 1, " ", bg, fg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i], bg, fg, 1);
				cct_showstr(x + 2 + check_length(menu[i]), y + i + 1, " ", bg, fg, (width - check_length(menu[i])));
			}
		}
		cct_setcursor(CURSOR_INVISIBLE);
		i = 0;
		while (1)
		{
			if (pi != -1&&pi!=i)
			{
				if (check_length(menu[pi]) >= width)
				{
					cct_showstr(x + 2, y + pi + 1, " ", bg, fg, check_length(menu[pi]));
					cct_showstr(x + 2, y + pi + 1, menu[pi], bg, fg, 1);
					cct_setcolor(0);
					cct_showstr(x + 4 + width, y + pi + 1, " ", 0, 0, check_length(menu[pi]) - width);
					cct_showstr(x + 2 + width, y + pi + 1, "�U", bg, fg, 1);
				}
				else
				{
					cct_showstr(x + 2, y + pi + 1, " ", bg, fg, check_length(menu[pi]));
					cct_showstr(x + 2, y + pi + 1, menu[pi], bg, fg, 1);
					cct_showstr(x + 2 + check_length(menu[pi]), y + pi + 1, " ", bg, fg, (width - check_length(menu[pi])));
				}
			}
			if (check_length(menu[i]) >= width && pi != i)
			{
				cct_showstr(x + 2, y + i + 1, " ", fg, bg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i],fg , bg, 1);
				cct_setcolor(0);
				cct_showstr(x + 4 + width, y + i + 1, " ", 0, 0, check_length(menu[i]) - width);
				cct_showstr(x + 2 + width, y + i + 1, "�U", fg, bg, 1);
			}
			else if( pi != i)
			{
				cct_showstr(x + 2, y + i + 1, " ",fg , bg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i], fg, bg, 1);
				cct_showstr(x + 2 + check_length(menu[i]), y + i + 1, " ",fg ,bg , (width - check_length(menu[i])));
			}
			cct_showstr(x, y, "�X", bg, fg, 1);
			cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
			cct_showstr(x + 2 + (width - check_length(original_para->title)) / 2, y, original_para->title, bg, fg, 1);
			for (int i = 1; i <= high; i++)
			{
				cct_showstr(x, y + i, "�U", bg, fg, 1);
				cct_showstr(x + 2 + width, y + i, "�U", bg, fg, 1);
			}
			cct_showstr(x, y + high + 1, "�^", bg, fg, 1);
			cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);
			int cmd = 0;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13||cmd==72||cmd==80||cmd==27)
				{
					break;
				}
			}
			pi = i;
			if (cmd == 13)
				break;
			else if (cmd == 72)
			{
				if (i == 0)
					continue;
				else
					i--;
			}
			else if (cmd == 80)
			{
				if (i == max_high - 1)
					continue;
				else
					i++;
			}
			else if (cmd == 27)
				return 0;
		}
	}
	else//��
	{
		int bh, bw,h,w;
		cct_getconsoleborder(bw, bh,h,w);
		int high = original_para->high;
		int width;
		if (original_para->width <= check_length(original_para->title))
		{
			width = check_length(original_para->title);//��ʱ��Ҫ�޸�
		}
		else
		 width = original_para->width;
		if (width % 2 != 0)width++;
		if(x+width>bw && x + width >= h)
		{
			cct_showstr(x, y, "�X", bg, fg, 1);
			cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
			cct_showstr(x + 2 + (width - check_length(original_para->title)) / 2, y, original_para->title, bg, fg, 1);
			for (int i = 1; i <= high; i++)
			{
				cct_showstr(x, y + i, "�U", bg, fg, 1);
				cct_showstr((x + 2 + width)%bw, y + i +1, "�U", bg, fg, 1);
			}
			cct_showstr(x, y + high + 1, "�^", bg, fg, 1);
			cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);
		}
		else 
		{
			cct_showstr(x, y, "�X", bg, fg, 1);
			cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
			cct_showstr(x + 2 + (width - check_length(original_para->title)) / 2, y, original_para->title, bg, fg, 1);
			for (int i = 1; i <= high; i++)
			{
				cct_showstr(x, y + i, "�U", bg, fg, 1);
				cct_showstr(x + 2 + width, y + i, "�U", bg, fg, 1);
			}
			cct_showstr(x, y + high + 1, "�^", bg, fg, 1);
			cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
			cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);			
		}
		for (int i = 0; i < high; i++)
		{
			if (check_length(menu[i]) >= width)
			{
				cct_showstr(x + 2, y + i + 1, " ", bg, fg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i], bg, fg, 1);
				cct_setcolor(0);
				cct_showstr(x + 4 + width, y + i + 1, " ", 0, 0, check_length(menu[i]) - width);
				cct_showstr(x + 2 + width, y + i + 1, "�U", bg, fg, 1);
			}
			else
			{
				cct_showstr(x + 2, y + i + 1, " ", bg, fg, check_length(menu[i]));
				cct_showstr(x + 2, y + i + 1, menu[i], bg, fg, 1);
				cct_showstr(x + 2 + check_length(menu[i]), y + i + 1, " ", bg, fg, (width - check_length(menu[i])));
			}
		}
		cct_setcursor(CURSOR_INVISIBLE);
		int diff = 0;
		i = 0;
		pi = high;
		int pre = -1;
		while (1)
		{
			if(!((pre == 0 && i == 0) || (pre == max_high-1 && i == max_high-1)))
			{
				for (int i = pi - high; i < pi; i++)
				{
					if (check_length(menu[i]) >= width)
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", bg, fg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], bg, fg, 1);
						cct_setcolor(0);
						cct_showstr(x + 4 + width, y - diff + i + 1, " ", 0, 0, check_length(menu[i]) - width);
						cct_showstr(x + 2 + width, y - diff + i + 1, "�U", bg, fg, 1);
					}
					else
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", bg, fg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], bg, fg, 1);
						cct_showstr(x + 2 + check_length(menu[i]), y - diff + i + 1, " ", bg, fg, (width - check_length(menu[i])));
					}
				}
				if (i < high)
				{
					if (check_length(menu[i]) >= width)
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", fg, bg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], fg, bg, 1);
						cct_setcolor(0);
						cct_showstr(x + 4 + width, y - diff + i + 1, " ", 0, 0, check_length(menu[i]) - width);
						cct_showstr(x + 2 + width, y - diff + i + 1, "�U", fg, bg, 1);
					}
					else
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", fg, bg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], fg, bg, 1);
						cct_showstr(x + 2 + check_length(menu[i]), y - diff + i + 1, " ", fg, bg, (width - check_length(menu[i])));
					}
				}
				else
				{
					if (check_length(menu[i]) >= width)
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", fg, bg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], fg, bg, 1);
						cct_setcolor(0);
						cct_showstr(x + 4 + width, y - diff + i + 1, " ", 0, 0, check_length(menu[i]) - width);
						cct_showstr(x + 2 + width, y - diff + i + 1, "�U", fg, bg, 1);
					}
					else
					{
						cct_showstr(x + 2, y - diff + i + 1, " ", fg, bg, check_length(menu[i]));
						cct_showstr(x + 2, y - diff + i + 1, menu[i], fg, bg, 1);
						cct_showstr(x + 2 + check_length(menu[i]), y - diff + i + 1, " ", fg, bg, (width - check_length(menu[i])));
					}
				}
				if (x + width > bw && x + width >= h)
				{
					cct_showstr(x, y, "�X", bg, fg, 1);
					cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
					cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
					cct_showstr(x + 2 + (width - check_length(original_para->title)) / 2, y, original_para->title, bg, fg, 1);
					for (int i = 1; i <= high; i++)
					{
						cct_showstr(x, y + i, "�U", bg, fg, 1);
						cct_showstr((x + 2 + width) % bw, y + i + 1, "�U", bg, fg, 1);
					}
					cct_showstr(x, y + high + 1, "�^", bg, fg, 1);
					cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
					cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);
				}
				else
				{
					cct_showstr(x, y, "�X", bg, fg, 1);
					cct_showstr(x + 2, y, "�T", bg, fg, width / 2);
					cct_showstr(x + 2 + width, y, "�[", bg, fg, 1);
					cct_showstr(x + 2 + (width - check_length(original_para->title)) / 2, y, original_para->title, bg, fg, 1);
					for (int i = 1; i <= high; i++)
					{
						cct_showstr(x, y + i, "�U", bg, fg, 1);
						cct_showstr(x + 2 + width, y + i, "�U", bg, fg, 1);
					}
					cct_showstr(x, y + high + 1, "�^", bg, fg, 1);
					cct_showstr(x + 2, y + high + 1, "�T", bg, fg, width / 2);
					cct_showstr(x + 2 + width, y + high + 1, "�a", bg, fg, 1);
				}
			}
			int cmd = 0;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13 || cmd == 72 || cmd == 80 || cmd == 27)
				{
					break;
				}
			}
			pre = i;
			if (cmd == 13)
				break;
			else if (cmd == 72)
			{
				if (i == 0)
				{
					continue;
				}
				else
				{
					i--;
					if ( pi-i> high)
						pi--;
				}
			}
			else if (cmd == 80)
			{
				if (i == max_high-1)
					continue;
				else
				{
					i++;
					if (i - pi >=0)
						pi++;
				}
			}
			else if (cmd == 27)
				return 0;
			diff = pi - high;
			if (diff < 0)diff = 0;
		}
	}
	return i+1; //���践��
}
