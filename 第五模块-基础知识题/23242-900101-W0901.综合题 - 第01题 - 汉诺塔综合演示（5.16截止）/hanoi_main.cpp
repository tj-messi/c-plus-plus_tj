/*�쿡�� 2351114 ��15*/
#include"cmd_console_tools.h"
#include"hanoi.h"
#include<iostream>
#include<conio.h>
using namespace std;
/* ----------------------------------------------------------------------------------

     ���ļ����ܣ�
	1����main����
	2����ʼ����Ļ
	3�����ò˵�������hanoi_menu.cpp�У�������ѡ��
	4������ѡ����ò˵������Ӧ��ִ�к�����hanoi_multiple_solutions.cpp�У�

     ���ļ�Ҫ��
	1����������ȫ�ֱ��������ⲿȫ�ֺ;�̬ȫ�֣�const��#define�������Ʒ�Χ�ڣ�
	2����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
	3���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */

int main()
{
	/* demo������ִ�д˾䣬��cmd��������Ϊ40��x120�У����������120�У�����9000�У���cmd�����Ҳ���д�ֱ�����ˣ�*/
	cct_setconsoleborder(120, 40, 120, 9000);
		while (1)
		{
			char op = menu();
			switch (op)  //������� ��������ֱ���
			{
				case '0':
					cout << endl;
					return 0;
				case '1':
					game(1);
					break;
				case '2':
					game(2);
					break;
				case '3':
					game(3);
					break;
				case '4':
					game(4);
					break;
				case '5':
					game(5);
					break;
				case '6':
					game(6);
					break;
				case '7':
					game(7);
					break;
				case '8':
					game(8);
					break;
				case '9':
					game(9);
					break;
				default:
					break;
			}
			cout << endl << "���س�������" << endl;
			int cmd;
			while (1)
			{
				cmd = _getch();
				if (cmd == 13)
				{
					cct_cls();
					break;
				}

			}
		}
	

	return 0;
}
