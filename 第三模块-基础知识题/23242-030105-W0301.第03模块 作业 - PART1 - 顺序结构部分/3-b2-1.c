/*�쿡�� 2351114 ��15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	printf("������һ��[1,30000]�������:\n");
    int a;
	scanf("%ld", &a);
	printf("��λ : %ld\n", (a/10000));
	a=a-10000*(a/10000);
	printf("ǧλ : %ld\n",(a/1000) );
	a=a-1000*(a/1000);
	printf("��λ : %ld\n",(a/100) );
	a=a-100*(a/100);
	printf("ʮλ : %ld\n",(a/10) );
	a=a-10*(a/10);
	printf("��λ : %ld\n",a );
	return 0;
}
