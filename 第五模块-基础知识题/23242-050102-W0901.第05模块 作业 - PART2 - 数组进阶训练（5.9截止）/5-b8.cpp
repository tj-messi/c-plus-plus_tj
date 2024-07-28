/*2351114 ��15 �쿡��*/
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

#define N_POW	112		//�ݵĴ���
#define N_NUM	N_POW+1	//ʮ������ʽ��С��λ��


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
  �������ƣ�
  ��    �ܣ������ݴα�����ĳ��������С����ʮ����ֵ
  ���������char pure_decimal[] : ��Ŷ�����С��������
            char out[] ����ż���õ���ʮ����С��
		   char power_table[][N_NUM + 1]���ݴα�
  �� �� ֵ��
  ˵    ����
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
	cout<<"������һ�������ƴ�С����С���㿪ͷ��С����󲻳���112λ(����.101101)"<<endl;
	while(1)
	{	
		cin>>pure_decimal;
		int len=strlen(pure_decimal);//cout<<len<<endl;
		if (cin.fail()) {
			cout<<"������.��ͷ��������"<<endl;
       		cin.clear();
       		cin.ignore(9999,'\n');
       	  	continue;
      	}
      	else if (pure_decimal[0]!='.') {
     		cout<<"������.��ͷ��������"<<endl;
       		cin.ignore(9999,'\n');
       		continue;
    	}
    	
		else if(check01(pure_decimal,len))
   		{
   			cout<<"����Ĳ���0/1��������"<<endl;
       		cin.ignore(9999,'\n');
           	continue;
		}
		else if(!check0(pure_decimal,len))
		{
			cout<<"����Ϊȫ0��������"<<endl;
       		cin.ignore(9999,'\n');
           	continue;
		}
   		else break;
  	}
   	cout<<endl; 
}

void output_rod(const bool is_upper)
{
	if (is_upper) { //�ϱ��
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "----------- �ϱ��  1         2         3         4         5         6         7         8         9         A         B         C" << endl;
		cout << "-----------123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
	}
	else {//�±��
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "-----------123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl;
		cout << "----------- �±��  1         2         3         4         5         6         7         8         9         A         B         C" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
	}
}

int main()
{
	char  power_table[N_POW + 1][N_NUM + 1]; //��ȫ����ʼ��Ϊ0
	for(int i=0;i<N_POW + 1;i++)
	{
		for(int j=0;j<N_NUM + 1;j++)
		power_table[i][j]='0';
	}
	int i;
	power_table[1][1] = '5'; 
	for (i = 1; i < N_POW; i++)
		calc_next(power_table[i], power_table[i+1],i); 
	/* �ϱ�� */
	output_rod(1);

	/* ��� */
	for (i = 1; i <= N_POW; i++)
		output("", power_table[i],i);

	/* �±�� */
	output_rod(0);
	cout << endl;

	/* ����һ�������ƴ�С�� */
	char pure_decimal[N_NUM + 1];
	for(int i=0;i<N_NUM + 1;i++)
	{
		pure_decimal[i]=0;
	}
	int lenstr=0;
	input_pure_decimal(pure_decimal);
	//for(int i=0;i<N_NUM+1;i++)cout<<pure_decimal[i];
	/* �ϱ�� */
	output_rod(1);

	output("�������� : ", pure_decimal,0);
	char out[N_NUM + 1];
	for(int i=0;i<N_NUM + 1;i++)
	{
		out[i]='0';
	}
	calc_num(pure_decimal, out, power_table);
	output("����ֵ : 0.", out,0);
	/* �±�� */
	output_rod(0);

	cout << endl;

	return 0;
}

/*
PPT����Ĳ�������
.00110011001100110011010
*/
