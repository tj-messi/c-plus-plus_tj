/*2351114 ĞÅ15 Öì¿¡Ôó*/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout<<"ÇëÊäÈë[0,100ÒÚ)Ö®¼äµÄÊı×Ö:"<<endl;
	//ÏÈ°ÑÃ¿Ò»Î»Êı×ÖÈ¡ÏÂÀ´¼ÇÂ¼ÏÈ£»
	double a0_2;
	cin>>a0_2;
	cout<<"´óĞ´½á¹ûÊÇ:"<<endl;
	int a0=static_cast<int>(a0_2/10);
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
	int j= static_cast<int>((a0_1+0.0001)/0.1)%10;//¸ö
	a0_1-=j*0.1;
	int k= static_cast<int>((a0_1+0.0001)/0.01)%10;//½Ç
	a0_1-=k*0.01; 

	int l= static_cast<int>((a0_1+0.0001)/0.001)%10;//·Ö 

	bool flag=false; 
	//¿ªÊ¼Êä³ö	
	//ÒÚ 
	if (a != 0)
	{
		switch (a)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
		if (b == 0)
			cout << "ÒÚ";
	}
	if (b != 0)
	{
		switch (b)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "ÒÚ";
	}
	if(a != 0||b != 0)
		flag=true;
	//Íò
	if (c!= 0)//x
	{
		switch (c)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
			default:
				break;
		}
		cout << "Çª";
		if(d!=0)//xx
		{
			switch (d)
			{
				case 1:
					cout << "Ò¼";
					break;
				case 2:
					cout << "·¡";
					break;
				case 3:
					cout << "Èş";
					break;
				case 4:
					cout << "ËÁ";
					break;
				case 5:
					cout << "Îé";
					break;
				case 6:
					cout << "Â½";
					break;
				case 7:
					cout << "Æâ";
					break;
				case 8:
					cout << "°Æ";
					break;
				case 9:
					cout << "¾Á";
					break;
				default:
					break;
			}
			cout << "°Û";
			if(e!=0)//xxx
			{
				switch (e)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(f!=0)//xxxx
				{
						switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//xxx0
				{
					cout << "Íò";
				}
			}
			else//xx0
			{
				if(f!=0)//xx0x
				{
					cout << "Áã";
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//xx00
				{
					cout << "Íò";
				}
			}
		}
		else//x0
		{
			if(e!=0)//x0x
			{
				cout << "Áã";
						switch (e)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(f!=0)//x0xx
				{
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//x0x0
				{
					cout << "Íò";
				}
			}
			else//x00
			{
				if(f!=0)//x00x
				{
					cout << "Áã";
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
					
				}
				else//x000
				{
					cout << "Íò";	
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
				cout << "Áã";
			}
				switch (d)
			{
				case 1:
					cout << "Ò¼";
					break;
				case 2:
					cout << "·¡";
					break;
				case 3:
					cout << "Èş";
					break;
				case 4:
					cout << "ËÁ";
					break;
				case 5:
					cout << "Îé";
					break;
				case 6:
					cout << "Â½";
					break;
				case 7:
					cout << "Æâ";
					break;
				case 8:
					cout << "°Æ";
					break;
				case 9:
					cout << "¾Á";
					break;
				default:
					break;
			}
			cout << "°Û";
			if(e!=0)//0xx
			{
				switch (e)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(f!=0)//0xxx
				{
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//0xx0
				{
					cout<<"Íò";
				}
			}
			else//0x0
			{
				
				if(f!=0)//0x0x
				{
					cout<<"Áã";
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//0x00
				{
					cout << "Íò";
				}
			}
		}
		else//00
		{
			if(e!=0)//00x
			{
				if(flag)
				{
					cout<<"Áã";
					switch (e)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				}
				if(f!=0)//00xx
				{
					switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
				}
				else//00x0
				{
						cout << "Íò";
				}
			}
			else//000
			{
				if(f!=0)//000x
				{
					if(flag){
						cout<<"Áã";
				}
						switch (f)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Íò";
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=true;
	}
	//¸ö
	if (g!= 0)//x
	{
		switch (g)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
			default:
				break;
		}
		cout << "Çª";
		if(h!=0)//xx
		{
			switch (h)
			{
				case 1:
					cout << "Ò¼";
					break;
				case 2:
					cout << "·¡";
					break;
				case 3:
					cout << "Èş";
					break;
				case 4:
					cout << "ËÁ";
					break;
				case 5:
					cout << "Îé";
					break;
				case 6:
					cout << "Â½";
					break;
				case 7:
					cout << "Æâ";
					break;
				case 8:
					cout << "°Æ";
					break;
				case 9:
					cout << "¾Á";
					break;
				default:
					break;
			}
			cout << "°Û";
			if(i!=0)//xxx
			{
				switch (i)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(j!=0)//xxxx
				{
						switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//xxx0
				{
					cout << "Ô²";
				}
			}
			else//xx0
			{
				if(j!=0)//xx0x
				{
					cout << "Áã";
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//xx00
				{
					cout << "Ô²";
				}
			}
		}
		else//x0
		{
			if(i!=0)//x0x
			{
				cout << "Áã";
						switch (i)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(j!=0)//x0xx
				{
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//x0x0
				{
					cout << "Ô²";
				}
			}
			else//x00
			{
				if(j!=0)//x00x
				{
					cout << "Áã";
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
					
				}
				else//x000
				{
					cout << "Ô²";	
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
				cout << "Áã";
			}
				switch (h)
			{
				case 1:
					cout << "Ò¼";
					break;
				case 2:
					cout << "·¡";
					break;
				case 3:
					cout << "Èş";
					break;
				case 4:
					cout << "ËÁ";
					break;
				case 5:
					cout << "Îé";
					break;
				case 6:
					cout << "Â½";
					break;
				case 7:
					cout << "Æâ";
					break;
				case 8:
					cout << "°Æ";
					break;
				case 9:
					cout << "¾Á";
					break;
				default:
					break;
			}
			cout << "°Û";
			if(i!=0)//0xx
			{
				switch (i)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				if(j!=0)//0xxx
				{
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//0xx0
				{
					cout<<"Ô²";
				}
			}
			else//0x0
			{
				
				if(j!=0)//0x0x
				{
					cout<<"Áã";
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//0x00
				{
					cout << "Ô²";
				}
			}
		}
		else//00
		{
			if(i!=0)//00x
			{
				if(flag)
				{
					cout<<"Áã";
					switch (i)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ê°";
				}
				if(j!=0)//00xx
				{
					switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
				}
				else//00x0
				{
						cout << "Ô²";
				}
			}
			else//000
			{
				if(j!=0)//000x
				{
					if(flag){
						cout<<"Áã";
				}
						switch (j)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "Ô²";
						
				}
				else//0000
				{
					
				}
			}
		}
		flag=true;
	}
	
	//Ğ¡Êı 
	if(k==0&&l==0){
		cout<<"Õû";
	}
	else{
		if(l==0){
			switch (k)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "½Ç";
		cout<<"Õû";
		}
		
		else{
				switch (k)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "½Ç";
			switch (l)
		{
			case 1:
				cout << "Ò¼";
				break;
			case 2:
				cout << "·¡";
				break;
			case 3:
				cout << "Èş";
				break;
			case 4:
				cout << "ËÁ";
				break;
			case 5:
				cout << "Îé";
				break;
			case 6:
				cout << "Â½";
				break;
			case 7:
				cout << "Æâ";
				break;
			case 8:
				cout << "°Æ";
				break;
			case 9:
				cout << "¾Á";
				break;
			default:
				break;
		}
		cout << "·Ö";
		
		}
	}
	return 0;
}
