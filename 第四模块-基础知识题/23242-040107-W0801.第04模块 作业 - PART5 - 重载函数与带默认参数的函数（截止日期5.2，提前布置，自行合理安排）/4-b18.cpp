/*2351114 朱俊泽 信15*/
#include <iostream>
//#include <algorithm>
using namespace std;


int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
int max(int a, int b, int c)
{
	if(a>=b&&a>=c)return a;
	if(b>=a&&b>=c)return b;
	if(c>=a&&c>=b)return c;
	return 0;
}
int max(int a, int b, int c, int d)
{
    if(a>=b&&a>=c&&a>=d)return a;
	else if(b>=a&&b>=c&&b>=d)return b;
	else if(c>=a&&c>=b&&c>=d)return c;
	else return d;
    return 0;
}

int main()
{
    int num, a, b, c, d;
    while (1)
    {
        cout << "请输入个数num及num个正整数：" << endl;
        cin >> num;
        if (!cin.good())
        {
            cin.clear();
            cin.ignore(9999, '\n');
            continue;
        }
        if (num < 2 || num>4)
        {
            cout << "个数输入错误" << endl;
            break;
        }
        if (num == 2)
        {
            cin >> a >> b;
            if (!cin.good() || a <= 0 || b <= 0)
            {
                cin.clear();
                cin.ignore(9999, '\n');
                continue;
            }
        }
        if (num == 3)
        {
            cin >> a >> b >> c;
            if (!cin.good() || a <= 0 || b <= 0 || c <= 0)
            {
                cin.clear();
                cin.ignore(9999, '\n');
                continue;
            }
        }
        if (num == 4)
        {
            cin >> a >> b >> c >> d;
            if (!cin.good() || a <= 0 || b <= 0 || c <= 0 || d <= 0)
            {
                cin.clear();
                cin.ignore(9999, '\n');
                continue;
            }
        }            
		cin.clear();
        cin.ignore(9999, '\n');
        break;
    }
    switch (num)
    {
        case 2:
            cout << "max=" << max(a, b) << endl;
            break;
        case 3:
            cout << "max=" << max(a, b, c) << endl;
            break;
        case 4:
            cout << "max=" << max(a, b, c, d) << endl;
            break;
        default:
            break;
    }
    return 0;
}
