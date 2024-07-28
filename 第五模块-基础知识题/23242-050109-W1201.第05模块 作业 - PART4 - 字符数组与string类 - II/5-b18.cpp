/*÷Ïø°‘Û 2351114 –≈15*/
#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


static const char other[]="!@#$%^&*-_=+,.?";
bool checkin(char ascii)
{
	for(int i=0;i<15;i++)
	{
		if(ascii==other[i])
			return true;
	}
	return false;
}

int main()
{
	while(1)
	{
		if(cin.get()=='\n')
			break;
	}
	int len, big, small, num, res;
	cin >> len >> big >> small >> num >> res;
	getchar();//≥‘ªÿ≥µ
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(9999, '\n');
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (len < 12 || len>16)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (big < 2)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (small < 2)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (num < 2)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (res < 2)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	else if (big + small + num + res > len)
	{
		cout << "¥ÌŒÛ" << endl;
		return 0;
	}
	char password[15][20];
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=len;j++)
		{
			cin>>password[i][j];
			if(j==len)
			getchar();
		}
		
	}
	bool flag=true;
	for(int i=1;i<=10;i++)
	{
		int big0=big,small0=small,num0=num,res0=res;
		for(int j=1;j<=len;j++)
		{
			char ascii=password[i][j];
			if(ascii>='a'&&ascii<='z')
			{
				small0--;
			}
			else if(ascii>='A'&&ascii<='Z')
			{
				big0--;
			}
			else if(ascii>='0'&&ascii<='9')
			{
				num0--;
			}
			else
			{
				if(checkin(ascii))
					res0--;
				else
					flag=false;
			}
		}
		if(res0>0||small0>0||big0>0||num0>0)
			flag=false;
		//cout<<res0<<" "<<small0<<" "<<big0<<" "<<" "<<num0<<endl;
	}
	if (flag)
		{
			cout << "’˝»∑" << endl;
			return 0;
		}
	else
	{
		cout<<"¥ÌŒÛ"<<endl;
		return 0;
	}
	return 0;
}
