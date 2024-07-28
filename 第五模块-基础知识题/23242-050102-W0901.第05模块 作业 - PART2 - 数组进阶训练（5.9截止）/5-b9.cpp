/*2351114 信15 朱俊泽*/
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
					cout << "请重新输入第" << i << "行" << j  << "列(行列均从1开始计数)的值" << endl;
					cin.clear();
					cin.ignore(2147483647, '\n');
					continue;
				}
				else if (mp[i][j] < 1 || mp[i][j]>9)
				{
					cout << "请重新输入第" << i << "行" << j << "列(行列均从1开始计数)的值" << endl;
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
	//每个小方格 
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
	//每行每列
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
	if(res)cout<<"是数独的解"<<endl;
	else cout<<"不是数独的解"<<endl;
	return 0;
}
