/*�쿡�� 2351114 ��15*/
#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	cout<<"������һ��[1..30000]�������:"<<endl;
	int num;
	cin>>num;
	cout<<setiosflags(ios::left)<<setw(5)<<"��λ"<<" : "<<(num/10000)<<endl;
	num-=10000*(num/10000);
	cout<<setw(5)<<"ǧλ"<<" : "<<(num/1000)<<endl;
	num-=1000*(num/1000);
	cout<<setw(5)<<"��λ"<<" : "<<(num/100)<<endl;
	num-=100*(num/100);
	cout<<setw(5)<<"ʮλ"<<" : "<<(num/10)<<endl;
	num-=10*(num/10);
	cout<<setw(5)<<"��λ"<<" : "<<num<<endl;

	return 0;
}
