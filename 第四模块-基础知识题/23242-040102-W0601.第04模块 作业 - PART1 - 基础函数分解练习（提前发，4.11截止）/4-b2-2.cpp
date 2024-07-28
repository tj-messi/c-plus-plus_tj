/*2351114 信15 朱俊泽*/
#include <iostream>
#include <limits>
#include <iomanip> 
using namespace std;

int zeller(int y,int m,int d)
{
	int c=y/100;//世纪
	int y_last2=y-c*100;//年份后两位
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}


int main()
{
	int year,month,day;
	while(1){//判断输入 
		cout << "请输入年[1900-2100]、月、日：" << endl;
		cin >> year >> month >> day;
		//非法 
		if (cin.fail()) {
			cout << "输入错误，请重新输入" << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//年 
		if (!(year>=1900&&year<=2100)) {
			cout << "年份不正确，请重新输入" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//月 
		if (!(month<=12&&month>=1)) {
			cout << "月份不正确，请重新输入" << endl;
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//日 
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (!(day<=31&&day>=1)) {
				cout << "日不正确，请重新输入" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
		}
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (!(day<=30&&day>=1)) {
				cout << "日不正确，请重新输入" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
		}
		if (month == 2) {
			if ((year % 4 == 0 && year % 100 != 0 )|| (year % 400 == 0)) {
				if (!(day<=29&&day>=1)) {
					cout << "日不正确，请重新输入" << endl;
					cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
					continue;
				}
			}

			else if (!(day<=28&&day>=1)) {
				cout << "日不正确，请重新输入" << endl;
				cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			
		}
		//走到底代表没问题
		break; 
	}
	if(month==1||month==2){
		year--;
		month+=12;	
	}
	int ans=zeller(year,month,day);
	switch(ans){
		case 0:
			cout << "星期日" << endl;
			break;
		case 1:
			cout << "星期一" << endl;
			break;
		case 2:
			cout << "星期二" << endl;
			break;
		case 3:
			cout << "星期三" << endl;
			break;
		case 4:
			cout << "星期四" << endl;
			break;
		case 5:
			cout << "星期五" << endl;
			break;
		case 6:
			cout << "星期六" << endl;
			break;
	}
	return 0;
}
