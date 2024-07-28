/*朱俊泽 2351114 信15*/
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、仅允许hanoi中定义一个静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

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
            3、允许定义一个静态局部变量
***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
	static int cnt=0;
	if(n==1)
	{
		cnt++;
		cout<<setfill(' ')<<setw(5)<<cnt<<":";
		cout << "  1#" << " " << src << "-->" << dst << endl;
		return;
	}
	hanoi(n-1,src,dst,tmp);
    cnt++;
	cout<<setfill(' ')<<setw(5)<<cnt<<":";
	if (n < 10) 
	{
	    cout << " ";
    }
	cout <<" "<< n << "# " << src << "-->" << dst << endl;
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
	while (1) {
        cout << "请输入汉诺塔的层数(1-16)" << endl;
        cin >> n;   
        if (cin.fail()) {
            cin.clear();
            continue;
        }
        if (n < 1 || n>16) {
            continue;
        }
        cin.ignore(9999,'\n');
        break;//到底 
    }

    while (1) {
        cout << "请输入起始柱(A-C)" << endl;
        cin >> src;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((src-0)>=('A'-0) && (src-0)<=('C'-0))||((src-0) >=('a'-0) && (src-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
		cin.ignore(9999,'\n');
        break;//到底 
    }
    if(src>70)
    {
    	src-=32;	
	}
    while (1) {
        cout << "请输入目标柱(A-C)" << endl;
        cin >> dst;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((dst-0)>=('A'-0) && (dst-0)<=('C'-0))||((dst-0) >=('a'-0) && (dst-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
        if(dst==src||dst==src+32||dst==src-32)
        {
        	cout<<"目标柱("<<src<<")不能与起始柱("<<src<<")相同"<<endl; 
        	cin.clear();
            cin.ignore(9999,'\n');
            continue;
		}
        cin.ignore(9999,'\n');
        break;//到底 
    }
    cout << "移动步骤为:" << endl;
    
    

	if(dst>70)
	{
		dst-=32;
	}
	tmp=(3*'B'-src-dst);
    hanoi(n,src,tmp,dst);
}
