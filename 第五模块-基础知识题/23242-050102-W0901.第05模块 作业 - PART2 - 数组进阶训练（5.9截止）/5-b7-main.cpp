/*朱俊泽 2351114 信15*/
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include"5-b7.h"
using namespace std;

int cnt = 0;
int topa = 0, topb = 0, topc = 0;
int A[15], B[15], C[15];
int display;//是否显示数组
int speed;//移动延时

void print_tower()
{
    cct_gotoxy(0, 11);
    cout << "=========================" << endl;
    cct_gotoxy(0, 12);
    cout << "A          B         C";
    for (int i = 1; i <= 10; i++)
    {
        cct_gotoxy(0, 11 - i);
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
        cct_gotoxy(10, 11 - i);
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
        cct_gotoxy(20, 11 - i);
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
void display_array()
{
    cout<<"A:";
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
    cct_gotoxy(0, 17);
    cout << "第" << setw(4) << cnt << "步" << "(" << n << "#: " << src << "-->" << dst << ")  ";
    if (display == 1)
    {
        display_array(); 
    }
}
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
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1)
    {
        cnt++;
        move(n, src, dst);
        pause();
        print_tower();
        pause();
        return;
    }
    hanoi(n - 1, src, dst, tmp);
    cnt++;
    move(n, src, dst);
    pause();
    print_tower();
    pause();
    hanoi(n - 1, tmp, src, dst);
}
int main()
{
    int n;
    char src, tmp, dst;
    while (1) {
        cout << "请输入汉诺塔的层数(1-16)" << endl;
        cin >> n;
        if (cin.fail()) {
            cin.clear();
            continue;
        }
        if (n < 1 || n>16) {
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
        if (!(((src - 0) >= ('A' - 0) && (src - 0) <= ('C' - 0)) || ((src - 0) >= ('a' - 0) && (src - 0) <= ('c' - 0)))) {
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
    while (1)
    {
        cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
        cin >> display;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(9999, '\n');
            continue;
        }
        else if (display > 1 || display < 0)
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
    cct_cls();
    if (display == 1)
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed << "，显示内部数组值" << endl;
    else
        cout << "从 " << src << " 移动到 " << dst<< "，共 " << n << " 层，延时设置为 " << speed << "，不显示内部数组值" << endl;
    if (display == 1)
    {
        cct_gotoxy(0, 17);
        cout << "初始:" << setw(16) << " ";
        display_array();
    }
    pause();
    print_tower();
    hanoi(n, src, tmp, dst);
    cct_gotoxy(0, 20);
	system("pause"); //最后用这句表示暂停（注意：只适合于特定程序，无特别声明的程序加此句则得分为0）
	return 0;
}
