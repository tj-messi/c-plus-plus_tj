/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

/***************************************************************************
  �������ƣ�
  ��    �ܣ�����������㽱���������룬��ȷ��Ԫ��
  ���������
  �� �� ֵ��
  ˵    ����ֻ������switch-case��䣬��if�����÷�Ϊ0
***************************************************************************/
int calc_bonus(int profit)
{
	double profit_d=profit;
	int level=profit_d/100000;
	switch(level)
	{
		case 0:
			return int(profit_d/10+0.5);
			break;
		case 1:
			return int(0.5+10000+(profit_d>100000 ? (profit_d-100000)*0.075 : 0));
			break;
		case 2:
			return int(0.5+17500+(profit_d>200000 ? (profit_d-200000)*0.05 : 0));
			break;
		case 3:
			return int(0.5+17500+(profit_d>200000 ? (profit_d-200000)*0.05 : 0));
			break;
		case 4:
			return int(0.5+27500+(profit_d>400000 ? (profit_d-400000)*0.03 : 0));
			break; 
		case 5:
			return int(0.5+27500+(profit_d>400000 ? (profit_d-400000)*0.03 : 0));
			break;
		case 6:
			return int(0.5+33500+(profit_d>600000 ? (profit_d-600000)*0.015 : 0));
			break;
		case 7:
			return int(0.5+33500+(profit_d>600000 ? (profit_d-600000)*0.015 : 0));
			break;
		case 8:
			return int(0.5+33500+(profit_d>600000 ? (profit_d-600000)*0.015 : 0));
			break;
		case 9:
			return int(0.5+33500+(profit_d>600000 ? (profit_d-600000)*0.015 : 0));
			break;
		default:
			return int(0.5+39500+(profit_d>1000000 ? (profit_d-1000000)*0.01 : 0));
			break;		
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ����������Ӽ��̶�ȡһ��int�����������д����򰴴������߼��Ĺ��򣬸��������ʾ���ٴζ� 
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int get_business_profit()
{
	int profit;
	while(1)
	{
		cout << "����������" << endl;
		cin>>profit;
		if (cin.good()==1&&(profit>=1)) {
			break;
		}
		else if(cin.good() ==0){
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}
		
	}
	return profit;
}

/***************************************************************************
  �������ƣ�main
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	int profit;
	profit = get_business_profit();
	cout << "Ӧ�������� : " << calc_bonus(profit) << endl;

	return 0;
}
