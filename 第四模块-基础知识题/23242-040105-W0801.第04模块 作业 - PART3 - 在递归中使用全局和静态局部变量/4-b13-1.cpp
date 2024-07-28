/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�����������hanoi�ж���һ����̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
  ���������int n������
            char src����ʼ��
            char tmp���м���
            char dst��Ŀ����
  �� �� ֵ��
  ˵    ����1�����������βΡ��������;���׼��
            2������������������κ���ʽ��ѭ��
            3��������һ����̬�ֲ�����
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
	static int cnt=0;
	if(n==1)
	{
		cnt++;
		cout<<setfill(' ')<<setw(5)<<cnt<<":";
		cout << "  1#" << " " << src << "-->" << dst << endl;
		return;
	}
	hanoi(n-1,src,dst,tmp);
    cnt++;
	cout<<setfill(' ')<<setw(5)<<cnt<<":";
	if (n < 10) 
	{
	    cout << " ";
    }
	cout <<" "<< n << "# " << src << "-->" << dst << endl;
	hanoi(n-1,tmp,src,dst); 
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
	int n;
	char src,tmp,dst;
	while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> n;   
        if (cin.fail()) {
            cin.clear();
            continue;
        }
        if (n < 1 || n>16) {
            continue;
        }
        cin.ignore(9999,'\n');
        break;//���� 
    }

    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((src-0)>=('A'-0) && (src-0)<=('C'-0))||((src-0) >=('a'-0) && (src-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
		cin.ignore(9999,'\n');
        break;//���� 
    }
    if(src>70)
    {
    	src-=32;	
	}
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((dst-0)>=('A'-0) && (dst-0)<=('C'-0))||((dst-0) >=('a'-0) && (dst-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
        if(dst==src||dst==src+32||dst==src-32)
        {
        	cout<<"Ŀ����("<<src<<")��������ʼ��("<<src<<")��ͬ"<<endl; 
        	cin.clear();
            cin.ignore(9999,'\n');
            continue;
		}
        cin.ignore(9999,'\n');
        break;//���� 
    }
    cout << "�ƶ�����Ϊ:" << endl;
    
    

	if(dst>70)
	{
		dst-=32;
	}
	tmp=(3*'B'-src-dst);
    hanoi(n,src,tmp,dst);
}
