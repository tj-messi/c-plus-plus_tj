/*2351114 �쿡�� ��15*/
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
            int X       ��ָ��λ�õ�x����
            int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
            int X       ��ָ��λ�õ�x����
            int Y       ��ָ��λ�õ�y����
            char ch     ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
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

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

void menu(){
		cout << "1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)���������ͷ��ʱ�����ƶ���" << endl;
		cout << "2.��I��J��K��L��������������(��Сд���ɣ��߽����)���������ͷ��ʱ�����ƶ���" << endl;
		cout << "3.�ü�ͷ�������������ң��߽�ֹͣ������дHPKMʱ��׼�ƶ���" << endl;
		cout << "4.�ü�ͷ�������������ң��߽���ƣ�����дHPKMʱ��׼�ƶ���" << endl;
		cout << "5.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)�������ͷ����׼�����ƶ���" << endl;
		cout << "6.��I��J��K��L��������������(��Сд���ɣ��߽����)�������ͷ����׼�����ƶ���" << endl;
		cout << "0.�˳�" << endl;
		cout << "[��ѡ��0 - 6]";
}

void move(int choose,HANDLE hout,int x,int y)
{
	while(1){
		int dir;
		dir=_getch();
		
		if(dir=='q'||dir=='Q'){//�����˳� 
			gotoxy(hout, 0, 23);
			cout << "��Ϸ���������س����˳�." << endl;
			while(1){
				char dir_char=_getch();
				int dir=dir_char-0;
				if(dir==13){
					return;
				}
			}
		}
		if(dir==32){
			//���� 
			putchar(32);
			gotoxy(hout,x,y);
		}
		
		//jkl�Ŀ��� 
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
			//����֮���ƶ�
			gotoxy(hout, x, y);
		}
		//��������� 
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
				//����֮���ƶ�
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
			//����֮���ƶ�
			gotoxy(hout, x, y);
		}
	}
	return;
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��

	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
	srand((unsigned int)(time(0)));

	/* �˾�������ǵ���ϵͳ��cls�������� */
	cls(hout);
	
	while(1){//demo�����һ��ʼ�����0-6��ֵʱ���ˢ��һ����Ļ
		cls(hout);
		menu();
		char choose_char;
		int choose;
		choose_char=_getch();//������ʾ����Ļ��
		choose = choose_char-'0';
		if(choose==0){
			return 0;
		} 
		if(choose>=1&&choose<=6){
			cls(hout);
			/* ��ʾ��ʼ�ı߿����е�����ַ� */
			init_border(hout);
			int x_begin=35,y_begin=9;
			gotoxy(hout,x_begin,y_begin);			
			//��ʼ�ƶ�
			move(choose,hout,x_begin,y_begin); 
		}
	}

	


	return 0;
}
