/*2351114 信15 朱俊泽*/
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
		printf("输入错误-日与月的关系非法\n");
	}
	else
	{
		int res=day;
		for(int i=month-1;i>=1;i--)
		{
			res+=month1[i];
		}
		printf("%d-%d-%d是%d年的第%d天\n", year, month, day, year, res);
	}
}

void getday2(int year,int month,int day)
{
	if(day>month2[month]||day<0)
	{
		printf("输入错误-日与月的关系非法\n");
	}
	else
	{
		int res=day;
		for(int i=month-1;i>=1;i--)
		{
			res+=month2[i];
		}
		printf("%d-%d-%d是%d年的第%d天\n", year, month, day, year, res);
	}
}

int main()
{
	
    printf("请输入年，月，日\n");
	int year, month, day;
    scanf("%d%d%d",&year,&month,&day);
    if(check(year)){
    	if(month>12||month<1){
    		printf("输入错误-月份不正确\n");
		}
		else getday2(year,month,day);
	}
	else{
		if(month>12||month<1)
		{
    		printf("输入错误-月份不正确\n");
		}
		else getday1(year,month,day);
	}
	return 0;
} 
