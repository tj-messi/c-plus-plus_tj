/*朱俊泽 信15 2351114*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year,month;
	while (1) {
		printf("请输入年份(2000-2030)和月份(1-12) : ");
		int ret = scanf("%d%d", &year, &month);   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		
		if (ret != 2) {
			//清空输入缓冲区
			scanf("%*[^\n]");
			scanf("%*c");
			printf("输入非法，请重新输入\n");
			}
		else if (year >= 2000 && year <= 2030 && month >= 1 && month <= 12)
			break;
		else
			printf("输入非法，请重新输入\n");
			
	}
	int first_week;
	while (1) {
		printf("请输入%d年%d月1日的星期(0-6表示星期日-星期六) : ",year,month);
		int ret = scanf("%d", &first_week);
		if (ret != 1) {
			//清空输入缓冲区
			scanf("%*[^\n]");
			scanf("%*c");
			printf("输入非法，请重新输入\n");
			}
		else if (first_week >= 0 && first_week <= 6)
			break;
		else
			printf("输入非法，请重新输入\n");
			
	}
	printf("\n");
	printf("\n%d年%d月的月历为:\n", year, month);
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
	printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
	for(int i=1;i<=first_week;i++){
		printf("        ");//8(2+2+2+2)
	}
	int week=first_week;
	int count=1;
	//cout<<setiosflags(ios::right)<<setw(4)
	while(day){
		if(count<10){//123x 
			if(week==6){//到周六了 
			printf("   %d    ", count);
			week=-1;
			printf("\n");
			}
			else{//非周六 
			printf("   %d    ", count);
			}
			week++;
			day--;
			count++;
		}
		else{//12xx
			if(week==6){//到周六了 
			printf("  %d  ", count);
			week=-1;
			printf("\n");
			}
			else{//非周六 
			printf("  %d    ", count);
			}
			week++;
			day--;
			count++;
		}
		
	}

	return 0;
}
