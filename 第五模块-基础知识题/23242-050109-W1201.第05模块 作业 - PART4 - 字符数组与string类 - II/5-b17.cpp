/*�쿡�� 2351114 ��15*/
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	
	static const char other[]="!@#$%^&*-_=+,.?";
	srand((unsigned)time(NULL));
    cout << "���������볤��(12-16)����д��ĸ����(��2)��Сд��ĸ����(��2)�����ָ���(��2)���������Ÿ���(��2)" << endl;
    int len, big, small, num, res;
    cin >> len >> big >> small >> num >> res;
    if(cin.fail())
	{
		cin.clear();
		cin.ignore(9999, '\n');
		cout << "����Ƿ�" << endl;
		return 0;
	}
	if (len < 12 || len>16)
	{
		cout << "���볤��[" << len << "]����ȷ" << endl;
		return 0;
	}
	if (big < 2)
	{
		cout << "��д��ĸ����[" << big << "]����ȷ" << endl;
		return 0;
	}
	if (small < 2)
	{
		cout << "Сд��ĸ����[" << small << "]����ȷ" << endl;
		return 0;
	}
	if (num < 2)
	{
		cout << "���ָ���[" << num << "]����ȷ" << endl;
		return 0;
	}
	if (res< 2)
	{
		cout << "�������Ÿ���[" << res << "]����ȷ" << endl;
		return 0;
	}
	if (big + small + num + res > len)
	{
		cout << "�����ַ�����֮��[" << big << "+" << small << "+" << num << "+" << res << "]���������볤��[" << len << "]" << endl;
		return 0;
	}
	char password[15][20];
	for(int i=1;i<=10;i++)
	{
		int big0=big,small0=small,num0=num,res0=len-num-small-big;
		for(int j=1;j<=len;j++)
		{
			int ascii=rand() % 93 + 33;
			if(ascii>='a'&&ascii<='z')
			{
				if(small0==0)
				{
					j--;continue;
				}
				small0--;
				password[i][j]=ascii;
			}
			else if(ascii>='A'&&ascii<='Z')
			{
				if(big0==0)
				{
					j--;continue;
				}
				big0--;
				password[i][j]=ascii;
			}
			else if(ascii>='0'&&ascii<='9')
			{
				if(num0==0)
				{
					j--;continue;
				}
				num0--;
				password[i][j]=ascii;
			}
			else
			{
				if(res0==0)
				{
					j--;continue;
				}
				res0--;
				password[i][j]=other[ascii%14];
			}
		}
	}
    cout << len << " " << big << " " << small << " " << num << " " << res << endl;
    for(int i=1;i<=10;i++)
    {
    	for(int j=1;j<=len;j++)
    	{
    		cout<<password[i][j];
		}
		cout<<endl;
	}
    
	return 0;
}
