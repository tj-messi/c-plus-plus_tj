/*�쿡�� 2351114 ��15*/
#include <iostream>
using namespace std;

int main()
{
	int a[1005];
	cout<<"������ɼ������1000������������������"<<endl;
	int count=0;int score=0;
	while(1)
	{
		count++;		
		cin>>score;
		if(score<0)break;
		else
		{
			a[count]=score;
		}
		if(score==1000)break;
	}
	count--; 
	cout<<"���������Ϊ:"<<endl;
	int index=0;
	for(int i=1;i<=(count/10)+1;i++)
	{
		if(i!=(count/10)+1)
		{
			for(int j=1;j<=10;j++)
			{
				cout<<a[++index]<<" ";;
			}
		}
		else
		{
			for(int i=1;i<=count-(count/10)*10;i++)
			{
				cout<<a[++index]<<" ";
			}
		}
		cout<<endl;
	}
	cout<<"�����������Ķ�Ӧ��ϵΪ:"<<endl;
	
	int ans[105];
	for(int i=0;i<105;i++)
	{
		ans[i]=0;
	}
	for(int i=1;i<=count;i++)
	{
		ans[a[i]]++;
	}
	/*
	for(int i=100;i>=0;i--)
	{
		if(ans[i]!=0)
		{
			printf("%d %d\n",i,ans[i]);
		}
	}
	*/
	index=1;
	for(int i=100;i>=0;i--)
	{
		if(ans[i]!=0)
		{
			//printf("%d %d\n",i,ans[i]);
			int index_in=index;
			for(int j=1;j<=ans[i];j++)
			{
				index++;
				cout<<i<<" "<<index_in<<endl;
			}
		}	
	}
	
}
