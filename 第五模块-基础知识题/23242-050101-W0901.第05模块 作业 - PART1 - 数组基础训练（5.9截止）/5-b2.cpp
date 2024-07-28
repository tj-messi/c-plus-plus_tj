/*2351114 Öì¿¡Ôó ĞÅ15*/
#include <iostream>
using namespace std;

int main()
{
	int a[105];
	for(int i=1;i<=100;i++)a[i]=0;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;i*j<=100;j++)
		{
			a[i*j]++;
		}
	}
	int count1=0,count2=0;
	for(int i=1;i<=100;i++)
	{
		if(a[i]%2!=0)count1++;
	}
	for(int i=1;i<=100;i++)
	{
		if(a[i]%2!=0&&count2!=count1-1)
		{
			cout<<i<<" ";
			count2++;
		}
		else if(a[i]%2!=0)
		{
			cout<<i;
		}
	}
    return 0;
}

