/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
        ����   ��1����������һ�����������������ݹ麯�����������������ӵĺ����в������κ���ʽ��ѭ��
                 2��������ų���
                 3������const�ͱ���

        ������ ��1������ȫ�ֱ���
                 2����print_tower֮������������в������徲̬�ֲ����� 
   ----------------------------------------------------------------------------------- */
void print_char1(char st,char end)
{
	if((st-'0')<(end-'0'))
	{
		cout<<end;
		print_char1(st,end-1);
	}
	else if((st-'0')==(end-'0'))
	{
		cout<<st;
		return;
	}
	else
	{
		return;
	}
	return;
}

void print_char2(char st,char end)
{
	if((st-'0')>(end-'0'))
	{
		cout<<end;
		print_char2(st,end+1);
	}
	else if((st-'0')==(end-'0'))
	{
		cout<<st;
		return;
	}
	else
	{
		return;
	}
	return;
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡ��ĸ��
  ���������
  �� �� ֵ��
  ˵    �����βΰ�������
            ��ʾ����һ������order��ָ������/���� 
***************************************************************************/
void print_tower(int option,char end_ch,int h)
{
	/* �����趨�����һ����̬�ֲ�������Ҳ���Բ����壩 */

	/* ����ʵ�֣������в������κ���ʽ��ѭ����������������������� */
	int len=((end_ch - 'A') * 2 + 1);
	int height=(end_ch - 'A')+1;
	if(option==1)
	{
		if(h>height)
		{
			return;
		}
		if(h<height)
		{
			cout<< setfill(' ') << setw(height-h) << " ";
		}
		print_char1('A','A'+h-1);
		print_char2('A'+h-1,'B');
		cout<< setfill(' ') << setw(height-h) << " ";
		cout<<endl;
		print_tower(1,end_ch,h+1);
	}
	else
	{
		if(h>height)
		{
			return;
		}
		if(h>1)
		{
			cout<< setfill(' ') << setw(h-1) << " ";
		}
		print_char1('A','A'+height-h);
		print_char2('A'+height-h,'B');
		cout<< setfill(' ') << setw(h-1) << " ";
		cout<<endl;
		print_tower(2,end_ch,h+1);
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����е�...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч��Ϊ����ѭ�����֣��������������) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();			//����������һ���ַ�
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "�����ַ����Ǵ�д��ĸ" << endl;
		return -1;
	}

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl;/* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(1,end_ch,1); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl;/* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower(2,end_ch,1); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ����������Ư�������Σ��м�ΪA�� */
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl;/* ����ĸ����������= */
	cout << "����(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw((end_ch - 'A') * 2 + 1) << "=" << endl;/* ����ĸ����������= */
	print_tower(1,end_ch,1);   //��ӡ A~�����ַ��������� 
	print_tower(2,end_ch,2);   //��ӡ A~�����ַ�-1�ĵ����� 
	cout << endl;

	return 0;
}
