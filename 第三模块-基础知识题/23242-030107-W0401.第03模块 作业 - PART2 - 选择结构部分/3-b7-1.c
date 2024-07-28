/*2351114 信15 朱俊泽*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("请输入找零值：\n");
	double a;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
	scanf("%lf", &a);
	//先计算再输出
	if(a>=50)
	{
		a1=1;
		a-=50;
	}
	if(a>=20)
	{
		a2=(int)(a/20);
		a-=a2*20;
	}
	if(a>=10)
	{
		a3=(int)(a/10);
		a-=a3*10;
	}
	if(a>=5)
	{
		a4=(int)(a/5);
		a-=a4*5;
	}
	if(a>=1)
	{
		a5=(int)(a/1);
		a-=a5;
	}
	if(a>=0.5)
	{
		a6=1;
		a-=0.5;
	}
	if(a>=0.1)
	{
		a7=(int)((a+0.001)/0.1);
		a-=a7*0.1;
	}
	if(a>=0.05)
	{
		a8=(int)((a+0.001)/0.05);
		a-=a8*0.05;
	}
	if(a>=0.02){
		a9=(int)((a+0.001)/0.02);
		a-=a9*0.02;
	}
	if(a>=0.01){
		a10=(int)((a+0.001)/0.01);
		a-=a10*0.01;
	}
	//输出
	
	printf("共%d张找零，具体如下：\n", a1+a2+a3+a4+a5+a6+a7+a8+a9+a10);
	if (a1 != 0) {
		printf("50元 : %d张\n", a1);
	}
	if (a2 != 0) {
		printf("20元 : %d张\n", a2); 
	}
	if (a3!= 0) {
		printf("10元 : %d张\n", a3);
	}
	if (a4 != 0) {
		printf("5元  : %d张\n", a4);
	}
	if (a5 != 0) {
		printf("1元  : %d张\n", a5); 
	}
	if (a6 != 0) {
		printf("5角  : %d张\n", a6); 
	}
	if (a7 != 0) {
		printf("1角  : %d张\n", a7);
	}
	if (a8 != 0) {
		printf("5分  : %d张\n", a8); 
	}
	if (a9 != 0) {
		printf("2分  : %d张\n", a9); 
	}
	if (a10 != 0) {
		printf("1分  : %d张\n", a10); 
	} 
	return 0;
}
