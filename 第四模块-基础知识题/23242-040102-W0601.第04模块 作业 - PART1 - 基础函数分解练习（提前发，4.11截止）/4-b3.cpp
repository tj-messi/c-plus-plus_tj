/*2351114 ��15 �쿡��*/
#include <iostream>
#include <limits>
#include <iomanip> 
using namespace std;

int zeller(int y,int m,int d)
{
	if(m==1||m==2){
		y--;
		m+=12;	
	}
	int c=y/100;//����
	int y_last2=y-c*100;//��ݺ���λ
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}

void calender(int year, int month,int week)
{
	/* ������Ӵ��� */ 
	int day;
	cout << year << "��" << month << "��" << endl;
	/* ͷ���ָ��ߣ������� */ 
	cout << "======================================================" << endl;
	cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
	cout << "======================================================" << endl;
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
	/* ������Ӵ��� */ 
	for(int i=1;i<=week;i++){
		cout << "        ";//8(2+2+2+2)
	}
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
	cout<<endl;
	/* β���ָ��ߣ������� */ 
	cout << "======================================================" << endl;
}

int main()
{
	int year,month;
	while(1){//�ж����� 
		cout << "��������[1900-2100]���£�" << endl;
		cin >> year >> month;
		if (cin.fail()) {
			cout << "�����������������" << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (year < 1900 || year > 2100) {
			cout << "��ݲ���ȷ������������" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (month > 12 || month < 1) {
			cout << "�·ݲ���ȷ������������" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//�ߵ���û����
		break; 
	}
	cout<<endl; 
	int week=zeller(year,month,1);
	//�õ�һ��
	calender( year,  month, week);
	return 0;
}

