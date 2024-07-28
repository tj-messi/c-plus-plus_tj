/*2351114 �쿡�� ��15*/

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "read_stulist.h"
#include<cstring>
#include <iomanip>
using namespace std;

#define MAX_FILENAME_LEN		512	//�����ļ�������󳤶�

/* stu_metge ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_merge {
private:
	int  stu_no;					//ѧ��
	char stu_name[MAX_NAME_LEN];  //����
	int  op;//ѡ����� 1--YY  2--/ ��ѡ   3--Y �˿�
	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */
	friend void set(int no, char* name, int op, stu_merge& s);
	friend void get( stu_merge& s);
public:
	//���಻�������κεĹ������ݳ�Ա����Ա����
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//��һ��ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_1;						//��һ��ѡ�ε�ѧ������

	student list_round_2[MAX_STU_NUM];	//�ڶ���ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_2;						//�ڶ���ѡ�ε�ѧ������

	stu_merge list_merge[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int list_merge_num;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����

	student list_merge_temp[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int option[MAX_STU_NUM];
	int list_merge_num_temp=0;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����


	/* ���������private���ݳ�Ա�ͳ�Ա����
	   ע�⣬���������array / set / map / vector��STL���� */

public:
	stu_list();										//���캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
	int read(const char* filename, const int round);	//���ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
	int print(const char* prompt = NULL);				//��ӡ���յ�ѡ������
	void merge();
	void sort_array();
	/* �������������public��Ա��������ʾ���ϲ���ȥ�ء�����ȣ�
	   �������幫�е����ݳ�Ա
	   �������ڳ�Ա������ʹ��array / set / map / vector��STL���� */

};

/* --- ������Ը���stu_merge/stu_list������ĳ�Ա����������ʵ�� --- */
void stu_list::merge()
{
	memset(option, 0, sizeof option);
	for (int i = 0; i < list_num_1; i++)
	{
		int noi = list_round_1[i].no;
		bool check = false;
		for (int j = 0; j <= list_merge_num_temp; j++)
		{
			int noj = list_merge_temp[j].no;
			option[j] = 3;
			if (noi == noj)
				check = true;
		}
		if (!check)
		{
			list_merge_temp[list_merge_num_temp++] = list_round_1[i];
		}
	}
	for (int i =0 ; i < list_num_2; i++)
	{
		int noi = list_round_2[i].no;
		bool check = false;
		for (int j = 0; j <= list_merge_num_temp; j++)
		{
			int noj = list_merge_temp[j].no;
			if (noi == noj)
			{
				option[j] = 1;
				check = true;
			}
		}
		if (!check)
		{
			option[list_merge_num_temp++] = 2;
			list_merge_temp[list_merge_num_temp] = list_round_2[i];
		}
	}
}

void stu_list::sort_array()
{
	for (int i = 0; i <=list_merge_num_temp- 1; ++i) {
		for (int j = 0; j <= list_merge_num_temp - i - 1; ++j) {
			if ((list_merge_temp[j].no > list_merge_temp[j + 1].no)) {
				// ����Ԫ��  
				student temp = list_merge_temp[j];
				list_merge_temp[j] = list_merge_temp[j + 1];
				list_merge_temp[j + 1] = temp;
				int op_temp = option[j];
				option[j] = option[j + 1];
				option[j + 1] = op_temp;
			}
		}
	}
	for (int i = 0; i <=list_merge_num_temp; i++)
	{
		set(list_merge_temp[i].no, list_merge_temp[i].name, option[i], list_merge[i]);
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ����ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
  ���������
  �� �� ֵ��
  ˵    �������캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
***************************************************************************/
stu_list::stu_list()
{

}

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ʾ��̬���ӿ��ʹ�ã��������е��þ�̬���ӿ��е�Ԥ�ú���
  ���������
  �� �� ֵ��
  ˵    ��������������Ҫ�޸� 
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* ��ȡ��1/2�ֵ�ѡ����������ӡ */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ������ӡ���յ�ѡ������
***************************************************************************/
int stu_list::print(const char* prompt)
{
	cout << prompt << endl;
	cout << "============================================================" << endl;
	cout << "��� ѧ��     ����                            ��һ�� �ڶ���" << endl;
	cout << "============================================================" << endl;
	for (int i = 1; i <= list_merge_num_temp; i++)
	{
		cout <<std::left<< setw(5) << i;
		get(list_merge[i]);
		cout  <<endl;
	}
	cout << "============================================================" << endl;
	return 0; 
}

void set(int no, char* name, int op, stu_merge& s)
{
	s.stu_no = no;
	s.op = op;
	strncpy(s.stu_name, name, MAX_NAME_LEN);
	s.stu_name[MAX_NAME_LEN - 1] = '\0';
}

void get(stu_merge& s)
{
	cout << std::left<<setw(9) <<s.stu_no;
	cout << std::left<< setw(32) << s.stu_name;
	if (s.op == 1)
	{
		cout << "Y      Y";
	}
	else if (s.op == 3)
	{
		cout << "Y      �˿�";
	}
	else
	{
		cout << "/      ��ѡ";
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	gets_s(file1); //cin���ܶ��пո���ļ�

	cout << "�������һ��ѡ�ε������ļ� : ";
	gets_s(file2);

	stu_list list;

	/* �������� */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* �������� */
	list.merge();
	list.sort_array();
	/* ��ӡ */
	list.print("����ѡ������");

	return 0;
}

