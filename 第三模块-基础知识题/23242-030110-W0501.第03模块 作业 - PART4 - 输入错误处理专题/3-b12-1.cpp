/*�쿡�� ��15 2351114*/
#include <iostream>

#include <limits>
using namespace std;

int main()
{
	int x;
	while (1) {
		cout << "������x��ֵ[0-100] : ";
		cin >> x;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		
		if (cin.good() ==0) {//������� 
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (x >= 0 && x <= 100){//��Χ���� 
			break;
		}
			
	}

	cout << "cin.good()=" << cin.good() << " x=" << x << endl; //�˾䲻׼��������Ҫ�����ʱgoodΪ1

	return 0;
}
