/*÷Ïø°‘Û –≈15 2351114*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int index = 0;
    int a = 1, b = 1;
    while (index < 9) {//a*b=sum;
        a = 1;
        while (a <= b) {
            if (a*b >= 10) {//xx
                printf("%dx%d=%d  ", a, b, a*b); 
            }
            else {//x
                printf("%dx%d=%d   ", a,b, a*b);
            }
            a++;
        }
		printf("\n");
        index++;
        b++;  
    }
	printf("\n");
    return 0;
}
