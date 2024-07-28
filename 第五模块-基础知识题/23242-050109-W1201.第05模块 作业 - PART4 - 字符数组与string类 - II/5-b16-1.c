/*朱俊泽 2351114 信15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_line(char num[], char name[],int grade[] ,int index)
{
    printf("请输入第%d个人的学号、姓名、成绩\n", index);
    scanf("%s %s %d", num, name, &grade[index-1]);
    if(grade[index-1]<60)
    	grade[index-1]=-1;
}

int string_cmp(char numi[],char numj[])
{
	for(int k=0;k<7;k++)
	{
		if(numi[k]==numj[k])
			continue;
		else
		{
			return numi[k]<numj[k] ? 1 : 0;
		}
	}
	return 0;
}

void sort_score(char num[][8],char name[][9],int grade[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (string_cmp(num[i],num[j]))//如果num[i]<num[j]则交换 
            {
            	char temp[8];int temp1;
                for (int k = 0; k < 7; k++)
                    temp[k] = num[i][k];
                for (int k = 0; k < 7; k++)
                    num[i][k] = num[j][k];
                for (int k = 0; k < 7; k++)
                    num[j][k] = temp[k];
                for (int k = 0; k < 8; k++)
                    temp[k] = name[i][k];
                for (int k = 0; k < 8; k++)
                    name[i][k] = name[j][k];
                for (int k = 0; k < 8; k++)
                    name[j][k] = temp[k];
                temp1 = grade[i];
                grade[i] = grade[j];grade[j]=temp1;
            }
        }
    }
}

void cout_list(char num[][8],char name[][9],int grade[])
{
	 printf("\n及格名单(学号降序):\n");
	for(int i=0;i<10;i++)
	{
		if (grade[i] != -1)
            printf("%s %s %d\n", name[i], num[i], grade[i]);
	}
}

int main()
{
	char num[10][8];
	char name[10][9];
	int grade[10]={-1};
	for(int i=0;i<10;i++)
	{
		get_line(num[i],name[i],grade,i+1);
	}
	//printf("there\n");
	sort_score(num,name,grade);
	cout_list(num,name,grade);
	return 0;
}
