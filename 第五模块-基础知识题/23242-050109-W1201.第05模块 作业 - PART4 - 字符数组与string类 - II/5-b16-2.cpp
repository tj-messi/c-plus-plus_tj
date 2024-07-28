/*朱俊泽 2351114 信15*/ 
#include<iostream>
#include<cstring>
using namespace std;

void get_line(string num[],string name[],int grade[],int index)
{
	cout << "请输入第" << index << "个人的学号、姓名、成绩" << endl;
    cin >> num[index-1] >> name[index-1] >> grade[index-1];
    if(grade[index-1]>=60)
    {
    	num[index-1]="-1";
    	name[index-1]="-1";
    	grade[index-1]=-1;
	}
}

void sort_score(string num[],string name[],int grade[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(grade[i]>grade[j])
			{
				int temp_int=grade[i];string temp_str=num[i];
				grade[i]=grade[j];grade[j]=temp_int;
				num[i]=num[j];num[j]=temp_str;
				temp_str=name[i];
				name[i]=name[j];name[j]=temp_str;
			}
		}
	}
}

void cout_list(string num[],string name[],int grade[])
{
	cout<<endl<<"不及格名单(成绩升序):"<<endl;
	for(int i=0;i<10;i++)
	{
		if(name[i]!="-1")
			cout<<name[i]<<" "<<num[i]<<" "<<grade[i]<<endl;
	}
}

int main()
{
	string num[10];
	string name[10];
	int grade[10]={-1};
	for(int i=0;i<10;i++)
	{
		get_line(num,name,grade,i+1);
	}
	sort_score(num,name,grade);
	cout_list(num,name,grade);
	return 0;
}
