/*�쿡�� 2351114 ��15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const double pi = 3.14159;

int main()
{
	printf("������뾶�͸߶�\n");
	double r, h;
	scanf("%lf %lf", &r, &h);
	printf("Բ�ܳ�     : %.2lf\n", 2 * pi * r);
	printf("Բ���     : %.2lf\n", pi * r * r);
	printf("Բ������ : %.2lf\n", 4 * pi * r * r);
	printf("Բ�����   : %.2lf\n", pi * r * r * r * 4 / 3);
	printf("Բ�����   : %.2lf\n", pi * r * r * h);
	return 0;
}
