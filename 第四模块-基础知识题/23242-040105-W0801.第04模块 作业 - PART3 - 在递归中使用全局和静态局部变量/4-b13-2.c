/*2351114 �쿡�� ��15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */
int cnt=0;

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
  ���������int n������
            char src����ʼ��
            char tmp���м���
            char dst��Ŀ����
  �� �� ֵ��
  ˵    ����1�����������βΡ��������;���׼��
            2������������������κ���ʽ��ѭ��
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
	if(n==1)
	{
		cnt++;
		//cout<<setfill(' ')<<setw(5)<<cnt<<":";
		//cout << "  1#" << " " << src << "-->" << dst << endl;
		printf("%5d:  1# %c-->%c\n", cnt, src, dst);
		return;
	}
	hanoi(n-1,src,dst,tmp);
    cnt++;
	//cout<<setfill(' ')<<setw(5)<<cnt<<":";
	printf("%5d:",cnt);
	if (n < 10) 
	{
	    //cout << " ";
	    printf(" ");
    }
	//cout <<" "<< n << "# " << src << "-->" << dst << endl;
	printf("%2d# %c-->%c\n",n,src,dst);
	hanoi(n-1,tmp,src,dst); 
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
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
    hanoi(n,src,tmp,dst);
	
}
