/*朱俊泽 2351114 信15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：函数名为calc，返回值、输入参数自行定义
***************************************************************************/
int  calc(int day)
{
	day--;
	int res=1;
	while(day--)
	{
		res++;
		res*=2;
	}
	return res;
}

/***************************************************************************
  函数名称：
  功    能：取得一个[1..30]间的int型整数并返回，有错误则按错误处理逻辑的规则，给出提示后再次读取 
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int get_int()
{
	int day;
	while(1)
	{			
		printf("请输入第几天的桃子数为1\n");
		int ret = scanf("%d", &day);
		
		if(ret == 1 && (day >= 0 && day <= 30))
		{
			break;
		}
		else if (ret ==0) {
			//清空输入缓冲区
			scanf("%*[^\n]");
			scanf("%*c");
		}
	}
	return day;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：除...外，其余部分不准动
***************************************************************************/
int main()
{
	int day;
	day = get_int();
	printf("第1天买的桃子数量=%d\n",calc(day));  //自行将...替换即可(...处不允许添加变量定义）

	return 0;
}
