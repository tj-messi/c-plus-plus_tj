/*2351114 朱俊泽 信15*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----具体要求----
   1、不允许添加其它头文件
   2、允许定义一个全局变量、不允许定义静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */
int cnt=0;

/***************************************************************************
  函数名称：
  功    能：打印n层汉诺塔的移动顺序
  输入参数：int n：层数
            char src：起始柱
            char tmp：中间柱
            char dst：目标柱
  返 回 值：
  说    明：1、函数名、形参、返回类型均不准动
            2、本函数不允许出现任何形式的循环
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
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：1、完成输入、调用递归函数
            2、处理输入错误时，允许使用循环
            3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
***************************************************************************/
int main()
{
	int n;
	char src,tmp,dst;
	int ret;
	while(1)
	{
		printf("请输入汉诺塔的层数(1-16)\n");
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
		printf("请输入起始柱(A-C)\n");
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
        printf("请输入目标柱(A-C)\n");
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
        	printf("目标柱(%c)不能与起始柱(%c)相同\n",src,src);
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
    printf("移动步骤为:\n");
    
    
    
	if(dst>70)
	{
		dst-=32;
	}
	tmp=(3*'B'-src-dst);
    hanoi(n,src,tmp,dst);
	
}
