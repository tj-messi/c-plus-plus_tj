/*2351114 朱俊泽 信15*/
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//定义*组成的边框的宽度
const int MAX_Y = 17;	//定义*组成的边框的高度

/***************************************************************************
  函数名称：
  功    能：完成与system("cls")一样的功能，但效率高
  输入参数：
  返 回 值：
  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* 取当前缓冲区信息 */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* 填充字符 */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* 填充属性 */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* 光标回到(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  函数名称：gotoxy
  功    能：将光标移动到指定位置
  输入参数：HANDLE hout ：输出设备句柄
            int X       ：指定位置的x坐标
            int Y       ：指定位置的y坐标
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  函数名称：showch
  功    能：在指定位置处打印一个指定的字符
  输入参数：HANDLE hout ：输出设备句柄
            int X       ：指定位置的x坐标
            int Y       ：指定位置的y坐标
            char ch     ：要打印的字符
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  函数名称：init_border
  功    能：显示初始的边框及随机字符
  输入参数：HANDLE hout：输出设备句柄
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- 按需增加的若干函数可以放在此处 --*/

void menu(){
		cout << "1.用I、J、K、L键控制上下左右(大小写均可，边界停止)（允许按左箭头键时向下移动）" << endl;
		cout << "2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)（允许按左箭头键时向下移动）" << endl;
		cout << "3.用箭头键控制上下左右，边界停止（按大写HPKM时不准移动）" << endl;
		cout << "4.用箭头键控制上下左右，边界回绕（按大写HPKM时不准移动）" << endl;
		cout << "5.用I、J、K、L键控制上下左右(大小写均可，边界停止)（按左箭头键不准向下移动）" << endl;
		cout << "6.用I、J、K、L键控制上下左右(大小写均可，边界回绕)（按左箭头键不准向下移动）" << endl;
		cout << "0.退出" << endl;
		cout << "[请选择0 - 6]";
}

void move(int choose,HANDLE hout,int x,int y)
{
	while(1){
		int dir;
		dir=_getch();
		
		if(dir=='q'||dir=='Q'){//结束退出 
			gotoxy(hout, 0, 23);
			cout << "游戏结束，按回车键退出." << endl;
			while(1){
				char dir_char=_getch();
				int dir=dir_char-0;
				if(dir==13){
					return;
				}
			}
		}
		if(dir==32){
			//消除 
			putchar(32);
			gotoxy(hout,x,y);
		}
		
		//jkl的控制 
		if(choose==1||choose==2){
			if(dir=='j'||dir=='J'){
				if(choose==2&&x==1){
					x=69;
				}
				else{
					x>1? x-- : 0;
				}	
			}
			if(dir=='k'||dir=='K'){
				if(choose==2&&y==17){
					y=1;
				}
				else{
				    y<17?y++:0;
				}	
			}
			if(dir=='l'||dir=='L'){
				if(choose==2&&x==69){
					x=1;
				}
				else{
					x<69?x++:0;
				}	
			}
			if(dir=='i'||dir=='I'){
				if(choose==2&&y==1){
					y=17;
				}
				else{
					y>1?y--:0;
				}	
			}
			//处理之后移动
			gotoxy(hout, x, y);
		}
		//方向键控制 
		if(choose==3||choose==4){
			if(dir==224){
				dir = _getch();
				if(dir==75){
					if(choose==4&&x==1){
						x=69;
					}
					else{
						x>1? x-- : 0;
					}	
				}
				if(dir==80){
					if(choose==4&&y==17){
						y=1;
					}
					else{
						y<17?y++:0;
					}	
				}
				if(dir==77){
					if(choose==4&&x==69){
						x=1;
					}
					else{
						x<69?x++:0;
					}	
				}
				if(dir==72){
					if(choose==4&&y==1){
						y=17;
					}
					else{
						y>1?y--:0;
					}	
				}
				//处理之后移动
				gotoxy(hout, x, y);
			}
		}
		
		if(choose==5||choose==6){
			if (dir == 224) {          
					_getch();                     
			}        
			if(dir=='j'||dir=='J'){
				if(choose==6&&x==1){
					x=69;
				}
				else{
					x>1? x-- : 0;
				}	
			}
			if(dir=='k'||dir=='K'){
				if(choose==6&&y==17){
					y=1;
				}
				else{
				    y<17?y++:0;
				}	
			}
			if(dir=='l'||dir=='L'){
				if(choose==6&&x==69){
					x=1;
				}
				else{
					x<69?x++:0;
				}	
			}
			if(dir=='i'||dir=='I'){
				if(choose==6&&y==1){
					y=17;
				}
				else{
					y>1?y--:0;
				}	
			}
			//处理之后移动
			gotoxy(hout, x, y);
		}
	}
	return;
}
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
***************************************************************************/
int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄

	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
	srand((unsigned int)(time(0)));

	/* 此句的作用是调用系统的cls命令清屏 */
	cls(hout);
	
	while(1){//demo里面的一开始输入非0-6的值时候会刷新一遍屏幕
		cls(hout);
		menu();
		char choose_char;
		int choose;
		choose_char=_getch();//不能显示在屏幕中
		choose = choose_char-'0';
		if(choose==0){
			return 0;
		} 
		if(choose>=1&&choose<=6){
			cls(hout);
			/* 显示初始的边框及其中的随机字符 */
			init_border(hout);
			int x_begin=35,y_begin=9;
			gotoxy(hout,x_begin,y_begin);			
			//开始移动
			move(choose,hout,x_begin,y_begin); 
		}
	}

	


	return 0;
}
