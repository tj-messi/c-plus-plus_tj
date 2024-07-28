/*2351114 ÐÅ15 Öì¿¡Ôó*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	printf("ÇëÊäÈë[0,100ÒÚ)Ö®¼äµÄÊý×Ö:\n");
	//ÏÈ°ÑÃ¿Ò»Î»Êý×ÖÈ¡ÏÂÀ´¼ÇÂ¼ÏÈ£»
	double a0_2;
	scanf("%lf", &a0_2);
	printf("´óÐ´½á¹ûÊÇ:\n");
	int a0=(int)(a0_2/10);
	a0_2/=10;
	double a0_1=a0_2-a0;
	int a=(int)(a0/100000000);//Ê®ÒÚ 
	a0-=a*100000000;
	int b=(int)(a0/10000000);//ÒÚ 
	a0-=b*10000000;
	int c=(int)(a0/1000000);//Ç§Íò 
	a0-=c*1000000;
	int d=(int)(a0/100000);//°ÙÍò 
	a0-=d*100000;
	int e=(int)(a0/10000);//Ê®Íò 
	a0-=e*10000;
	int f=(int)(a0/1000);//Íò 
	a0-=f*1000;
	int g=(int)(a0/100);//Ç§ 
	a0-=g*100;
	int h=(int)(a0/10);//°Ù 
	a0-=h*10;
	int i=(int)(a0);//Ê® 
	a0-=i;
	int j=(int)((a0_1+0.0001)/0.1)%10;//¸ö
	a0_1-=j*0.1;
	int k=(int)((a0_1+0.0001)/0.01)%10;//½Ç
	a0_1-=k*0.01; 
	int l= (int)((a0_1+0.0001)/0.001)%10;//·Ö 
	

	int flag=0; 
	//¿ªÊ¼Êä³ö	
	//ÒÚ 
	if (a != 0)
	{
		switch (a)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
		if (b == 0)
			printf("ÒÚ");
	}
	if (b != 0)
	{
		switch (b)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("ÒÚ");
	}
	if(a != 0||b != 0)
		flag=1;
	//Íò
	if (c!= 0)//x
	{
		switch (c)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
			default:
				break;
		}
		printf("Çª");
		if(d!=0)//xx
		{
			switch (d)
			{
				case 1:
					printf("Ò¼");
					break;
				case 2:
					printf("·¡");
					break;
				case 3:
					printf("Èþ");
					break;
				case 4:
					printf("ËÁ");
					break;
				case 5:
					printf("Îé");
					break;
				case 6:
					printf("Â½");
					break;
				case 7:
					printf("Æâ");
					break;
				case 8:
					printf("°Æ");
					break;
				case 9:
					printf("¾Á");
					break;
				default:
					break;
			}
			printf("°Û");
			if(e!=0)//xxx
			{
				switch (e)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(f!=0)//xxxx
				{
						switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//xxx0
				{
					printf("Íò");
				}
			}
			else//xx0
			{
				if(f!=0)//xx0x
				{
					printf("Áã");
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//xx00
				{
					printf("Íò");
				}
			}
		}
		else//x0
		{
			if(e!=0)//x0x
			{
				printf("Áã");
						switch (e)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(f!=0)//x0xx
				{
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//x0x0
				{
					printf("Íò");
				}
			}
			else//x00
			{
				if(f!=0)//x00x
				{
					printf("Áã");
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
					
				}
				else//x000
				{
					printf("Íò");	
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
				printf("Áã");
			}
				switch (d)
			{
				case 1:
					printf("Ò¼");
					break;
				case 2:
					printf("·¡");
					break;
				case 3:
					printf("Èþ");
					break;
				case 4:
					printf("ËÁ");
					break;
				case 5:
					printf("Îé");
					break;
				case 6:
					printf("Â½");
					break;
				case 7:
					printf("Æâ");
					break;
				case 8:
					printf("°Æ");
					break;
				case 9:
					printf("¾Á");
					break;
				default:
					break;
			}
			printf("°Û");
			if(e!=0)//0xx
			{
				switch (e)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(f!=0)//0xxx
				{
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//0xx0
				{
					printf("Íò");
				}
			}
			else//0x0
			{
				
				if(f!=0)//0x0x
				{
				printf("Áã");
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//0x00
				{
					printf("Íò");
				}
			}
		}
		else//00
		{
			if(e!=0)//00x
			{
				if(flag==1)
				{
				printf("Áã");
					switch (e)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				}
				if(f!=0)//00xx
				{
					switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
				}
				else//00x0
				{
						printf("Íò");
				}
			}
			else//000
			{
				if(f!=0)//000x
				{
					if(flag==1){
					printf("Áã");
				}
						switch (f)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Íò");
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=1;
	}
	//¸ö
	if (g!= 0)//x
	{
		switch (g)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
			default:
				break;
		}
		printf("Çª");
		if(h!=0)//xx
		{
			switch (h)
			{
				case 1:
					printf("Ò¼");
					break;
				case 2:
					printf("·¡");
					break;
				case 3:
					printf("Èþ");
					break;
				case 4:
					printf("ËÁ");
					break;
				case 5:
					printf("Îé");
					break;
				case 6:
					printf("Â½");
					break;
				case 7:
					printf("Æâ");
					break;
				case 8:
					printf("°Æ");
					break;
				case 9:
					printf("¾Á");
					break;
				default:
					break;
			}
			printf("°Û");
			if(i!=0)//xxx
			{
				switch (i)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(j!=0)//xxxx
				{
						switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//xxx0
				{
					printf("Ô²");
				}
			}
			else//xx0
			{
				if(j!=0)//xx0x
				{
					printf("Áã");
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//xx00
				{
					printf("Ô²");
				}
			}
		}
		else//x0
		{
			if(i!=0)//x0x
			{
				printf("Áã");
						switch (i)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(j!=0)//x0xx
				{
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//x0x0
				{
					printf("Ô²");
				}
			}
			else//x00
			{
				if(j!=0)//x00x
				{
					printf("Áã");
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
					
				}
				else//x000
				{
					printf("Ô²");	
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
				printf("Áã");
			}
				switch (h)
			{
				case 1:
					printf("Ò¼");
					break;
				case 2:
					printf("·¡");
					break;
				case 3:
					printf("Èþ");
					break;
				case 4:
					printf("ËÁ");
					break;
				case 5:
					printf("Îé");
					break;
				case 6:
					printf("Â½");
					break;
				case 7:
					printf("Æâ");
					break;
				case 8:
					printf("°Æ");
					break;
				case 9:
					printf("¾Á");
					break;
				default:
					break;
			}
			printf("°Û");
			if(i!=0)//0xx
			{
				switch (i)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				if(j!=0)//0xxx
				{
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//0xx0
				{
				printf("Ô²");
				}
			}
			else//0x0
			{
				
				if(j!=0)//0x0x
				{
				printf("Áã");
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//0x00
				{
					printf("Ô²");
				}
			}
		}
		else//00
		{
			if(i!=0)//00x
			{
				if(flag==1)
				{
				printf("Áã");
					switch (i)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ê°");
				}
				if(j!=0)//00xx
				{
					switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
				}
				else//00x0
				{
						printf("Ô²");
				}
			}
			else//000
			{
				if(j!=0)//000x
				{
					if(flag==1){
					printf("Áã");
				}
						switch (j)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("Ô²");
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=1;
	}
	
	//Ð¡Êý 
	if(k==0&&l==0){
		printf("Õû");
	}
	else{
		if(l==0){
			switch (k)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("½Ç");
		printf("Õû");
		}
		
		else{
				switch (k)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("½Ç");
			switch (l)
		{
			case 1:
				printf("Ò¼");
				break;
			case 2:
				printf("·¡");
				break;
			case 3:
				printf("Èþ");
				break;
			case 4:
				printf("ËÁ");
				break;
			case 5:
				printf("Îé");
				break;
			case 6:
				printf("Â½");
				break;
			case 7:
				printf("Æâ");
				break;
			case 8:
				printf("°Æ");
				break;
			case 9:
				printf("¾Á");
				break;
			default:
				break;
		}
		printf("·Ö");
		
		}
	}
	return 0;
}
