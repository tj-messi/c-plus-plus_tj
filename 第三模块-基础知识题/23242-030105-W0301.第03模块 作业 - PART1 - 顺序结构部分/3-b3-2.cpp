/*�쿡�� 2351114 ��15*/
#include<iostream>
#include <iomanip>
using namespace std;


int main(){
	cout << "������[0,100��)֮�������:" << endl;
	double a;
	cin>>a;
	//���ܳ�����int���ޣ�
	//��һ����������a0��a1��
	int a0=static_cast<int>(a/10);
	a /= 10;
	double a1=a-a0;
	cout << setw(7)<< setiosflags(ios::left) << "ʮ��λ" << ": " << a0/ 100000000 % 10 << endl;
	a0-=100000000*(a0/100000000);
	cout << setw(7)<< setiosflags(ios::left) << "��λ" << ": " << (a0 / 10000000)%10 << endl;
	a0-=10000000*(a0/10000000);
	cout << setw(7)<< setiosflags(ios::left) << "ǧ��λ" << ": " << a0 / 1000000 % 10 << endl;
	a0-=1000000*(a0/1000000);
	cout << setw(7)<< setiosflags(ios::left) << "����λ" << ": " << a0 / 100000 % 10 << endl;
	a0-=100000*(a0/100000);
	cout << setw(7)<< setiosflags(ios::left) << "ʮ��λ" << ": " << a0 / 10000 % 10 << endl;
	a0-=10000*(a0/10000);
	cout << setw(7)<< setiosflags(ios::left) << "��λ" << ": " << a0 / 1000 % 10 << endl;
	a0-=1000*(a0/1000);
	cout << setw(7)<< setiosflags(ios::left) << "ǧλ" << ": " << a0 / 100 % 10 << endl;
	a0-=100*(a0/100);
	cout << setw(7)<< setiosflags(ios::left) << "��λ" << ": " << a0 / 10 % 10 << endl;
	a0-=10*(a0/10);
	cout << setw(7)<< setiosflags(ios::left) << "ʮλ" << ": " << a0 % 10 << endl;

	double y=(a1+0.0001)/0.1;
	cout << setw(7)<< setiosflags(ios::left) << "Բ" << ": " << int(y)%10<< endl;
	double j = (a1 + 0.0001) / 0.01;
	cout << setw(7)<< setiosflags(ios::left) << "��" << ": " << int(j)%10<< endl;
	double f = (a1 + 0.0001) / 0.001;
	cout << setw(7)<< setiosflags(ios::left) << "��" << ": " << int(f)%10 << endl;
return 0;
}
