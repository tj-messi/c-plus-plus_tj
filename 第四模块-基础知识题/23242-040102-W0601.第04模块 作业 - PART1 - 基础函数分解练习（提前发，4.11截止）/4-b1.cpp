/*2351114 �쿡�� ��15*/
#include <iostream>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch(num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				cout << "��";
			break;
		case 1:
			cout << "Ҽ";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "½";
			break;
		case 7:
			cout << "��";
			break;
		case 8:
			cout << "��";
			break;
		case 9:
			cout << "��";
			break;
		default:
			cout << "error";
			break;
		}
}

/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	cout<<"������[0,100��)֮�������:"<<endl;
	//�Ȱ�ÿһλ����ȡ������¼�ȣ�
	double a0_2;
	cin>>a0_2;
	cout<<"��д�����:"<<endl;
	int a0=static_cast<int>(a0_2/10);
	a0_2/=10;
	double a0_1=a0_2-a0;
	int shiyi=(int)(a0/100000000);//ʮ�� 
	a0-=shiyi*100000000;
	int yi=(int)(a0/10000000);//�� 
	a0-=yi*10000000;
	int qianwan=(int)(a0/1000000);//ǧ�� 
	a0-=qianwan*1000000;
	int baiwan=(int)(a0/100000);//���� 
	a0-=baiwan*100000;
	int shiwan=(int)(a0/10000);//ʮ�� 
	a0-=shiwan*10000;
	int wan=(int)(a0/1000);//�� 
	a0-=wan*1000;
	int qian=(int)(a0/100);//ǧ 
	a0-=qian*100;
	int bai=(int)(a0/10);//�� 
	a0-=bai*10;
	int shi=(int)(a0);//ʮ 
	a0-=shi;
	int ge= static_cast<int>((a0_1+0.0001)/0.1)%10;//��
	a0_1-=ge*0.1;
	int jiao= static_cast<int>((a0_1+0.0001)/0.01)%10;//��
	a0_1-=jiao*0.01; 
	int fen= static_cast<int>((a0_1+0.0001)/0.001)%10;//�� 
	
	
	//��ʼ�����
	int flag=0;//���ڱ��0�� 
	//ʮ��-�� 
	if(shiyi){
		daxie(shiyi,flag);
		cout << "ʰ";
		flag=1;
	}
	if(yi){
		daxie(yi,flag);
		flag=1;
	}
	if(yi||shiyi){
		cout<<"��";
	}
	//ǧ��-�� 
	if(qianwan){//x
		if(baiwan){//xx
			if(shiwan){//xxx
				if(wan){//xxxx
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
				else{//xxx0
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
			}
			else{//xx0
				if(wan){//xx0x
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,1);
					daxie(wan,0);
				}
				else{//xx00
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,0);
					cout << "��";
				}
			}
		}
		else{//x0
			if(shiwan){//x0x
				if(wan){//x0xx
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,1);
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
				else{//x0x0
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,1);
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
			}
			else{//x00
				if(wan){//x00x
					daxie(qianwan,0);
					cout << "Ǫ";
					daxie(baiwan,1);
					daxie(wan,0);
				}
				else{//x000
					daxie(qianwan,0);
					cout << "Ǫ";
				}
			}
		}
	}
	else{//0
		if(baiwan){//0x
			if(shiwan){//0xx
				if(wan){//0xxx
					daxie(qianwan,flag);
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
				else{//0xx0
					daxie(qianwan,flag);
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
			}
			else{//0x0
				if(wan){//0x0x
					daxie(qianwan,flag);
					daxie(baiwan,0);
					cout << "��";
					daxie(shiwan,1);
					daxie(wan,0);
				}
				else{//0x00
					daxie(qianwan,flag);
					daxie(baiwan,0);
					cout << "��";
				}
			}
		}
		else{//00
			if(shiwan){//00x
				if(wan){//00xx
					daxie(baiwan,flag);
					daxie(shiwan,0);
					cout << "ʰ";
					daxie(wan,0);
				}
				else{//00x0
					daxie(baiwan,flag);
					daxie(shiwan,0);
					cout << "ʰ";
				}
			}
			else{//000
				if(wan){//000x
					daxie(baiwan,flag);
					daxie(wan,0);
				}
				else{//0000
					
				}
			}
		}
	}
	if(shiwan||baiwan||qianwan||wan){
		cout<<"��";
		flag=1;
	}
	//ǧ-�� 
		if(qian){//x
		if(bai){//xx
			if(shi){//xxx
				if(ge){//xxxx
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,0);
					cout << "��";
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
				else{//xxx0
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,0);
					cout << "��";
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
			}
			else{//xx0
				if(ge){//xx0x
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,0);
					cout << "��";
					daxie(shi,1);
					daxie(ge,0);
				}
				else{//xx00
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,0);
					cout << "��";
				}
			}
		}
		else{//x0
			if(shi){//x0x
				if(ge){//x0xx
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,1);
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
				else{//x0x0
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,1);
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
			}
			else{//x00
				if(ge){//x00x
					daxie(qian,0);
					cout << "Ǫ";
					daxie(bai,1);
					daxie(wan,0);
				}
				else{//x000
					daxie(qian,0);
					cout << "Ǫ";
				}
			}
		}
	}
	else{//0
		if(bai){//0x
			if(shi){//0xx
				if(ge){//0xxx
					daxie(qian,flag);
					daxie(bai,0);
					cout << "��";
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
				else{//0xx0
					daxie(qian,flag);
					daxie(bai,0);
					cout << "��";
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
			}
			else{//0x0
				if(wan){//0x0x
					daxie(qian,flag);
					daxie(bai,0);
					cout << "��";
					daxie(shi,1);
					daxie(ge,0);
				}
				else{//0x00
					daxie(qian,flag);
					daxie(bai,0);
					cout << "��";
				}
			}
		}
		else{//00
			if(shi){//00x
				if(ge){//00xx
					daxie(bai,flag);
					daxie(shi,0);
					cout << "ʰ";
					daxie(ge,0);
				}
				else{//00x0
					daxie(bai,flag);
					daxie(shi,0);
					cout << "ʰ";
				}
			}
			else{//000
				if(ge){//000x
					daxie(bai,flag);
					daxie(ge,0);
				}
				else{//0000
					
				}
			}
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || ge != 0) {
		cout << "Բ";
		if (jiao == 0 && fen == 0) {
			cout << "��";
		}
	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0 && jiao == 0 && fen == 0) {
		daxie(ge, 1);
		cout << "Բ��";
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); cout << "����";
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0) {
			daxie(fen, 1); cout << "��";
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); cout << "��";
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); cout << "��"; daxie(fen, 1); cout << "��";
	}
	cout << endl;
	return 0;
	 
	
	
	/* ������� */
	return 0;
}
