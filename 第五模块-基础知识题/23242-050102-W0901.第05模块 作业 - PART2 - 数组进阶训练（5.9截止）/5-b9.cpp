/*2351114 ��15 �쿡��*/
#include<iostream>
using namespace std;

int main()
{
	int vis[15],vis1[15];
	int mp[15][15];
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			while (1)
			{
				cin >>mp[i][j];
				if (cin.fail())
				{
					cout << "�����������" << i << "��" << j  << "��(���о���1��ʼ����)��ֵ" << endl;
					cin.clear();
					cin.ignore(2147483647, '\n');
					continue;
				}
				else if (mp[i][j] < 1 || mp[i][j]>9)
				{
					cout << "�����������" << i << "��" << j << "��(���о���1��ʼ����)��ֵ" << endl;
					cin.clear();
					cin.ignore(2147483647, '\n');
					continue;
				}
				else
					break;
			}
		}
	}
	bool res=true;
	//ÿ��С���� 
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			for(int k=1;k<=9;k++)vis[k]=1;
			for(int k=3*i-2;k<=3*i;k++)
			{
				for(int l=3*j-2;l<=3*j;j++)
				{
					vis[mp[k][l]]--;
					if(vis[mp[k][l]]<0)res=false;
				}
			}
		}
	}
	//ÿ��ÿ��
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			vis[j]=1;vis1[j]=1; 
		}
		for(int j=1;j<=9;j++)
		{
			vis[mp[i][j]]--;
			if(vis[mp[i][j]]<0)res=false;
			vis1[mp[i][j]]--;
			if(vis1[mp[i][j]]<0)res=false;
		}
	} 
	if(res)cout<<"�������Ľ�"<<endl;
	else cout<<"���������Ľ�"<<endl;
	return 0;
}
