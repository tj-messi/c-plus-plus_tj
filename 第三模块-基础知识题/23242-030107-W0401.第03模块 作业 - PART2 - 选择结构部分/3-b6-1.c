/*2351114 ��15 �쿡��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	printf("������[0,100��)֮�������:\n");
	//�Ȱ�ÿһλ����ȡ������¼�ȣ�
	double a0_2;
	scanf("%lf", &a0_2);
	printf("��д�����:\n");
	int a0=(int)(a0_2/10);
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
	int j=(int)((a0_1+0.0001)/0.1)%10;//��
	a0_1-=j*0.1;
	int k=(int)((a0_1+0.0001)/0.01)%10;//��
	a0_1-=k*0.01; 
	int l= (int)((a0_1+0.0001)/0.001)%10;//�� 
	

	int flag=0; 
	//��ʼ���	
	//�� 
	if (a != 0)
	{
		switch (a)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
		if (b == 0)
			printf("��");
	}
	if (b != 0)
	{
		switch (b)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
	}
	if(a != 0||b != 0)
		flag=1;
	//��
	if (c!= 0)//x
	{
		switch (c)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
			default:
				break;
		}
		printf("Ǫ");
		if(d!=0)//xx
		{
			switch (d)
			{
				case 1:
					printf("Ҽ");
					break;
				case 2:
					printf("��");
					break;
				case 3:
					printf("��");
					break;
				case 4:
					printf("��");
					break;
				case 5:
					printf("��");
					break;
				case 6:
					printf("½");
					break;
				case 7:
					printf("��");
					break;
				case 8:
					printf("��");
					break;
				case 9:
					printf("��");
					break;
				default:
					break;
			}
			printf("��");
			if(e!=0)//xxx
			{
				switch (e)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(f!=0)//xxxx
				{
						switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//xxx0
				{
					printf("��");
				}
			}
			else//xx0
			{
				if(f!=0)//xx0x
				{
					printf("��");
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//xx00
				{
					printf("��");
				}
			}
		}
		else//x0
		{
			if(e!=0)//x0x
			{
				printf("��");
						switch (e)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(f!=0)//x0xx
				{
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//x0x0
				{
					printf("��");
				}
			}
			else//x00
			{
				if(f!=0)//x00x
				{
					printf("��");
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
					
				}
				else//x000
				{
					printf("��");	
				}
			}
		}
	}
	else//0
	{
		if(d!=0)//0x
		{
			if(flag==1)
			{
				printf("��");
			}
				switch (d)
			{
				case 1:
					printf("Ҽ");
					break;
				case 2:
					printf("��");
					break;
				case 3:
					printf("��");
					break;
				case 4:
					printf("��");
					break;
				case 5:
					printf("��");
					break;
				case 6:
					printf("½");
					break;
				case 7:
					printf("��");
					break;
				case 8:
					printf("��");
					break;
				case 9:
					printf("��");
					break;
				default:
					break;
			}
			printf("��");
			if(e!=0)//0xx
			{
				switch (e)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(f!=0)//0xxx
				{
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//0xx0
				{
					printf("��");
				}
			}
			else//0x0
			{
				
				if(f!=0)//0x0x
				{
				printf("��");
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//0x00
				{
					printf("��");
				}
			}
		}
		else//00
		{
			if(e!=0)//00x
			{
				if(flag==1)
				{
				printf("��");
					switch (e)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				}
				if(f!=0)//00xx
				{
					switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
				}
				else//00x0
				{
						printf("��");
				}
			}
			else//000
			{
				if(f!=0)//000x
				{
					if(flag==1){
					printf("��");
				}
						switch (f)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=1;
	}
	//��
	if (g!= 0)//x
	{
		switch (g)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
			default:
				break;
		}
		printf("Ǫ");
		if(h!=0)//xx
		{
			switch (h)
			{
				case 1:
					printf("Ҽ");
					break;
				case 2:
					printf("��");
					break;
				case 3:
					printf("��");
					break;
				case 4:
					printf("��");
					break;
				case 5:
					printf("��");
					break;
				case 6:
					printf("½");
					break;
				case 7:
					printf("��");
					break;
				case 8:
					printf("��");
					break;
				case 9:
					printf("��");
					break;
				default:
					break;
			}
			printf("��");
			if(i!=0)//xxx
			{
				switch (i)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(j!=0)//xxxx
				{
						switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//xxx0
				{
					printf("Բ");
				}
			}
			else//xx0
			{
				if(j!=0)//xx0x
				{
					printf("��");
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//xx00
				{
					printf("Բ");
				}
			}
		}
		else//x0
		{
			if(i!=0)//x0x
			{
				printf("��");
						switch (i)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(j!=0)//x0xx
				{
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//x0x0
				{
					printf("Բ");
				}
			}
			else//x00
			{
				if(j!=0)//x00x
				{
					printf("��");
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
					
				}
				else//x000
				{
					printf("Բ");	
				}
			}
		}
	}
	else//0
	{
		if(h!=0)//0x
		{
			if(flag==1)
			{
				printf("��");
			}
				switch (h)
			{
				case 1:
					printf("Ҽ");
					break;
				case 2:
					printf("��");
					break;
				case 3:
					printf("��");
					break;
				case 4:
					printf("��");
					break;
				case 5:
					printf("��");
					break;
				case 6:
					printf("½");
					break;
				case 7:
					printf("��");
					break;
				case 8:
					printf("��");
					break;
				case 9:
					printf("��");
					break;
				default:
					break;
			}
			printf("��");
			if(i!=0)//0xx
			{
				switch (i)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				if(j!=0)//0xxx
				{
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//0xx0
				{
				printf("Բ");
				}
			}
			else//0x0
			{
				
				if(j!=0)//0x0x
				{
				printf("��");
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//0x00
				{
					printf("Բ");
				}
			}
		}
		else//00
		{
			if(i!=0)//00x
			{
				if(flag==1)
				{
				printf("��");
					switch (i)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("ʰ");
				}
				if(j!=0)//00xx
				{
					switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
				}
				else//00x0
				{
						printf("Բ");
				}
			}
			else//000
			{
				if(j!=0)//000x
				{
					if(flag==1){
					printf("��");
				}
						switch (j)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("Բ");
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=1;
	}
	
	//С�� 
	if(k==0&&l==0){
		printf("��");
	}
	else{
		if(l==0){
			switch (k)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
		printf("��");
		}
		
		else{
				switch (k)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
			switch (l)
		{
			case 1:
				printf("Ҽ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 5:
				printf("��");
				break;
			case 6:
				printf("½");
				break;
			case 7:
				printf("��");
				break;
			case 8:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			default:
				break;
		}
		printf("��");
		
		}
	}
	return 0;
}
