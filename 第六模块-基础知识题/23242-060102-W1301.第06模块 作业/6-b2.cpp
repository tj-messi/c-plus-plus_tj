/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <string>
using namespace std;


int check_str(char str[])
{
	for(char* l=str,*r=str+strlen(str)-2;l<r;l++,r--)
	{
		if(*l!=*r)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char str[81];
	cout << "������һ������С��80���ַ��������Ĵ���" << endl;
    fgets(str, 80,stdin);
    int flag=check_str(str);
    if(flag)
    {
    	cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	return 0;
}
