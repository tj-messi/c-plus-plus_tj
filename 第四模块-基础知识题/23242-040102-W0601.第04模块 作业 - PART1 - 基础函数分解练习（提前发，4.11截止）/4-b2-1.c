/*2351114 信15 朱俊泽*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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
	int year,month,day,ret;
	while(1){//判断输入 
		printf("请输入年[1900-2100]、月、日：\n");
		ret = scanf("%d%d%d", &year, &month, &day);
		//非法 
		if (ret != 3) {
			printf("输入错误，请重新输入\n");
			scanf("%*[^\n]");
			scanf("%*c");	
			continue;
		}
		//年 
		if (!(year>=1900&&year<=2100) ){
			printf("年份不正确，请重新输入\n");
			scanf("%*[^\n]");
			scanf("%*c");
			continue;
		}
		//月 
		if (!(month<=12&&month>=1)) {
			printf("月份不正确，请重新输入\n");
			scanf("%*[^\n]");
			scanf("%*c");
			continue;
		}
		//日 
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (!(day<=31&&day>=1)) {
				printf("日不正确，请重新输入\n");
				scanf("%*[^\n]");
				scanf("%*c");
				continue;
			}
		}
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (!(day<=30&&day>=1)) {
				printf("日不正确，请重新输入\n");
				scanf("%*[^\n]");
				scanf("%*c");
				continue;
			}
		}
		if (month == 2) {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				if (!(day<=29&&day>=1)) {
					printf("日不正确，请重新输入\n");
					scanf("%*[^\n]");
					scanf("%*c");
					continue;
				}
			}

			else if (!(day<=28&&day>=1)) {
				printf("日不正确，请重新输入\n");
				scanf("%*[^\n]");
				scanf("%*c");
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
			printf("星期日\n");
			break;
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
	}
	return 0;
}
