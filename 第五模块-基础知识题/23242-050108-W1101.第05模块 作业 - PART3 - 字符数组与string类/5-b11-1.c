/*2351114 �쿡�� ��15*/
#include <stdio.h>
//�ɰ���������Ҫ��ͷ�ļ�

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
char result[256];  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

int daxie(int num, int flag_of_zero, int wei)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)
			{
				result[wei] = chnstr[0];
				result[++wei] = chnstr[1];
				return wei+1;
			}
			break;
		case 1:
			result[wei] = chnstr[2];
			result[++wei] = chnstr[3];
			return wei+1;
			break;
		case 2:
			result[wei] = chnstr[4];
			result[++wei] = chnstr[5];
			return wei+1;
			break;
		case 3:
			result[wei] = chnstr[6];
			result[++wei] = chnstr[7];
			return wei+1;
			break;
		case 4:
			result[wei] = chnstr[8];
			result[++wei] = chnstr[9];
			return wei+1;
			break;
		case 5:
			result[wei] = chnstr[10];
			result[++wei] = chnstr[11];
			return wei+1;
			break;
		case 6:
			result[wei] = chnstr[12];
			result[++wei] = chnstr[13];
			return wei+1;
			break;
		case 7:
			result[wei] = chnstr[14];
			result[++wei] = chnstr[15];
			return wei+1;
			break;
		case 8:
			result[wei] = chnstr[16];
			result[++wei] = chnstr[17];
			return wei+1;
			break;
		case 9:
			result[wei] = chnstr[18];
			result[++wei] = chnstr[19];
			return wei+1;
			break;
		default:
			break;
	}
	return wei;
}

int main()
{
	const char cha[] = "ʰ��Ǫ����Բ�Ƿ���";
    printf("������[0,100�ڣ�֮�������:\n");
	//�Ȱ�ÿһλ����ȡ������¼�ȣ�
	double a0_2;
	scanf("%lf", &a0_2);
	printf("��д�����:\n");
	int a0=(int)(a0_2/10);
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
	int ge= (int)((a0_1+0.0001)/0.1)%10;//��
	a0_1-=ge*0.1;
	int jiao=(int)((a0_1+0.0001)/0.01)%10;//��
	a0_1-=jiao*0.01; 
	int fen= (int)((a0_1+0.0001)/0.001)%10;//�� 
	
	
	//��ʼ�����
	int flag=0;//���ڱ��0�� 
	int wei=0;
	//ʮ��-�� 
	if(shiyi){
		wei=daxie(shiyi,flag,wei);
		result[wei] = cha[0];
		result[++wei] = cha[1];
		wei++;
		flag=1;
	}
	if(yi){
		wei=daxie(yi,flag,wei);
		flag=1;
	}
	if(yi||shiyi){
		result[wei] = cha[8];
		result[++wei] = cha[9];
		wei++;
	}
	//ǧ��-�� 
	if(qianwan){//x
		if(baiwan){//xx
			if(shiwan){//xxx
				if(wan){//xxxx
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
				else{//xxx0
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
			}
			else{//xx0
				if(wan){//xx0x
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,1,wei);
					wei=daxie(wan,0,wei);
				}
				else{//xx00
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
				}
			}
		}
		else{//x0
			if(shiwan){//x0x
				if(wan){//x0xx
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,1,wei);
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
				else{//x0x0
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,1,wei);
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
			}
			else{//x00
				if(wan){//x00x
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(baiwan,1,wei);
					wei=daxie(wan,0,wei);
				}
				else{//x000
					wei=daxie(qianwan,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
				}
			}
		}
	}
	else{//0
		if(baiwan){//0x
			if(shiwan){//0xx
				if(wan){//0xxx
					wei=daxie(qianwan,flag,wei);
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
				else{//0xx0
					wei=daxie(qianwan,flag,wei);
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
			}
			else{//0x0
				if(wan){//0x0x
					wei=daxie(qianwan,flag,wei);
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shiwan,1,wei);
					wei=daxie(wan,0,wei);
				}
				else{//0x00
					wei=daxie(qianwan,flag,wei);
					wei=daxie(baiwan,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
				}
			}
		}
		else{//00
			if(shiwan){//00x
				if(wan){//00xx
					wei=daxie(baiwan,flag,wei);
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(wan,0,wei);
				}
				else{//00x0
					wei=daxie(baiwan,flag,wei);
					wei=daxie(shiwan,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
				}
			}
			else{//000
				if(wan){//000x
					wei=daxie(baiwan,flag,wei);
					wei=daxie(wan,0,wei);
				}
				else{//0000
					
				}
			}
		}
	}
	if(shiwan||baiwan||qianwan||wan){
		result[wei] = cha[6];
			result[++wei] = cha[7];
			wei++;
		flag=1;
	}
	//ǧ-�� 
		if(qian){//x
		if(bai){//xx
			if(shi){//xxx
				if(ge){//xxxx
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
				else{//xxx0
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
			}
			else{//xx0
				if(ge){//xx0x
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,1,wei);
					wei=daxie(ge,0,wei);
				}
				else{//xx00
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
				}
			}
		}
		else{//x0
			if(shi){//x0x
				if(ge){//x0xx
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,1,wei);
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
				else{//x0x0
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,1,wei);
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
			}
			else{//x00
				if(ge){//x00x
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
					wei=daxie(bai,1,wei);
					wei=daxie(wan,0,wei);
				}
				else{//x000
					wei=daxie(qian,0,wei);
					result[wei] = cha[4];
			result[++wei] = cha[5];
			wei++;
				}
			}
		}
	}
	else{//0
		if(bai){//0x
			if(shi){//0xx
				if(ge){//0xxx
					wei=daxie(qian,flag,wei);
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
				else{//0xx0
					wei=daxie(qian,flag,wei);
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
			}
			else{//0x0
				if(wan){//0x0x
					wei=daxie(qian,flag,wei);
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
					wei=daxie(shi,1,wei);
					wei=daxie(ge,0,wei);
				}
				else{//0x00
					wei=daxie(qian,flag,wei);
					wei=daxie(bai,0,wei);
					result[wei] = cha[2];
			result[++wei] = cha[3];
			wei++;
				}
			}
		}
		else{//00
			if(shi){//00x
				if(ge){//00xx
					wei=daxie(bai,flag,wei);
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
					wei=daxie(ge,0,wei);
				}
				else{//00x0
					wei=daxie(bai,flag,wei);
					wei=daxie(shi,0,wei);
					result[wei] = cha[0];
			result[++wei] = cha[1];
			wei++;
				}
			}
			else{//000
				if(ge){//000x
					wei=daxie(bai,flag,wei);
					wei=daxie(ge,0,wei);
				}
				else{//0000
					
				}
			}
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || ge != 0) {
		result[wei] = cha[10];
			result[++wei] = cha[11];
			wei++;
		if (jiao == 0 && fen == 0) {
			result[wei] = cha[16];
			result[++wei] = cha[17];
			wei++;
		}
	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0 && jiao == 0 && fen == 0) {
		wei=daxie(ge, 1,wei);
		//result+="Բ��";
		result[wei] = cha[10];
			result[++wei] = cha[11];
			wei++;
		result[wei] = cha[16];
			result[++wei] = cha[17];
			wei++;
	}
	if (jiao != 0 && fen == 0) {
		wei=daxie(jiao, fen,wei); 
		//result+="����";
			result[wei] = cha[14];
			result[++wei] = cha[15];
			wei++;
		result[wei] = cha[16];
			result[++wei] = cha[17];
			wei++;
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0) {
			wei=daxie(fen, 1,wei); 
			result[wei] = cha[14];
			result[++wei] = cha[15];
			wei++;
		}
		else {
			wei=daxie(jiao, fen,wei); wei=daxie(fen, 1,wei); result[wei] = cha[14];
			result[++wei] = cha[15];
			wei++;
		}
	}
	if (jiao != 0 && fen != 0) {
		wei=daxie(jiao, fen,wei); result[wei] = cha[12];
			result[++wei] = cha[13];
			wei++;; wei=daxie(fen, 1,wei); result[wei] = cha[14];
			result[++wei] = cha[15];
			wei++;
	}
	 
    printf("%s\n", result);  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    return 0;
}
