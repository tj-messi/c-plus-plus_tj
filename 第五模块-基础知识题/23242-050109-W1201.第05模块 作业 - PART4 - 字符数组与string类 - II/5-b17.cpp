/*朱俊泽 2351114 信15*/
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	
	static const char other[]="!@#$%^&*-_=+,.?";
	srand((unsigned)time(NULL));
    cout << "请输入密码长度(12-16)，大写字母个数(≥2)，小写字母个数(≥2)，数字个数(≥2)，其它符号个数(≥2)" << endl;
    int len, big, small, num, res;
    cin >> len >> big >> small >> num >> res;
    if(cin.fail())
	{
		cin.clear();
		cin.ignore(9999, '\n');
		cout << "输入非法" << endl;
		return 0;
	}
	if (len < 12 || len>16)
	{
		cout << "密码长度[" << len << "]不正确" << endl;
		return 0;
	}
	if (big < 2)
	{
		cout << "大写字母个数[" << big << "]不正确" << endl;
		return 0;
	}
	if (small < 2)
	{
		cout << "小写字母个数[" << small << "]不正确" << endl;
		return 0;
	}
	if (num < 2)
	{
		cout << "数字个数[" << num << "]不正确" << endl;
		return 0;
	}
	if (res< 2)
	{
		cout << "其他符号个数[" << res << "]不正确" << endl;
		return 0;
	}
	if (big + small + num + res > len)
	{
		cout << "所有字符类型之和[" << big << "+" << small << "+" << num << "+" << res << "]大于总密码长度[" << len << "]" << endl;
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
