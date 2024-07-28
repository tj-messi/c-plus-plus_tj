/* 班级 学号 姓名 */
#pragma once

/* ------------------------------------------------------------------------------------------------------

     本文件功能：
	1、为了保证 hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp 能相互访问函数的函数声明
	2、一个以上的cpp中用到的宏定义（#define）或全局只读（const）变量，个数不限
	3、可以参考 cmd_console_tools.h 的写法（认真阅读并体会）
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
