/*2351114 ��15 �쿡��*/
#include <iostream>
#include <limits>
#include <iomanip> 
using namespace std;

int zeller(int y,int m,int d)
{
	int c=y/100;//����
	int y_last2=y-c*100;//��ݺ���λ
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}


int main()
{
	int year,month,day;
	while(1){//�ж����� 
		cout << "��������[1900-2100]���¡��գ�" << endl;
		cin >> year >> month >> day;
		//�Ƿ� 
		if (cin.fail()) {
			cout << "�����������������" << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//�� 
		if (!(year>=1900&&year<=2100)) {
			cout << "��ݲ���ȷ������������" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//�� 
		if (!(month<=12&&month>=1)) {
			cout << "�·ݲ���ȷ������������" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//�� 
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (!(day<=31&&day>=1)) {
				cout << "�ղ���ȷ������������" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
		}
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (!(day<=30&&day>=1)) {
				cout << "�ղ���ȷ������������" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
		}
		if (month == 2) {
			if ((year % 4 == 0 && year % 100 != 0 )|| (year % 400 == 0)) {
				if (!(day<=29&&day>=1)) {
					cout << "�ղ���ȷ������������" << endl;
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}
			}

			else if (!(day<=28&&day>=1)) {
				cout << "�ղ���ȷ������������" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
		}
		//�ߵ��״���û����
		break; 
	}
	if(month==1||month==2){
		year--;
		month+=12;	
	}
	int ans=zeller(year,month,day);
	switch(ans){
		case 0:
			cout << "������" << endl;
			break;
		case 1:
			cout << "����һ" << endl;
			break;
		case 2:
			cout << "���ڶ�" << endl;
			break;
		case 3:
			cout << "������" << endl;
			break;
		case 4:
			cout << "������" << endl;
			break;
		case 5:
			cout << "������" << endl;
			break;
		case 6:
			cout << "������" << endl;
			break;
	}
	return 0;
}
