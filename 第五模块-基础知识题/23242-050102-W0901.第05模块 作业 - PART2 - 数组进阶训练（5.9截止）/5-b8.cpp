/*2351114 信15 朱俊泽*/
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

#define N_POW	112		//幂的次数
#define N_NUM	N_POW+1	//十进制形式的小数位数


void output(const char prompt[], const char d[],int up)
{
	if(prompt=="")
	{
		cout<<"2^"<<setw(4)<<-up<<" : 0.";
		for(int i=1;i<=up;i++)
		{
			cout<<d[i];
		}
		cout<<endl;
	}
	else
	{
		int roof=0;
		cout<<prompt;
		for(int i=N_NUM-1;i>=1;i--)
		{
			//cout<<d[i];
			if(d[i]-'0'>0)
			{
				roof=i;
				break;
			}
		}
		for(int i=1;i<=roof;i++)
		{
			cout<<d[i];
		}
		cout<<endl;
	}
}

void calc_next(char d_cur[], char d_next[],int up)
{
	for(int i=1;i<=up+1;i++)
	{
		d_next[i]=(d_cur[i]-'0')/2+'0';
		if((d_cur[i-1]-'0')%2!=0)d_next[i]+=5;
	}
}

/***************************************************************************
  函数名称：
  功    能：根据幂次表，计算某个二进制小数的十进制值
  输入参数：char pure_decimal[] : 存放二进制小数的数组
            char out[] ：存放计算得到的十进制小数
		   char power_table[][N_NUM + 1]：幂次表
  返 回 值：
  说    明：
 ***************************************************************************/
void calc_num(char pure_decimal[], char out[], char power_table[][N_NUM + 1])
{
	int roof=0;
	for(int i=N_NUM-1;i>=1;i--)
	{
		//cout<<d[i];
		if(pure_decimal[i]=='1')
		{
			roof=i;
			break;
		}
	}
	for(int i=roof;i>=1;i--)
	{
		if(pure_decimal[i]=='1')
		{
			for(int j=i;j>=1;j--)
			{
				out[j]+=power_table[i][j]-'0';
				if((out[j]-'0')>=10)
				{
					out[j]-=10;
					out[j-1]++;
				}
			}
		}
	}
	
}


bool check01(char pure_decimal[],int len)
{
	for(int i=1;i<=len-1;i++)
	{
		if(pure_decimal[i]!='0'&&pure_decimal[i]!='1')
		return true;	
	}
	return false;	
} 

bool check0(char pure_decimal[],int len)
{
	for(int i=1;i<=len-1;i++)
	{
		if(pure_decimal[i]=='1')
		return true;	
	}
	return false;
}

void input_pure_decimal(char pure_decimal[])
{
	cout<<"请输入一个二进制纯小数，小数点开头，小数点后不超过112位(例：.101101)"<<endl;
	while(1)
	{	
		cin>>pure_decimal;
		int len=strlen(pure_decimal);//cout<<len<<endl;
		if (cin.fail()) {
			cout<<"不是以.开头，请重输"<<endl;
       		cin.clear();
       		cin.ignore(9999,'\n');
       	  	continue;
      	}
      	else if (pure_decimal[0]!='.') {
     		cout<<"不是以.开头，请重输"<<endl;
       		cin.ignore(9999,'\n');
       		continue;
    	}
    	
		else if(check01(pure_decimal,len))
   		{
   			cout<<"输入的不是0/1，请重输"<<endl;
       		cin.ignore(9999,'\n');
           	continue;
		}
		else if(!check0(pure_decimal,len))
		{
			cout<<"输入为全0，请重输"<<endl;
       		cin.ignore(9999,'\n');
           	continue;
		}
   		else break;
  	}
   	cout<<endl; 
}

void output_rod(const bool is_upper)
{
	if (is_upper) { //上标尺
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "----------- 上标尺  1         2         3         4         5         6         7         8         9         A         B         C" << endl;
		cout << "-----------123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
	}
	else {//下标尺
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "-----------123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
		cout << "----------- 下标尺  1         2         3         4         5         6         7         8         9         A         B         C" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
	}
}

int main()
{
	char  power_table[N_POW + 1][N_NUM + 1]; //先全部初始化为0
	for(int i=0;i<N_POW + 1;i++)
	{
		for(int j=0;j<N_NUM + 1;j++)
		power_table[i][j]='0';
	}
	int i;
	power_table[1][1] = '5'; 
	for (i = 1; i < N_POW; i++)
		calc_next(power_table[i], power_table[i+1],i); 
	/* 上标尺 */
	output_rod(1);

	/* 输出 */
	for (i = 1; i <= N_POW; i++)
		output("", power_table[i],i);

	/* 下标尺 */
	output_rod(0);
	cout << endl;

	/* 输入一个二进制纯小数 */
	char pure_decimal[N_NUM + 1];
	for(int i=0;i<N_NUM + 1;i++)
	{
		pure_decimal[i]=0;
	}
	int lenstr=0;
	input_pure_decimal(pure_decimal);
	//for(int i=0;i<N_NUM+1;i++)cout<<pure_decimal[i];
	/* 上标尺 */
	output_rod(1);

	output("输入数据 : ", pure_decimal,0);
	char out[N_NUM + 1];
	for(int i=0;i<N_NUM + 1;i++)
	{
		out[i]='0';
	}
	calc_num(pure_decimal, out, power_table);
	output("计算值 : 0.", out,0);
	/* 下标尺 */
	output_rod(0);

	cout << endl;

	return 0;
}

/*
PPT例题的测试数据
.00110011001100110011010
*/
