/*2351114 ��15 �쿡��*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout<<"������[0,100��)֮�������:"<<endl;
	//�Ȱ�ÿһλ����ȡ������¼�ȣ�
	double a0_2;
	cin>>a0_2;
	cout<<"��д�����:"<<endl;
	int a0=static_cast<int>(a0_2/10);
	a0_2/=10;
	double a0_1=a0_2-a0;
	int a=(int)(a0/100000000);//ʮ�� 
	a0-=a*100000000;
	int b=(int)(a0/10000000);//�� 
	a0-=b*10000000;
	int c=(int)(a0/1000000);//ǧ�� 
	a0-=c*1000000;
	int d=(int)(a0/100000);//���� 
	a0-=d*100000;
	int e=(int)(a0/10000);//ʮ�� 
	a0-=e*10000;
	int f=(int)(a0/1000);//�� 
	a0-=f*1000;
	int g=(int)(a0/100);//ǧ 
	a0-=g*100;
	int h=(int)(a0/10);//�� 
	a0-=h*10;
	int i=(int)(a0);//ʮ 
	a0-=i;
	int j= static_cast<int>((a0_1+0.0001)/0.1)%10;//��
	a0_1-=j*0.1;
	int k= static_cast<int>((a0_1+0.0001)/0.01)%10;//��
	a0_1-=k*0.01; 

	int l= static_cast<int>((a0_1+0.0001)/0.001)%10;//�� 

	bool flag=false; 
	//��ʼ���	
	//�� 
	if (a != 0)
	{
		switch (a)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
		if (b == 0)
			cout << "��";
	}
	if (b != 0)
	{
		switch (b)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
	}
	if(a != 0||b != 0)
		flag=true;
	//��
	if (c!= 0)//x
	{
		switch (c)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
			default:
				break;
		}
		cout << "Ǫ";
		if(d!=0)//xx
		{
			switch (d)
			{
				case 1:
					cout << "Ҽ";
					break;
				case 2:
					cout << "��";
					break;
				case 3:
					cout << "��";
					break;
				case 4:
					cout << "��";
					break;
				case 5:
					cout << "��";
					break;
				case 6:
					cout << "½";
					break;
				case 7:
					cout << "��";
					break;
				case 8:
					cout << "��";
					break;
				case 9:
					cout << "��";
					break;
				default:
					break;
			}
			cout << "��";
			if(e!=0)//xxx
			{
				switch (e)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(f!=0)//xxxx
				{
						switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//xxx0
				{
					cout << "��";
				}
			}
			else//xx0
			{
				if(f!=0)//xx0x
				{
					cout << "��";
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//xx00
				{
					cout << "��";
				}
			}
		}
		else//x0
		{
			if(e!=0)//x0x
			{
				cout << "��";
						switch (e)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(f!=0)//x0xx
				{
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//x0x0
				{
					cout << "��";
				}
			}
			else//x00
			{
				if(f!=0)//x00x
				{
					cout << "��";
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
					
				}
				else//x000
				{
					cout << "��";	
				}
			}
		}
	}
	else//0
	{
		if(d!=0)//0x
		{
			if(flag)
			{
				cout << "��";
			}
				switch (d)
			{
				case 1:
					cout << "Ҽ";
					break;
				case 2:
					cout << "��";
					break;
				case 3:
					cout << "��";
					break;
				case 4:
					cout << "��";
					break;
				case 5:
					cout << "��";
					break;
				case 6:
					cout << "½";
					break;
				case 7:
					cout << "��";
					break;
				case 8:
					cout << "��";
					break;
				case 9:
					cout << "��";
					break;
				default:
					break;
			}
			cout << "��";
			if(e!=0)//0xx
			{
				switch (e)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(f!=0)//0xxx
				{
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//0xx0
				{
					cout<<"��";
				}
			}
			else//0x0
			{
				
				if(f!=0)//0x0x
				{
					cout<<"��";
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//0x00
				{
					cout << "��";
				}
			}
		}
		else//00
		{
			if(e!=0)//00x
			{
				if(flag)
				{
					cout<<"��";
					switch (e)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				}
				if(f!=0)//00xx
				{
					switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
				}
				else//00x0
				{
						cout << "��";
				}
			}
			else//000
			{
				if(f!=0)//000x
				{
					if(flag){
						cout<<"��";
				}
						switch (f)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=true;
	}
	//��
	if (g!= 0)//x
	{
		switch (g)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
			default:
				break;
		}
		cout << "Ǫ";
		if(h!=0)//xx
		{
			switch (h)
			{
				case 1:
					cout << "Ҽ";
					break;
				case 2:
					cout << "��";
					break;
				case 3:
					cout << "��";
					break;
				case 4:
					cout << "��";
					break;
				case 5:
					cout << "��";
					break;
				case 6:
					cout << "½";
					break;
				case 7:
					cout << "��";
					break;
				case 8:
					cout << "��";
					break;
				case 9:
					cout << "��";
					break;
				default:
					break;
			}
			cout << "��";
			if(i!=0)//xxx
			{
				switch (i)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(j!=0)//xxxx
				{
						switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//xxx0
				{
					cout << "Բ";
				}
			}
			else//xx0
			{
				if(j!=0)//xx0x
				{
					cout << "��";
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//xx00
				{
					cout << "Բ";
				}
			}
		}
		else//x0
		{
			if(i!=0)//x0x
			{
				cout << "��";
						switch (i)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(j!=0)//x0xx
				{
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//x0x0
				{
					cout << "Բ";
				}
			}
			else//x00
			{
				if(j!=0)//x00x
				{
					cout << "��";
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
					
				}
				else//x000
				{
					cout << "Բ";	
				}
			}
		}
	}
	else//0
	{
		if(h!=0)//0x
		{
			if(flag)
			{
				cout << "��";
			}
				switch (h)
			{
				case 1:
					cout << "Ҽ";
					break;
				case 2:
					cout << "��";
					break;
				case 3:
					cout << "��";
					break;
				case 4:
					cout << "��";
					break;
				case 5:
					cout << "��";
					break;
				case 6:
					cout << "½";
					break;
				case 7:
					cout << "��";
					break;
				case 8:
					cout << "��";
					break;
				case 9:
					cout << "��";
					break;
				default:
					break;
			}
			cout << "��";
			if(i!=0)//0xx
			{
				switch (i)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				if(j!=0)//0xxx
				{
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//0xx0
				{
					cout<<"Բ";
				}
			}
			else//0x0
			{
				
				if(j!=0)//0x0x
				{
					cout<<"��";
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//0x00
				{
					cout << "Բ";
				}
			}
		}
		else//00
		{
			if(i!=0)//00x
			{
				if(flag)
				{
					cout<<"��";
					switch (i)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "ʰ";
				}
				if(j!=0)//00xx
				{
					switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
				}
				else//00x0
				{
						cout << "Բ";
				}
			}
			else//000
			{
				if(j!=0)//000x
				{
					if(flag){
						cout<<"��";
				}
						switch (j)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "Բ";
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=true;
	}
	
	//С�� 
	if(k==0&&l==0){
		cout<<"��";
	}
	else{
		if(l==0){
			switch (k)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
		cout<<"��";
		}
		
		else{
				switch (k)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
			switch (l)
		{
			case 1:
				cout << "Ҽ";
				break;
			case 2:
				cout << "��";
				break;
			case 3:
				cout << "��";
				break;
			case 4:
				cout << "��";
				break;
			case 5:
				cout << "��";
				break;
			case 6:
				cout << "½";
				break;
			case 7:
				cout << "��";
				break;
			case 8:
				cout << "��";
				break;
			case 9:
				cout << "��";
				break;
			default:
				break;
		}
		cout << "��";
		
		}
	}
	return 0;
}
