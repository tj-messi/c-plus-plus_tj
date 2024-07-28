/*2351114 信15 朱俊泽*/
#include <iostream>
#include <cmath>
using namespace std;

class triangle;  //类的提前声明，思考一下，放在这里的目的是为什么
class point {
private:
	int x;
	int y;
public:
	/* 仅允许在此添加一个成员函数【仅限1个】,要求体内实现 */
	int get(int x1,int y1,int op) 
	{
		if(op==1)
		{
			x=x1;
			y=y1;
			return 0;
		}
		else if(op==3)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
	/* 除上面允许的那个成员函数外，不再允许添加任何的数据成员和成员函数，但可以根据需要添加其它内容 */
};

class triangle {
private:
	point p1;
	point p2;
	point p3;
public:
	/* 根据需要补充相应的语句后完成area函数(形参为空，不准改)，要求：如果三点能构成三角形，则返回面积，否则返回 -1 */
	double area()
	{
		double res = 0.5 * fabs((p2.get(0,0,3) - p1.get(0,0,3)) * (p3.get(0,0,2) - p1.get(0,0,2)) - (p2.get(0,0,2) - p1.get(0,0,2)) * (p3.get(0,0,3) - p1.get(0,0,3))); 
		if(res<=0)
		{
			return -1;
		}
		else 
    		return res; 
	}
	/* 构造函数 */
	triangle(int p1_x, int p1_y, int p2_x, int p2_y, int p3_x, int p3_y)
	{
		/* 给p1/p2/p3三个点分别赋x,y坐标值 */
		p1.get(p1_x, p1_y,1);
		p2.get(p2_x, p2_y,1);
		p3.get(p3_x, p3_y,1);
	}
	/* 可以定义需要的成员函数，数量不限，并以体内方式实现，不允许添加数据成员 */

};

/* -- 替换标记行 -- 本行不要做任何改动 -- 本行不要删除 -- 在本行的下面不要加入任何自己的语句，作业提交后从本行开始会被替换 -- 替换标记行 -- */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
***************************************************************************/
int main()
{
	if (1) {
		triangle tr(0, 0, 0, 1, 1, 0);  //三角形为(0,0) (0,1) (1,0)三点组成
		cout << "三角形面积应该是：0.5，实际是：" << tr.area() << endl;
	}

	if (1) {
		triangle tr(0, 2, -1, -1, 1, -1);  //三角形为(0,2) (-1,-1) (1,-1)三点组成
		cout << "三角形面积应该是：3，  实际是：" << tr.area() << endl;
		}

	if (1) {
		triangle tr(5, 5, -3, 1, 9, -2);  //三角形为(5,5) (-3,1) (9,-2)三点组成
		cout << "三角形面积应该是：36， 实际是：" << tr.area() << endl;
		}

	if (1) {
		triangle tr(0, 0, 1, 1, 2, 2);  //三点共线
		cout << "三角形面积应该是：-1， 实际是：" << tr.area() << endl;
		}

	return 0;
}

