/*�쿡�� 2351114 ��15*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double pi = 3.14159;

int main(){
	cout<<"�����������ε����߼���н�(�Ƕ�)"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	double arc=sin(pi*c/180);
	cout << "���������Ϊ : "<<fixed<<setprecision(3)<<(a*b*arc/2)<<endl;
	return 0;
}
