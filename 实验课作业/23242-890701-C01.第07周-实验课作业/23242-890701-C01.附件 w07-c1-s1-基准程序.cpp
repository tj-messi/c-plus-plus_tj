/*朱俊泽 2351114 信15*/
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

/***************************************************************************
  函数名称：
  功    能：根据利润计算奖金（四舍五入，精确到元）
  输入参数：
  返 回 值：
  说    明：只允许用switch-case语句，用if语句则得分为0
***************************************************************************/
int calc_bonus(int profit)
{
	int level=profit/10000;
	bool flag=false;
	switch(level)
	{
		case 0:
			return profit/10;
			break;
		case 1:
			return profit/10;
			break;
		case 2:
			return profit/10;
			break;
		case 3:
			return profit/10;
			break;
		case 4:
			return profit/10;
			break;
		case 5:
			return profit/10;
			break;
		case 6:
			return profit/10;
			break;
		case 7:
			return profit/10;
			break;
		case 8:
			return profit/10;
			break;
		case 9:
			return profit/10;
			break;
		case 10:
			return (10000+(profit-100000)*0.075);
			break;
		case 11:
			return (10000+(profit-100000)*0.075);
			break;
		case 12:
			return (10000+(profit-100000)*0.075);
			break;
		case 13:
			return (10000+(profit-100000)*0.075);
			break;
		case 14:
			return (10000+(profit-100000)*0.075);
			break;
		case 15:
			return (10000+(profit-100000)*0.075);
			break;
		case 16:
			return (10000+(profit-100000)*0.075);
			break;
		case 17:
			return (10000+(profit-100000)*0.075);
			break;
		case 18:
			return (10000+(profit-100000)*0.075);
			break;
		case 19:
			return (10000+(profit-100000)*0.075);
			break;
		default:
			flag=true;
			break;	
	}	
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：从键盘读取一个int型正整数，有错误则按错误处理逻辑的规则，给出输出提示后再次读 
  返 回 值：
  说    明：
***************************************************************************/
int get_business_profit()
{
	int profit;
	while(1)
	{
		cout << "请输入利润" << endl;
		cin>>profit;
		if (cin.good() ==0) {//输入错误 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}
		else{
			break;
		}
		
	}
	return profit;
}

/***************************************************************************
  函数名称：main
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	int profit;
	profit = get_business_profit();
	cout << "应发奖金数 : " << calc_bonus(profit) << endl;

	return 0;
}
