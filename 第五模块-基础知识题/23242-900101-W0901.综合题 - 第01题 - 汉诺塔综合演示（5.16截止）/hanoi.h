/* �༶ ѧ�� ���� */
#pragma once

/* ------------------------------------------------------------------------------------------------------

     ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */
char menu();
void hanoi(int n, char src, char tmp, char dst, int op);
void game(int num);
void pause();
void going(int n, char src, char tmp, char dst, int op);
void move(int n, char src, char dst);
void print_disk();
void game(int op);
void play(int n, char src, char tmp, char dst, int op, int end, char end_char);
void going(int n, char src, char tmp, char dst, int op);
bool checkend(int n, char dst);
void disk_move(int n, char src, char dst, int op);
void print_disk_ini(char src, int sum);
void print_tower();
void print_array_ini();
void print_array();
void print_move(int n, char src, char tmp, char dst);
void print_cnt(int n);
