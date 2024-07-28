/*朱俊泽 2351114 信15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入[0-100亿)之间的数字:\n");
	double a;
	scanf("%lf", &a);
	//可能会超过了int上限值 
	//往下放一个单位就不会超了 
	int a0=a/10;
	a/=10;
	double a1=a-a0;
	printf("十亿位    ： %d\n", a0/100000000);
	a0-=100000000*(a0/100000000);
	printf("亿位      ： %d\n", a0/10000000);
	a0-=10000000*(a0/10000000);
	printf("千万位    ： %d\n", a0/1000000);
	a0-=1000000*(a0/1000000);
	printf("百万位    ： %d\n", a0/100000);
	a0-=100000*(a0/100000);
	printf("十万位    ： %d\n", a0/10000);
	a0-=10000*(a0/10000);
	printf("万位      ： %d\n", a0/1000);
	a0-=1000*(a0/1000);
	printf("千位      ： %d\n", a0/100);
	a0-=100*(a0/100);
	printf("百位      ： %d\n", a0/10);
	a0-=10*(a0/10);
	printf("十位      ： %d\n", a0);
	
	int y=(a1+0.0001)/0.1;
	printf("圆位      ： %d\n", (y%10));
	int j=(a1+0.0001)/0.01;
	printf("角位      ： %d\n", (j%10));
	int f=(a1+0.0001)/0.001;
	printf("分位      ： %d\n", (f%10));
	return 0;

}
