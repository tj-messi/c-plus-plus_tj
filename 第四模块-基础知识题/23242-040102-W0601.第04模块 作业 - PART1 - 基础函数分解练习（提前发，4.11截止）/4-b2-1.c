/*2351114 ��15 �쿡��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int zeller(int y,int m,int d)
{	
	int c=y/100;//����
	int y_last2=y-c*100;//��ݺ���λ
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}


int main()
{
	int year,month,day,ret;
	while(1){//�ж����� 
		printf("��������[1900-2100]���¡��գ�\n");
		ret = scanf("%d%d%d", &year, &month, &day);
		//�Ƿ� 
		if (ret != 3) {
			printf("�����������������\n");
			scanf("%*[^\n]");
			scanf("%*c");	
			continue;
		}
		//�� 
		if (!(year>=1900&&year<=2100) ){
			printf("��ݲ���ȷ������������\n");
			scanf("%*[^\n]");
			scanf("%*c");
			continue;
		}
		//�� 
		if (!(month<=12&&month>=1)) {
			printf("�·ݲ���ȷ������������\n");
			scanf("%*[^\n]");
			scanf("%*c");
			continue;
		}
		//�� 
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (!(day<=31&&day>=1)) {
				printf("�ղ���ȷ������������\n");
				scanf("%*[^\n]");
				scanf("%*c");
				continue;
			}
		}
		if (month == 4 || month == 6 || month == 9 || month == 11) {
			if (!(day<=30&&day>=1)) {
				printf("�ղ���ȷ������������\n");
				scanf("%*[^\n]");
				scanf("%*c");
				continue;
			}
		}
		if (month == 2) {
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
				if (!(day<=29&&day>=1)) {
					printf("�ղ���ȷ������������\n");
					scanf("%*[^\n]");
					scanf("%*c");
					continue;
				}
			}

			else if (!(day<=28&&day>=1)) {
				printf("�ղ���ȷ������������\n");
				scanf("%*[^\n]");
				scanf("%*c");
				continue;
			}
		}
		//�ߵ��״���û����
		break; 
	}
	if(month==1||month==2){
		year--;
		month+=12;	
	}
	int ans=zeller(year,month,day);
	switch(ans){
		case 0:
			printf("������\n");
			break;
		case 1:
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
	}
	return 0;
}
