/*2351114 ��15 �쿡��*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("����������ֵ��\n");
	double a;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;
	scanf("%lf", &a);
	//�ȼ��������
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
	//���
	
	printf("��%d�����㣬�������£�\n", a1+a2+a3+a4+a5+a6+a7+a8+a9+a10);
	if (a1 != 0) {
		printf("50Ԫ : %d��\n", a1);
	}
	if (a2 != 0) {
		printf("20Ԫ : %d��\n", a2); 
	}
	if (a3!= 0) {
		printf("10Ԫ : %d��\n", a3);
	}
	if (a4 != 0) {
		printf("5Ԫ  : %d��\n", a4);
	}
	if (a5 != 0) {
		printf("1Ԫ  : %d��\n", a5); 
	}
	if (a6 != 0) {
		printf("5��  : %d��\n", a6); 
	}
	if (a7 != 0) {
		printf("1��  : %d��\n", a7);
	}
	if (a8 != 0) {
		printf("5��  : %d��\n", a8); 
	}
	if (a9 != 0) {
		printf("2��  : %d��\n", a9); 
	}
	if (a10 != 0) {
		printf("1��  : %d��\n", a10); 
	} 
	return 0;
}
