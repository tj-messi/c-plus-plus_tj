/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
	char str[32+1];
	cout << "������һ��0/1��ɵ��ַ��������Ȳ�����32" << endl;
    cin >> str;
    long long ans=0;
    int len=strlen(str);
    int index=0;
    for(char* p=str;index<len;index++,p++)
    {
    	ans+=(*p-'0')*(long long)(pow(2,len-index-1));
    	//cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
