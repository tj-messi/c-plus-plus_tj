/*2351114 ��15 �쿡��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("�������꣬�£���\n");
	int year, month, day;
    scanf("%d%d%d",&year,&month,&day);
    if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0)){
    	if(month>12||month<1){
    		printf("�������-�·ݲ���ȷ\n");
		}
		if (month == 1)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day);
            }
        }
        else if (month == 2)
        {
            if (day < 1 || day>29)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n",year,month,day,year,day+31);
            }
        }
        else if (month == 3)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31+29);
            }
        }
        else if (month == 4)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29+31);
            }
        }
        else if (month == 5)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29+31+30);
            }
        }
        else if (month == 6)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30+31);
            }
        }
        else if (month == 7)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31+30);
            }
        }
        else if (month == 8)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31 + 30+31);
            }
        }
        else if (month == 9)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31);
            }
        }
        else if (month == 10)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31+30);
            }
        }
        else if (month == 11)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31 + 30 + 31+31+30+31);
            }
        }
        else if (month == 12)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30);
            }
        }
	}
	else{
		if(month>12||month<1)
		{
    		printf("�������-�·ݲ���ȷ\n");
		}
		if(month==1)
		{
			if (day < 1 || day>31)
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day);
            }
    	}
        if(month==2)
		{
            if (day < 1 || day>28)
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n",year,month,day,year,day+31);
            }
        }
        if(month==3)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31+28);
            }
        }
        if(month==4)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28+31);
            }
        }
        if(month==5)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 +28+31+30);
            }
        }
        if(month==6)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28+ 31 + 30+31);
            }
        }
        if(month==7)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31+30);
            }
        }
        if(month==8)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31 + 30+31);
            }
        }
        if(month==9)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31);
            }
        }
        if(month==10)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31+30);
            }
        }
        if(month==11)
        {
            if (day < 1 || day>30)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31 + 30 + 31+31+30+31);
            }
        }
        if(month==12)
        {
            if (day < 1 || day>31)
                printf("�������-�����µĹ�ϵ�Ƿ�\n");
            else
            {
                printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30);
            }
        }
	}
	return 0;
} 
