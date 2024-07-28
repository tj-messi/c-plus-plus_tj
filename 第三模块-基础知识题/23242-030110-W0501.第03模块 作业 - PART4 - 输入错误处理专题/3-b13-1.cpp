/*朱俊泽 信15 2351114*/
#include <iostream>

#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	int year,month;
	while (1) {
		cout <<"请输入年份(2000-2030)和月份(1-12) : ";
		cin >> year>>month;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		
		if (cin.good() ==0) {//输入错误 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "输入非法，请重新输入" << endl;
		}
		else if (year>= 2020 && year<=2030&&month>=1&&month<=12){//范围错误 
			break;
		}
		else{
			cout << "输入非法，请重新输入" << endl;
		}
			
	}
	int first_week;
	while (1) {
		cout <<"请输入" << year << "年" << month << "月1日的星期(0-6表示星期日-星期六) : ";
		cin >>first_week;   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		
		if (cin.good() ==0) {//输入错误 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "输入非法，请重新输入" << endl;
		}
		else if (first_week>=0&&first_week<=6){//范围错误 
			break;
		}
		else{
			cout << "输入非法，请重新输入" << endl;
		}
			
	}
	cout<<endl;
	cout<<year << "年" << month << "月的月历为:" << endl;
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
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	for(int i=1;i<=first_week;i++){
		cout << "        ";//8(2+2+2+2)
	}
	int week=first_week;
	int count=1;
	//cout<<setiosflags(ios::right)<<setw(4)
	while(day){
		if(week==6){//到周六了 
			cout<<setiosflags(ios::right)<<setw(4)<<count;
			cout<<"  "<<endl;
			week=-1;
		}
		else{//非周六 
			cout<<setiosflags(ios::right)<<setw(4)<<count;
			cout<<"    ";
		}
		week++;
		day--;
		count++;
	}

	return 0;
}
