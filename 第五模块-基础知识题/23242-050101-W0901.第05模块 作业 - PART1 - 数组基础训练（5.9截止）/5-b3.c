/*2351114 ��15 �쿡��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int month1[] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
int month2[] = {0,31,29,31,30,31,30,31,31,30,31,30,31 };

int check(int year)
{
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void getday1(int year,int month,int day)
{
	if(day>month1[month]||day<0)
	{
		printf("�������-�����µĹ�ϵ�Ƿ�\n");
	}
	else
	{
		int res=day;
		for(int i=month-1;i>=1;i--)
		{
			res+=month1[i];
		}
		printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, res);
	}
}

void getday2(int year,int month,int day)
{
	if(day>month2[month]||day<0)
	{
		printf("�������-�����µĹ�ϵ�Ƿ�\n");
	}
	else
	{
		int res=day;
		for(int i=month-1;i>=1;i--)
		{
			res+=month2[i];
		}
		printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, res);
	}
}

int main()
{
	
    printf("�������꣬�£���\n");
	int year, month, day;
    scanf("%d%d%d",&year,&month,&day);
    if(check(year)){
    	if(month>12||month<1){
    		printf("�������-�·ݲ���ȷ\n");
		}
		else getday2(year,month,day);
	}
	else{
		if(month>12||month<1)
		{
    		printf("�������-�·ݲ���ȷ\n");
		}
		else getday1(year,month,day);
	}
	return 0;
} 
