/*2351114 �쿡�� ��15*/
#include <iostream>
using namespace std;

int main()
{
	cout<<"��������������������������20������0������������"<<endl;
    int a[25];
	for(int i=0;i<25;i++)a[i]=0;
	int x;int count=0;
	while(cin>>x)
	{
		if(x<=0||count>=20)break;
		a[count]=x;
		count++;	
	}
	cout<<"ԭ����Ϊ��"<<endl; 
	for(int i=0;i<count;i++)
	{
		if(i!=count-1)cout<<a[i]<<" ";
		else
		{
			cout<<a[i]<<endl;
		}
	}
	cout<<"������Ҫ�����������"<<endl;
	int ins=0;
	cin>>ins;
	for(int i=0;i<count-1;i++)
	{
		if(a[i]<=ins&&a[i+1]>=ins)
		{

			for(int j=count;j>=i+2;j--)
			{
				a[j]=a[j-1];
			}		
			a[i+1]=ins;
			i+=30;	
		}	
	} 
	cout<<"����������Ϊ��"<<endl;
	for(int i=0;i<=count;i++)
	{
		if(i!=count)cout<<a[i]<<" ";
		else
		{
			cout<<a[i]<<endl;
		}
	}
    return 0;
}
