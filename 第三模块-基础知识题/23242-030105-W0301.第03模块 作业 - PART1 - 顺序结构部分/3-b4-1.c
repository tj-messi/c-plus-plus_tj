/*朱俊泽 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
const double pi = 3.14159;

int main()
{
	printf("请输入三角形的两边及其夹角(角度)\n");
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	double arc=sin(pi*c/180);
	printf("三角形面积为 : %.3lf\n", a*b*arc/2);
	
	return 0;
}
