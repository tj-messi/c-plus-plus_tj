/*朱俊泽 2351114 信15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	printf("请输入一个[1,30000]间的整数:\n");
    int a;
	scanf("%ld", &a);
	printf("万位 : %ld\n", (a/10000));
	a=a-10000*(a/10000);
	printf("千位 : %ld\n",(a/1000) );
	a=a-1000*(a/1000);
	printf("百位 : %ld\n",(a/100) );
	a=a-100*(a/100);
	printf("十位 : %ld\n",(a/10) );
	a=a-10*(a/10);
	printf("个位 : %ld\n",a );
	return 0;
}
