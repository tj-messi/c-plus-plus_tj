/*�쿡�� 2351114 ��15*/
#include <iostream>
#include <iomanip>
using namespace std;

int cnt=0;
int ans[5][15];
int top[5];//1-->a,2-->b,3-->c;

void print_array()
{
    cout<<"A:";
    for (int i=1;i<=10;i++)
    {
        if (ans[1][i] == 0)
            cout<<"  ";
        else
            cout << setw(2) << ans[1][i];
    }
    cout<<"B:";
    for (int i=1;i<=10;i++)
    {
        if (ans[2][i] == 0)
            cout<<"  ";
        else
            cout << setw(2) << ans[2][i];
    }
    cout<<"C:";
    for(int i=1;i<=10;i++)
    {
        if (ans[3][i] == 0)
            cout<<"  ";
        else
            cout << setw(2) << ans[3][i];
    }
   	cout<<endl;
}

void move(int n,int src,int dst)
{
    switch (src)
    {
        case 'A':
            //A[topa--] = 0;
            ans[1][top[1]--]=0;
            break;
        case 'B':
			ans[2][top[2]--]=0;
            break;
        case 'C':
           	ans[3][top[3]--]=0;
            break;
        default:
            break;
    }
    switch (dst)
    {
        case 'A':
            //A[++topa] = n;
            ans[1][++top[1]]=n;
            break;
        case 'B':
            ans[2][++top[2]]=n;
            break;
        case 'C':
            ans[3][++top[3]]=n;
            break;
        default:
            break;
    }
}

void hanoi(int n, char src, char tmp, char dst)
{
 
	if(n==1)
	{
		cnt++;
		cout<<"��"<<setfill(' ')<<setw(4)<<cnt<<"��";
		cout << "( 1)" << ": " << src << "-->" << dst <<" ";
		move(n,src,dst);
		print_array();
		return;
	}
	hanoi(n-1,src,dst,tmp);
    cnt++;
	cout<<"��"<<setfill(' ')<<setw(4)<<cnt<<"��";
	cout << "( "<<n<<")" << ": " << src << "-->" << dst <<" ";
	move(n,src,dst);
	print_array();
	hanoi(n-1,tmp,src,dst); 
}


int main()
{
	int n;
	char src,tmp,dst;
	while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> n;   
        if (cin.fail()) {
            cin.clear();
            continue;
        }
        if (n < 1 || n>16) {
            continue;
        }
        cin.ignore(9999,'\n');
        break;//���� 
    }

    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((src-0)>=('A'-0) && (src-0)<=('C'-0))||((src-0) >=('a'-0) && (src-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
		cin.ignore(9999,'\n');
        break;//���� 
    }
    if(src>70)
    {
    	src-=32;	
	}
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(9999,'\n');
            continue;
        }
        if (!(((dst-0)>=('A'-0) && (dst-0)<=('C'-0))||((dst-0) >=('a'-0) && (dst-0)<=('c'-0)))) {
        	cin.ignore(9999,'\n');
            continue;
        }
        if(dst==src||dst==src+32||dst==src-32)
        {
        	cout<<"Ŀ����("<<src<<")��������ʼ��("<<src<<")��ͬ"<<endl; 
        	cin.clear();
            cin.ignore(9999,'\n');
            continue;
		}
        cin.ignore(9999,'\n');
        break;//���� 
    }
    cout << "�ƶ�����Ϊ:" << endl;
    
	if(dst>70)
	{
		dst-=32;
	}
	tmp=(3*'B'-src-dst);
	//��ʼ��
	for(int i=1;i<=10;i++)
	{
		ans[1][i]=0;ans[1][i]=0;ans[1][i]=0;
		top[1]=0;top[2]=0;top[3]=0;
	}
	cout<<"��ʼ:               ";
	if(src=='A')
	{
		for(int i=n;i>=1;i--)
		{
			ans[1][i]=++top[1];
		}
	} 
	else if(src=='B')
	{
		for(int i=n;i>=1;i--)
		{
			ans[2][i]=++top[2];
		}
	}
	else
	{
		for(int i=n;i>=1;i--)
		{
			ans[3][i]=++top[3];
		}
	}
	print_array();
    hanoi(n,src,tmp,dst);
}
