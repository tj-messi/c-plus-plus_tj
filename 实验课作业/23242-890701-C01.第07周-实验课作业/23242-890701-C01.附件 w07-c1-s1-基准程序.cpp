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
		if (cin.good() ==0) {//������� 
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
