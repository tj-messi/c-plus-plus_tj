/*2351114 ��15 �쿡��*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "�������꣬�£���" << endl;
	int year, month, day;
	cin >> year >> month >> day;
	//һ�����if��else�ж��ǲ�������-���������ʱ������4��������ʱ����400 
	//����-2����29�� 
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0)){
		//���ж��·�
		if(month<1||month>12){
			cout << "�������-�·ݲ���ȷ" << endl;
		} 
		if(month==1){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day << "��" << endl;
            }
		}
		if(month==2){
			if (day < 1 || day>29)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day+31 << "��" << endl;
            }
		}
		if(month==3){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31+29 << "��" << endl;
            }
		}
		if(month==4){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29+31 << "��" << endl;
            }
		}
		if(month==5){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29+31+30 << "��" << endl;
            }
		}
		if(month==6){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30+31 << "��" << endl;
            }
		}
		if(month==7){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31+30 << "��" << endl;
            }
		}
		if(month==8){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31 + 30 +31<< "��" << endl;
            }
		}
		if(month==9){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31 << "��" << endl;
            }
		}
		if(month==10){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30 << "��" << endl;
            }
		}
		if(month==11){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31 << "��" << endl;
            }
		}
		if(month==12){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30 << "��" << endl;
            }
		}
	} 
	//������ 
	else{
				//���ж��·�
		if(month<1||month>12){
			cout << "�������-�·ݲ���ȷ" << endl;
		} 
		if(month==1){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day << "��" << endl;
            }
		}
		if(month==2){
			if (day < 1 || day>28)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day+31 << "��" << endl;
            }
		}
		if(month==3){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31+28 << "��" << endl;
            }
		}
		if(month==4){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28+31 << "��" << endl;
            }
		}
		if(month==5){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28+31+30 << "��" << endl;
            }
		}
		if(month==6){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 +28 + 31 + 30+31 << "��" << endl;
            }
		}
		if(month==7){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 +28+ 31 + 30 + 31+30 << "��" << endl;
            }
		}
		if(month==8){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28+ 31 + 30 + 31 + 30 +31<< "��" << endl;
            }
		}
		if(month==9){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31 << "��" << endl;
            }
		}
		if(month==10){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28+ 31 + 30 + 31 + 30 + 31 + 31+30 << "��" << endl;
            }
		}
		if(month==11){
			if (day < 1 || day>30)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 + 28+ 31 + 30 + 31 + 30 + 31 + 31 + 30+31 << "��" << endl;
            }
		}
		if(month==12){
			if (day < 1 || day>31)
                cout << "�������-�����µĹ�ϵ�Ƿ�" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "��" << year << "��ĵ�" << day + 31 +28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30 << "��" << endl;
            }
		}
	}
	return 0;
} 
