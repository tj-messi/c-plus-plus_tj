/*2351114 信15 朱俊泽*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "请输入年，月，日" << endl;
	int year, month, day;
	cin >> year >> month >> day;
	//一个大的if和else判断是不是闰年-非整百年的时候整除4，整百年时整除400 
	//闰年-2月有29天 
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0)){
		//先判断月份
		if(month<1||month>12){
			cout << "输入错误-月份不正确" << endl;
		} 
		if(month==1){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day << "天" << endl;
            }
		}
		if(month==2){
			if (day < 1 || day>29)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day+31 << "天" << endl;
            }
		}
		if(month==3){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31+29 << "天" << endl;
            }
		}
		if(month==4){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29+31 << "天" << endl;
            }
		}
		if(month==5){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29+31+30 << "天" << endl;
            }
		}
		if(month==6){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30+31 << "天" << endl;
            }
		}
		if(month==7){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31+30 << "天" << endl;
            }
		}
		if(month==8){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31 + 30 +31<< "天" << endl;
            }
		}
		if(month==9){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31 << "天" << endl;
            }
		}
		if(month==10){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31+30 << "天" << endl;
            }
		}
		if(month==11){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31 << "天" << endl;
            }
		}
		if(month==12){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30 << "天" << endl;
            }
		}
	} 
	//非闰年 
	else{
				//先判断月份
		if(month<1||month>12){
			cout << "输入错误-月份不正确" << endl;
		} 
		if(month==1){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day << "天" << endl;
            }
		}
		if(month==2){
			if (day < 1 || day>28)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day+31 << "天" << endl;
            }
		}
		if(month==3){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31+28 << "天" << endl;
            }
		}
		if(month==4){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28+31 << "天" << endl;
            }
		}
		if(month==5){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28+31+30 << "天" << endl;
            }
		}
		if(month==6){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 +28 + 31 + 30+31 << "天" << endl;
            }
		}
		if(month==7){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 +28+ 31 + 30 + 31+30 << "天" << endl;
            }
		}
		if(month==8){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28+ 31 + 30 + 31 + 30 +31<< "天" << endl;
            }
		}
		if(month==9){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31 << "天" << endl;
            }
		}
		if(month==10){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28+ 31 + 30 + 31 + 30 + 31 + 31+30 << "天" << endl;
            }
		}
		if(month==11){
			if (day < 1 || day>30)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 + 28+ 31 + 30 + 31 + 30 + 31 + 31 + 30+31 << "天" << endl;
            }
		}
		if(month==12){
			if (day < 1 || day>31)
                cout << "输入错误-日与月的关系非法" << endl;
            else
            {
                cout << year << "-" << month << "-" << day << "是" << year << "年的第" << day + 31 +28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30 << "天" << endl;
            }
		}
	}
	return 0;
} 
