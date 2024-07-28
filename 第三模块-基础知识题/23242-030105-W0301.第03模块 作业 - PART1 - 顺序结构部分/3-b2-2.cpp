/*朱俊泽 2351114 信15*/
#include<iostream>
#include <iomanip>
using namespace std;

int main(){
	cout<<"请输入一个[1..30000]间的整数:"<<endl;
	int num;
	cin>>num;
	cout<<setiosflags(ios::left)<<setw(5)<<"万位"<<" : "<<(num/10000)<<endl;
	num-=10000*(num/10000);
	cout<<setw(5)<<"千位"<<" : "<<(num/1000)<<endl;
	num-=1000*(num/1000);
	cout<<setw(5)<<"百位"<<" : "<<(num/100)<<endl;
	num-=100*(num/100);
	cout<<setw(5)<<"十位"<<" : "<<(num/10)<<endl;
	num-=10*(num/10);
	cout<<setw(5)<<"个位"<<" : "<<num<<endl;

	return 0;
}
