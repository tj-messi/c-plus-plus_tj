/*�쿡�� ��15 2351114*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year,month;
	while (1) {
		printf("���������(2000-2030)���·�(1-12) : ");
		int ret = scanf("%d%d", &year, &month);   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		
		if (ret != 2) {
			//������뻺����
			scanf("%*[^\n]");
			scanf("%*c");
			printf("����Ƿ�������������\n");
			}
		else if (year >= 2000 && year <= 2030 && month >= 1 && month <= 12)
			break;
		else
			printf("����Ƿ�������������\n");
			
	}
	int first_week;
	while (1) {
		printf("������%d��%d��1�յ�����(0-6��ʾ������-������) : ",year,month);
		int ret = scanf("%d", &first_week);
		if (ret != 1) {
			//������뻺����
			scanf("%*[^\n]");
			scanf("%*c");
			printf("����Ƿ�������������\n");
			}
		else if (first_week >= 0 && first_week <= 6)
			break;
		else
			printf("����Ƿ�������������\n");
			
	}
	printf("\n");
	printf("\n%d��%d�µ�����Ϊ:\n", year, month);
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
	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
	for(int i=1;i<=first_week;i++){
		printf("        ");//8(2+2+2+2)
	}
	int week=first_week;
	int count=1;
	//cout<<setiosflags(ios::right)<<setw(4)
	while(day){
		if(count<10){//123x 
			if(week==6){//�������� 
			printf("   %d    ", count);
			week=-1;
			printf("\n");
			}
			else{//������ 
			printf("   %d    ", count);
			}
			week++;
			day--;
			count++;
		}
		else{//12xx
			if(week==6){//�������� 
			printf("  %d  ", count);
			week=-1;
			printf("\n");
			}
			else{//������ 
			printf("  %d    ", count);
			}
			week++;
			day--;
			count++;
		}
		
	}

	return 0;
}
