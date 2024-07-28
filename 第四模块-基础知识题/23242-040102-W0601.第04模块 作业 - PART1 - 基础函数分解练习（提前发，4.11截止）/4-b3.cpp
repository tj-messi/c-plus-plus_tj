/*2351114 信15 朱俊泽*/
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
	int c=y/100;//世纪
	int y_last2=y-c*100;//年份后两位
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}

void calender(int year, int month,int week)
{
	/* 按需添加代码 */ 
	int day;
	cout << year << "年" << month << "月" << endl;
	/* 头部分隔线，不算打表 */ 
	cout << "======================================================" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
	/* 按需添加代码 */ 
	for(int i=1;i<=week;i++){
		cout << "        ";//8(2+2+2+2)
	}
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
	cout<<endl;
	/* 尾部分隔线，不算打表 */ 
	cout << "======================================================" << endl;
}

int main()
{
	int year,month;
	while(1){//判断输入 
		cout << "请输入年[1900-2100]、月：" << endl;
		cin >> year >> month;
		if (cin.fail()) {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (year < 1900 || year > 2100) {
			cout << "年份不正确，请重新输入" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (month > 12 || month < 1) {
			cout << "月份不正确，请重新输入" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//走到底没问题
		break; 
	}
	cout<<endl; 
	int week=zeller(year,month,1);
	//拿到一号
	calender( year,  month, week);
	return 0;
}

