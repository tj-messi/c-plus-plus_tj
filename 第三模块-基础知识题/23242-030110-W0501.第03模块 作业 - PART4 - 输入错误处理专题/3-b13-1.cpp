/*�쿡�� ��15 2351114*/
#include <iostream>

#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	int year,month;
	while (1) {
		cout <<"���������(2000-2030)���·�(1-12) : ";
		cin >> year>>month;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		
		if (cin.good() ==0) {//������� 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "����Ƿ�������������" << endl;
		}
		else if (year>= 2020 && year<=2030&&month>=1&&month<=12){//��Χ���� 
			break;
		}
		else{
			cout << "����Ƿ�������������" << endl;
		}
			
	}
	int first_week;
	while (1) {
		cout <<"������" << year << "��" << month << "��1�յ�����(0-6��ʾ������-������) : ";
		cin >>first_week;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		
		if (cin.good() ==0) {//������� 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "����Ƿ�������������" << endl;
		}
		else if (first_week>=0&&first_week<=6){//��Χ���� 
			break;
		}
		else{
			cout << "����Ƿ�������������" << endl;
		}
			
	}
	cout<<endl;
	cout<<year << "��" << month << "�µ�����Ϊ:" << endl;
	int day;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		day=31;
	}
	if(month==4||month==6||month==9||month==11){
		day=30;
	}
	if(month==2){
		if((year%400==0)||(year%100!=0&&year%4==0)){
			day=29;
		}
		else{
			day=28;
		}
	}
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	for(int i=1;i<=first_week;i++){
		cout << "        ";//8(2+2+2+2)
	}
	int week=first_week;
	int count=1;
	//cout<<setiosflags(ios::right)<<setw(4)
	while(day){
		if(week==6){//�������� 
			cout<<setiosflags(ios::right)<<setw(4)<<count;
			cout<<"  "<<endl;
			week=-1;
		}
		else{//������ 
			cout<<setiosflags(ios::right)<<setw(4)<<count;
			cout<<"    ";
		}
		week++;
		day--;
		count++;
	}

	return 0;
}
