/*�쿡�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
const double pi = 3.14159;

int main()
{
	printf("�����������ε����߼���н�(�Ƕ�)\n");
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	double arc=sin(pi*c/180);
	printf("���������Ϊ : %.3lf\n", a*b*arc/2);
	
	return 0;
}
