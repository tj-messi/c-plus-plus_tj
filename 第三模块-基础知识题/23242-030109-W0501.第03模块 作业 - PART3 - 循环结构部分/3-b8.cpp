/*朱俊泽 信15 2351114*/
#include <iostream>
#include <iomanip>    
#include <cmath>      

using namespace std;

int main()
{
	cout << "请输入x的值[-10 ~ +65]" << endl;
    int x;
    cin >> x;
    if (x >= -10 && x <= 65){
        double a = 1, index = 2, n = 1, t =x, s=x;
        while (fabs(t) > 1e-6){
            n = n * index;
            index++;
			a+= t;
            s = s * x;
            t = s / n;
        	}
        cout << "e^" << x << "=" << setprecision(10) << a << endl;
        }
    else {
        cout << "输入非法，请重新输入" << endl;
    }
    return 0;
}
