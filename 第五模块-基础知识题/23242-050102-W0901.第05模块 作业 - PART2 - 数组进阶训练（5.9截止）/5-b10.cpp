/*2351114 信15 朱俊泽*/
#include <iostream>
#include <limits>
#include <iomanip> 
using namespace std;

int zeller(int y,int m,int d)
{	
	if(m==1||m==2){
		y--;
		m+=12;	
	}
	int c=y/100;//世纪
	int y_last2=y-c*100;//年份后两位
	int res=y_last2+y_last2/4+c/4-2*c+(13*(m+1)/5)+d-1;
	while(res<0){
		res+=7;
	}
	return res%7;
}

int check(int year)
{
	return ((year%400==0&&year%100==0)||(year%100!=0&&year%4==0));
}

int main()
{
	int year;
	while(1){//判断输入 
		cout << "请输入年份[1900-2100]" << endl;
		cin >> year;
		//非法 
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//年 
		if (!(year>=1900&&year<=2100)) {
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		//走到底代表没问题
		break; 
	}
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(check(year))
	{
		month[2]++;
	}
	int mp[10][25];bool flag=false;
	cout<<year<<"年的日历:"<<endl;
	cout<<endl;
	cout << "            1月                             2月                             3月" << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
    for(int i=0;i<10;i++)
	{
		for(int j=0;j<25;j++)
			mp[i][j]=0;
	}
	int index=zeller(year,1,1);int line=1;
	for(int i=1;i<=month[1];i++)
	{
		if(index>=7)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=8+zeller(year,2,1);line=1;
	for(int i=1;i<=month[2];i++)
	{
		if(index>=15)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=16+zeller(year,3,1);line=1;
	for(int i=1;i<=month[3];i++)
	{	
		if(index>=23)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	for(int i=1;i<=6;i++)
	{
		for(int j=0;j<=22;j++)
		{
			if(mp[i][j]==0)
				cout<<"    ";
			else
				cout<<setiosflags(ios::left) << setw(4) << mp[i][j];
		}
		cout<<endl;
	}
	if(flag)
		cout<<endl;
	cout << "            4月                             5月                             6月" << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
    for(int i=0;i<10;i++)
	{
		for(int j=0;j<25;j++)
			mp[i][j]=0;
	}
	index=zeller(year,4,1);line=1;
	for(int i=1;i<=month[4];i++)
	{
		if(index>=7)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=8+zeller(year,5,1);line=1;
	for(int i=1;i<=month[5];i++)
	{
		if(index>=15)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=16+zeller(year,6,1);line=1;
	for(int i=1;i<=month[6];i++)
	{	
		if(index>=23)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	for(int i=1;i<=6;i++)
	{
		for(int j=0;j<=22;j++)
		{
			if(mp[i][j]==0)
				cout<<"    ";
			else
				cout<<setiosflags(ios::left) << setw(4) << mp[i][j];
		}
		cout<<endl;
	}
	if(flag)
		cout<<endl;
	cout << "            7月                             8月                             9月" << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
    for(int i=0;i<10;i++)
	{
		for(int j=0;j<25;j++)
			mp[i][j]=0;
	}
	index=zeller(year,7,1);line=1;
	for(int i=1;i<=month[7];i++)
	{
		if(index>=7)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=8+zeller(year,8,1);line=1;
	for(int i=1;i<=month[8];i++)
	{
		if(index>=15)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=16+zeller(year,9,1);line=1;
	for(int i=1;i<=month[9];i++)
	{	
		if(index>=23)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	for(int i=1;i<=6;i++)
	{
		for(int j=0;j<=22;j++)
		{
			if(mp[i][j]==0)
				cout<<"    ";
			else
				cout<<setiosflags(ios::left) << setw(4) << mp[i][j];
		}
		cout<<endl;
	}
	if(flag)
		cout<<endl;
	cout << "           10月                            11月                            12月" << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
    for(int i=0;i<10;i++)
	{
		for(int j=0;j<25;j++)
			mp[i][j]=0;
	}
	index=zeller(year,10,1);line=1;
	for(int i=1;i<=month[10];i++)
	{
		if(index>=7)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=8+zeller(year,11,1);line=1;
	for(int i=1;i<=month[11];i++)
	{
		if(index>=15)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	index=16+zeller(year,12,1);line=1;
	for(int i=1;i<=month[12];i++)
	{	
		if(index>=23)
		{
			line++;index-=7;
		}
		mp[line][index]=i;
		index++;
	}
	if(line==6)
		flag=true;
	for(int i=1;i<=6;i++)
	{
		for(int j=0;j<=22;j++)
		{
			if(mp[i][j]==0)
				cout<<"    ";
			else
				cout<<setiosflags(ios::left) << setw(4) << mp[i][j];
		}
		cout<<endl;
	}
	if(flag)
		cout<<endl;
	return 0;
}
