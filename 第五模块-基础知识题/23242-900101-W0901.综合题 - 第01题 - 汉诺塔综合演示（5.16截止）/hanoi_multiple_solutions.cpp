/*朱俊泽 2351114 信15*/
#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <string.h>
#include <Windows.h>
#include "cmd_console_tools.h"
#include"hanoi.h"
#include<conio.h>
using namespace std;
/* ----------------------------------------------------------------------------------

     本文件功能：
	1、存放被 hanoi_main.cpp 中根据菜单返回值调用的各菜单项对应的执行函数

     本文件要求：
	1、不允许定义外部全局变量（const及#define不在限制范围内）
	2、允许定义静态全局变量（具体需要的数量不要超过文档显示，全局变量的使用准则是：少用、慎用、能不用尽量不用）
	3、静态局部变量的数量不限制，但使用准则也是：少用、慎用、能不用尽量不用
	4、按需加入系统头文件、自定义头文件、命名空间等

   ----------------------------------------------------------------------------------- */
int cnt = 0;
int topa = 0, topb = 0, topc = 0;
int A[15], B[15], C[15];
int display;//是否显示数组
int speed=4;//移动延时.默认为4

void pause()
{
    switch (speed)
    {
        case 0:
            char res;
            while (1)
            {
                res = _getch();
                if (res == 13)
                    break;
            }
            break;
        case 1:
            Sleep(1000);
            break;
        case 2:
            Sleep(500);
            break;
        case 3:
            Sleep(200);
            break;
        case 4:
            Sleep(100);
            break;
        case 5:
            Sleep(50);
            break;
        default:
            break;
    }
}
void move(int n, char src, char dst)
{
    switch (src)
    {
        case 'A':
            A[topa--] = 0;
            break;
        case 'B':
            B[topb--] = 0;
            break;
        case 'C':
            C[topc--] = 0;
            break;
        default:
            break;
    }
    switch (dst)
    {
        case 'A':
            A[++topa] = n;
            break;
        case 'B':
            B[++topb] = n;
            break;
        case 'C':
            C[++topc] = n;
            break;
        default:
            break;
    }
}
void print_cnt(int n)
{
    cout << "第" << setw(4) << cnt << " 步";
}
void print_move(int n, char src, char tmp, char dst)
{
    cout << n << "# " << src << "---->" << dst;
}
void print_array()
{
    cout << "A:";
    for (int i = 1; i <= 10; i++)
    {
        if (A[i] == 0)
            cout << "  ";
        else
            cout << setw(2) << A[i];
    }
    cout << "B:";
    for (int i = 1; i <= 10; i++)
    {
        if (B[i] == 0)
            cout << "  ";
        else
            cout << setw(2) << B[i];
    }
    cout << "C:";
    for (int i = 1; i <= 10; i++)
    {
        if (C[i] == 0)
            cout << "  ";
        else
            cout << setw(2) << C[i];
    }
}
void print_array_ini()
{
    cct_gotoxy(0, 20+17);
    cout << "初始:" << setw(16) << " ";
    print_array();
}
void print_tower()
{
    cct_gotoxy(0, 11+20);
    cout << "=========================" << endl;
    cct_gotoxy(0, 12+20);
    cout << "A          B         C";
    for (int i = 1; i <= 10; i++)
    {
        cct_gotoxy(0, 20+11 - i);
        if (A[i] != 0)
        {
            cout << setw(2) << A[i];
        }
        else
        {
            cout << setw(2) << " ";
            break;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        cct_gotoxy(10, 11+20 - i);
        if (B[i] != 0)
        {
            cout << setw(2) << B[i];
        }
        else
        {
            cout << setw(2) << " ";
            break;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        cct_gotoxy(20, 11+20 - i);
        if (C[i] != 0)
        {
            cout << setw(2) << C[i];
        }
        else
        {
            cout << setw(2) << " ";
            break;
        }
    }
}
void print_disk()
{
    for (int i = 0; i < 3; i++)
    {
        cct_showch(2 + 30 * i, 17, 0, 14, 14, 25);
    }
    for (int j = 0; j < 15; j++)
    {
        cct_showch(14, 17 - j, 0, 14, 14, 1);
        cct_showch(44, 17 - j, 0, 14, 14, 1);
        cct_showch(74, 17 - j, 0, 14, 14, 1);
        Sleep(50);
    }
    cct_gotoxy(0, 35);
    cct_setcolor(0, 7);
}
void print_disk_ini(char src, int sum)
{
    int sum1 = sum;
    if (src == 'A')
    {
        for (int i = 0; i < sum; i++)
        {
            cct_showch(14 - sum1, 16 - i, 0, sum1, sum1, sum1 * 2 + 1);
            Sleep(50);
            sum1--; 
        }
    }
    else if (src == 'B')
    {
        for (int i = 0; i < sum; i++)
        {
            cct_showch(44 - sum1, 16 - i, 0, sum1, sum1, sum1 * 2 + 1);
            Sleep(50);
            sum1--;
        }
    }
    else if (src == 'C')
    {
        for (int i = 0; i < sum; i++)
        {
            cct_showch(74 - sum1, 16 - i,  0, sum1, sum1, sum1 * 2 + 1);
            Sleep(50);
            sum1--; 
        }
    }
    cct_gotoxy(0, 35);
    cct_setcolor(0, 7);
}
void disk_move(int n, char src, char dst, int op)
{
    cct_setcursor(CURSOR_INVISIBLE);
    if (src == 'A')
    {
        for (int i = 17 - topa; i > 2; i--)
        {
            cct_showch(14- A[topa], i, 0, 0, 0, A[topa] * 2 + 1);
            cct_showch(14, i, 0, 14, 14,  1);
            cct_showch(14 - A[topa], i-1, 0, A[topa], A[topa], A[topa] * 2 + 1);
            Sleep((6 - speed) * 30);
        }
        if (dst == 'C')
        {
            for (int i = 0; i < 60; i++)
            {
                cct_showch(14 - A[topa] + i, 2, 0, 0, 0, A[topa] * 2 + 1);
                cct_showch(14 - A[topa] + 1 + i, 2, 0, A[topa], A[topa], A[topa ] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topc; i++)
            {
                cct_showch(74 - A[topa ], 2 + i, 0, 0,0, A[topa] * 2 + 1);
                cct_showch(74 - A[topa ], 2 + i + 1, 0, A[topa], A[topa ], A[topa] * 2 + 1);
                if (i != 0)
                    cct_showch(74, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
        else if (dst == 'B')
        {
            for (int i = 0; i < 30; i++)
            {
                cct_showch(14 - A[topa] + i, 2, 0, 0, 0, A[topa] * 2 + 1);
                cct_showch(14 - A[topa] + 1 + i, 2, 0, A[topa], A[topa], A[topa] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topb; i++)
            {
                cct_showch(44 - A[topa], 2 + i, 0, 0, 0, A[topa] * 2 + 1);
                cct_showch(44 - A[topa], 2 + i + 1, 0, A[topa], A[topa], A[topa] * 2 + 1);
                if (i != 0)
                    cct_showch(44, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
    }
    if (src == 'B')
    {
        for (int i = 17 - topb; i > 2; i--)
        {
            cct_showch(44 - B[topb], i, 0, 0, 0,B[topb] * 2 + 1);
            cct_showch(44, i, 0, 14, 14, 1);
            cct_showch(44 - B[topb], i - 1, 0, B[topb], B[topb], B[topb] * 2 + 1);
            Sleep((6 - speed) * 30);
        }
        if (dst == 'C')
        {
            for (int i = 0; i < 30; i++)
            {
                cct_showch(44 - B[topb ] + i, 2, 0, 0, 0, B[topb ] * 2 + 1);
                cct_showch(44 - B[topb] + 1 + i, 2, 0, B[topb ], B[topb], B[topb ] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topc; i++)
            {
                cct_showch(74 - B[topb ], 2 + i, 0, 0, 0, B[topb ] * 2 + 1);
                cct_showch(74 - B[topb ], 2 + i + 1, 0, B[topb ], B[topb ], B[topb ] * 2 + 1);
                if (i != 0)
                    cct_showch(74, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
        else if (dst == 'A')
        {
            for (int i = 0; i < 30; i++)
            {
                cct_showch(44 - B[topb] - i, 2, 0, 0, 0, B[topb] * 2 + 1);
                cct_showch(44 - B[topb] - 1 - i, 2, 0, B[topb], B[topb], B[topb] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topa; i++)
            {
                cct_showch(14 - B[topb], 2 + i, 0, 0, 0, B[topb] * 2 + 1);
                cct_showch(14 - B[topb], 2 + i + 1, 0, B[topb], B[topb], B[topb] * 2 + 1);
                if (i != 0)
                    cct_showch(14, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
    }
    if (src == 'C')
    {
        
        for (int i = 0; i + topc < 15; i++)
        {
            cct_showch(74 - C[topc], 17 - topc - i, 0, 0, 0, C[topc] * 2 + 1);
            cct_showch(74, 17 - topc - i, 0, 14, 14, 1);
            cct_showch(74 - C[topc], 16 - topc - i, 0, C[topc], C[topc], C[topc] * 2 + 1);
            Sleep((6 - speed) * 30);
        }
        if (dst == 'B')
        {
            for (int i = 0; i < 30; i++)
            {
                cct_showch(74 - C[topc] - i, 2, 0, 0, 0, C[topc] * 2 + 1);
                cct_showch(74 - C[topc] - 1 - i, 2, 0, C[topc], C[topc], C[topc] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topb; i++)
            {
                cct_showch(44 - C[topc], 2 + i, 0, 0, 0, C[topc] * 2 + 1);
                cct_showch(44 - C[topc], 2 + i + 1, 0, C[topc], C[topc], C[topc] * 2 + 1);
                if (i != 0)
                    cct_showch(44, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
        else if (dst == 'A')
        {
            for (int i = 0; i < 60; i++)
            {
                cct_showch(74 - C[topc] - i, 2, 0, 0, 0, C[topc] * 2 + 1);
                cct_showch(74 - C[topc] - 1 - i, 2, 0, C[topc], C[topc], C[topc] * 2 + 1);
                Sleep((6 - speed) * 30);
            }
            for (int i = 0; i < 14 - topa; i++)
            {
                cct_showch(14 - C[topc], 2 + i, 0, 0, 0, C[topc] * 2 + 1);
                cct_showch(14 - C[topc], 2 + i + 1, 0, C[topc], C[topc], C[topc] * 2 + 1);
                if (i != 0)
                    cct_showch(14, 2 + i, 0, 14, 14, 1);
                Sleep((6 - speed) * 30);
            }
        }
    }
    cct_gotoxy(0, 35);
    cct_setcolor(0, 7);
}
bool checkend(int n,char dst )
{
    if (dst == 'a' || dst == 'A')
    {
        return topa == n;
    }
    else if (dst == 'b' || dst == 'B')
    {
        return topb == n;
    }
    else
    {
        return topc == n;
    }

}
void hanoi(int n, char src, char tmp, char dst,int op)
{
    if (n == 1)
    {
        going(n, src, tmp, dst, op);
        return;
    }
    hanoi(n - 1, src, dst, tmp,op);
    going(n, src, tmp, dst, op);
    hanoi(n - 1, tmp, src, dst,op);
}
void going(int n, char src, char tmp, char dst, int op)
{
    switch (op)
    {
        case 1:
            cnt++;
            print_move(n, src, tmp, dst);
            cout << endl;
            break;
        case 2:
            cnt++;
            print_cnt(n);
            cout << "( ";
            print_move(n, src, tmp, dst);
            cout << ")" << endl;
            break;
        case 3:
            cnt++;
            move(n, src, dst);
            print_cnt(n);
            cout << "( ";
            print_move(n, src, tmp, dst);
            cout << ")  ";
            print_array();
            cout << endl;
            break;
        case 4:
            cnt++;
            move(n, src, dst);
             print_tower();
             cct_gotoxy(0, 17+20);
             cout << "第" << setw(4) << cnt << "步" << "(" << n << "#: " << src << "-->" << dst << ")  ";
             print_array();
            pause();
            break;
        case 8:
            cnt++;
            disk_move(n, src, dst, op);
            move(n, src, dst);
            print_tower();
            cct_gotoxy(0, 17 + 20);
            cout << "第" << setw(4) << cnt << "步" << "(" << n << "#: " << src << "-->" << dst << ")  ";
            print_array();
            
            pause();
            break;
        default:
            break;
    }
}
void play(int n, char src, char tmp, char dst, int op,int end,char end_char)
{
    int x, y;
    cct_getxy(x, y);
    while (1)
    {
        cct_setcursor(6);
        cct_showch(x, y, 32, 0, 0, 10);
        cct_showch(0, y + 1, 32, 0, 0, 25);
        cct_setcolor(0, 7);
        cct_gotoxy(x, y);
        cin.get(src);
        if (src == 'Q' || src == 'q')
        {
            cout << "游戏中止!!!!!" << endl;
            Sleep(500);
            return;
        }
        cin.get(dst);
        int cishu = 0;
        for (; getchar() != '\n'; cishu++);
        if (cishu > 0)
            continue;
        if (src == 'A' || src == 'B' || src == 'C' || src == 'a' || src == 'b' || src == 'c')
        {
            if (src >= 'a' && src <= 'c')
                src -= 32;
            if (src == 'A' && dst != 'A')
            {
                if (topa == 0)
                {
                    cout << "原柱为空！" << endl;
                    Sleep(900);
                    continue;
                }
            }
            if (src == 'B' && dst != 'B')
            {
                if (topb == 0)
                {
                    cout << "原柱为空！" << endl;
                    Sleep(900);
                    continue;
                }
            }
            if (src == 'C' && dst != 'C')
            {
                if (topc == 0)
                {
                    cout << "原柱为空！" << endl;
                    Sleep(900);
                    continue;
                }
            }
        }
        else
            continue;
        if (dst == 'A' || dst == 'B' || dst == 'C' || dst == 'a' || dst == 'b' || dst == 'c')
        {
            if (dst >= 'a' && dst <= 'c')
                dst -= 32;
            if (dst == src)
                continue;
        }
        else
            continue;
        if (src == 'A' && dst == 'B')
        {
            n = A[topa];
            if (topb > 0)
                if (A[topa] > B[topb])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        else if (src == 'A' && dst == 'C')
        {
            n = A[topa];
            if (topc > 0)
                if (A[topa] > C[topc])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        else if (src == 'B' && dst == 'C')
        {
            n = B[topb];
            if (topc > 0)
                if (B[topb] > C[topc])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        else if (src == 'B' && dst == 'A')
        {
            n = B[topb];;
            if (topa > 0)
                if (B[topb] > A[topa])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        else if (src == 'C' && dst == 'A')
        {
            n = C[topc];
            if (topa > 0)
                if (C[topc] > A[topa])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        else if (src == 'C'&& topc>0 && dst == 'B')
        {
            n = C[topc];
            if (topb > 0)
                if (C[topc] > B[topb])
                {
                    cout << "大盘压小盘，非法移动!" << endl;
                    Sleep(900);
                    continue;
                }
        }
        disk_move(n, src, dst, op);
        move(n, src, dst);
        print_tower();
        cct_gotoxy(0, 17 + 20);
        cout << "第" << setw(4) << cnt << "步" << "(" << n << "#: " << src << "-->" << dst << ")  ";
        print_array();
        if (checkend(end, end_char))
        {
            cct_gotoxy(0, 20 + 17 + 1 + 1);
            cout << "游戏结束!!!!!" << endl;
            break;
        }
        pause();
    }

}
void game(int op)
{
    
    cnt=0;
    topa = 0, topb = 0, topc = 0;
    int n;
    char  src, tmp, dst;
    if (op != 5)
    {
        while (1) {
        cout << "请输入汉诺塔的层数(1-10)" << endl;
        cin >> n;
        if (cin.fail()) {
            cin.clear(); cin.ignore(9999, '\n');
            continue;
        }
        if (n < 1 || n>10) {
            cin.clear();
            cin.ignore(9999, '\n');
            continue;
        }
        cin.ignore(9999, '\n');
        break;//到底 
        }
        while (1) {
            cout << "请输入起始柱(A-C)" << endl;
             cin >> src;
            if (cin.fail()) {
                cin.clear();
               cin.ignore(9999, '\n');
               continue;
            }
            if (!(((src - 0) >= ('A' - 0) && (src - 0) <= ('C' - 0)) || ((src - 0) >= ('a' - 0) && (
                src - 0) <= ('c' - 0)))) {
                cin.ignore(9999, '\n');
            continue;
        }
        cin.ignore(9999, '\n');
        break;//到底 
    }
    if (src > 70)
    {
        src -= 32;
    }
    while (1) {
        cout << "请输入目标柱(A-C)" << endl;
        cin >> dst;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999, '\n');
            continue;
        }
        if (!(((dst - 0) >= ('A' - 0) && (dst - 0) <= ('C' - 0)) || ((dst - 0) >= ('a' - 0) && (dst - 0) <= ('c' - 0)))) {
            cin.ignore(9999, '\n');
            continue;
        }
        if (dst == src || dst == src + 32 || dst == src - 32)
        {
            cout << "目标柱(" << src << ")不能与起始柱(" << src << ")相同" << endl;
            cin.clear();
            cin.ignore(9999, '\n');
            continue;
        }
        cin.ignore(9999, '\n');
        break;//到底 
    }
    if (dst > 70)
    {
        dst -= 32;
    }
    tmp = (3 * 'B' - src - dst);
    //初始化
    for (int i = 1; i <= 10; i++)
    {
        A[i] = 0; B[i] = 0; C[i] = 0;
    }
    if (src == 'A')
    {
        for (int i = n; i >= 1; i--)
        {
            A[i] = ++topa;
        }
    }
    else if (src == 'B')
    {
        for (int i = n; i >= 1; i--)
        {
            B[i] = ++topb;
        }
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            C[i] = ++topc;
        }
    }

   
    if (op == 4||op==8)
    {
        while (1)
        {
            cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
            cin >> speed;
            if (!cin.good())
            {
                cin.clear();
                cin.ignore(9999, '\n');
                continue;
            }
            else if (speed > 5 || speed < 0)
            {
                cin.clear();
                cin.ignore(9999, '\n');
                continue;
            }
            else
            {
                cin.clear();
                cin.ignore(9999, '\n');
                break;
            }
        }
    }
    }
    if (op == 0 || op == 5)
        cout << op << endl;
    if (op >= 1 && op <= 4)
    {
        if (op == 4)
        {
            cct_cls();
            cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed;
            print_tower();
            print_array_ini();
        }
        pause();
        hanoi(n, src, tmp, dst,  op);
    }
    else if (op==5)
    {
        cct_cls();
        print_disk();
    }
    else if (op == 6||op==7)
    {
        cct_cls();
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层" << endl;
        print_disk();
        print_disk_ini(src, n);
        if (op == 7)
            disk_move(n, src, dst,op);  
        cct_setcursor(6);
    }
    else if (op == 8)
    {
        cct_cls();
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed;
        print_disk();
        print_disk_ini(src, n);
        print_tower();
        print_array_ini();
        pause();
        hanoi(n, src, tmp, dst, op);
    }
    else if(op==9)
    {
        cct_cls();
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed;
        print_disk();
        print_disk_ini(src, n);
        print_tower();
        print_array_ini();
        cct_gotoxy(0, 20 + 17 + 1);
        cout << "请输入移动的柱号(命令形式：AC=A顶端的盘子移动到C，Q=退出) ：";
        pause();
        play(n, src,tmp,dst, op,n,dst);
    }
}