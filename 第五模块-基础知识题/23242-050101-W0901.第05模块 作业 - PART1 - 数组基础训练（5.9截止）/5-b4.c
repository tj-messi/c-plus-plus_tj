/*�쿡�� 2351114 ��15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[1005];
	printf("������ɼ������1000������������������\n");
	int count=0;int score=0;
	while(1)
	{
		count++;		
		scanf("%d",&score);
		if(score<0)break;
		else
		{
			a[count]=score;
		}
		if(score==1000)break;
	}
	count--; 
	printf("���������Ϊ:\n");
	int index=0;
	for(int i=1;i<=(count/10)+1;i++)
	{
		if(i!=(count/10)+1)
		{
			for(int j=1;j<=10;j++)
			{
				printf("%d ",a[++index]);
			}
		}
		else
		{
			for(int i=1;i<=count-(count/10)*10;i++)
			{
				printf("%d ",a[++index]);
			}
		}
		printf("\n");
	}
	printf("�����������Ķ�Ӧ��ϵΪ:\n");
	
	int ans[105];
	for(int i=0;i<105;i++)
	{
		ans[i]=0;
	}
	for(int i=1;i<=count;i++)
	{
		ans[a[i]]++;
	}
	for(int i=100;i>=0;i--)
	{
		if(ans[i]!=0)
		{
			printf("%d %d\n",i,ans[i]);
		}
	}
	/*
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
				printf("%d %d\n",i,index_in);
			}
		}	
	}
	*/
}
