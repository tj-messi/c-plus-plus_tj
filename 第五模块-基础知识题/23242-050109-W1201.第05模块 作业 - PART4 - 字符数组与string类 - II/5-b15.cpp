/*�쿡�� 2351114 ��15*/ 
#include<iostream>
using namespace std;


int main()
{
	char str[3][128];
	 cout << "�������1��" << endl;
    cin.get(str[0],128);
    getchar();
    cout << "�������2��" << endl;
    cin.get(str[1], 128);
    getchar();
    cout << "�������3��" << endl;
    cin.get(str[2], 128);
    getchar();
    int big=0,small=0,num=0,tab=0,res=0;
    for(int i=0;i<3;i++)
    {
    	for(int j=0;str[i][j]!='\0';j++)
    	{
    		if (str[i][j] >= 'A' && str[i][j] <= 'Z')
                big++;
            else if (str[i][j] >= 'a' && str[i][j] <= 'z')
               small++;
            else if (str[i][j] >= '0' && str[i][j] <= '9')
                num++;
            else if (str[i][j] == ' ')
               	tab++;
            else
                res++;
		}
	}
	cout << "��д : " << big << endl;
    cout << "Сд : " << small << endl;
    cout << "���� : " << num << endl;
    cout << "�ո� : " << tab << endl;
    cout << "���� : " << res << endl;
	return 0;
}
