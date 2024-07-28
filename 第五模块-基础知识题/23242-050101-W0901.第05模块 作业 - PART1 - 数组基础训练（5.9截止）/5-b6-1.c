/*2351114 �쿡�� ��15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cnt=0;
int topa=0,topb=0,topc=0;
int A[15],B[15],C[15];

void print_array()
{
    printf("A:");
    for (int i=1;i<=10;i++)
    {
        if (A[i] == 0)
            printf("  ");
        else
            printf("%2d",A[i]);
    }
    printf("B:");
    for (int i=1;i<=10;i++)
    {
        if (B[i] == 0)
            printf("  ");
        else
            printf("%2d",B[i]);
    }
    printf("C:");
    for(int i=1;i<=10;i++)
    {
        if (C[i] == 0)
            printf("  ");
        else
            printf("%2d",C[i]);
    }
    printf("\n");
}

void move(int n,int src,int dst)
{
    switch (src)
    {
        case 'A':
            A[topa--] = 0;
            break;
        case 'B':
			B[topb--] = 0;
            break;
        case 'C':
           	C[topc--] = 0;
            break;
        default:
            break;
    }
    switch (dst)
    {
        case 'A':
            A[++topa] = n;
            break;
        case 'B':
            B[++topb] = n;
            break;
        case 'C':
            C[++topc] = n;
            break;
        default:
            break;
    }
}

void hanoi(int n, char src, char tmp, char dst)
{
	if(n==1)
	{
		cnt++;
		//cout<<setfill(' ')<<setw(5)<<cnt<<":";
		//cout << "  1#" << " " << src << "-->" << dst << endl;
		printf("��%4d��( 1): %c-->%c ", cnt, src, dst);
		move(n,src,dst);
		print_array();
		return;
	}
	hanoi(n-1,src,dst,tmp);
    cnt++;
	//cout<<setfill(' ')<<setw(5)<<cnt<<":";
	printf("��%4d��",cnt);
	//cout <<" "<< n << "# " << src << "-->" << dst << endl;
	printf("(%2d): %c-->%c ",n,src,dst);
	move(n,src,dst);
	print_array();
	hanoi(n-1,tmp,src,dst); 
}

int main()
{
	int n;
	char src,tmp,dst;
	int ret;
	while(1)
	{
		printf("�����뺺ŵ���Ĳ���(1-16)\n");
        ret = scanf("%d", &n);
        if (ret!=1) {
			scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
        if (n < 1 || n>16) {
            	scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
        else {
            scanf("%*[^\n]");
			scanf("%*c");
			break;
        }
	}
	while(1)
	{
		printf("��������ʼ��(A-C)\n");
        ret = scanf("%c", &src);
        if (ret!=1) {
             scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
         if (!(((src-0)>=('A'-0) && (src-0)<=('C'-0))||((src-0) >=('a'-0) && (src-0)<=('c'-0)))) {
             scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
        else {
            scanf("%*[^\n]");
			scanf("%*c");
			break;
        }
	}
	if(src>70)
    {
    	src-=32;	
	}
	 while (1) {
        printf("������Ŀ����(A-C)\n");
        ret = scanf("%c", &dst);
        if (ret!=1) {
             scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
        if (!(((dst-0)>=('A'-0) && (dst-0)<=('C'-0))||((dst-0) >=('a'-0) && (dst-0)<=('c'-0)))) {
             scanf("%*[^\n]");
			scanf("%*c");
			continue;
        }
        if(dst==src||dst==src+32||dst==src-32)
        {
        	printf("Ŀ����(%c)��������ʼ��(%c)��ͬ\n",src,src);
        	 scanf("%*[^\n]");
			scanf("%*c");
			continue;
		}
        else {
              scanf("%*[^\n]");
			scanf("%*c");
			break;
        }
            
    }
    printf("�ƶ�����Ϊ:\n");
    
	if(dst>70)
	{
		dst-=32;
	}
	tmp=(3*'B'-src-dst);
	//��ʼ��
	for(int i=1;i<=10;i++)
	{
		A[i]=0;B[i]=0;C[i]=0;
	}
	printf("��ʼ:               ");
	if(src=='A')
	{
		for(int i=n;i>=1;i--)
		{
			A[i]=++topa;
		}
	} 
	else if(src=='B')
	{
		for(int i=n;i>=1;i--)
		{
			B[i]=++topb;
		}
	}
	else
	{
		for(int i=n;i>=1;i--)
		{
			C[i]=++topc;
		}
	}
	print_array();
    hanoi(n,src,tmp,dst);	
}
