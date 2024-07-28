/*朱俊泽 信15 2351114*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //取系统时间
using namespace std;


int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数

	/* 此处是你的程序开始 */
	int count = 1;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			for (int k = 100; k < 1000; k++) {
				//分解每一位数字 
				int a, b, c, d, e, f, g, h, l;
				a = i / 100;
				b = (i - a * 100) / 10;
				c = i % 10;
				d = j / 100;
				e = (j - d * 100) / 10;
				f = j % 10;
				g = k / 100;
				h = (k -g * 100) / 10;
				l = k % 10;

				if (a == b || a == c || a == d || a == e || a == f || a == g || a == h || a == l || b == c || b == d || b == e || b == f || b == g || b == h || b == l || c == d || c == e || c == f || c == g || c == h || c == l || d == e || d == f || d == g || d == h || d == l || e == f || e == g || e == h || e == l || f == g || f == h || f == l || g == h || g == l || h == l||a==0||b==0||c==0||d==0||e==0||f==0||g==0||h==0||l==0) {
					continue;
				}
				else if (i < j && j < k && i + j + k == 1953) {
					cout << "No." << setw(3) << count << " : " << i << "+" << j << "+" << k << "=" << "1953" << endl;
					count++;
				}
			}
		}
	}


	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	cout << "计数器频率 : " << tick.QuadPart << "Hz" << endl;
	cout << "计数器计数 : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "秒" << endl;

	return 0;

}
