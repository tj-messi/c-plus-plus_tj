/*2351114 朱俊泽 信15*/
#include <iostream>
#include <string>
using namespace std;

const char chnstr[] = "零壹贰叁肆伍陆柒捌玖"; /* 所有输出大写 "零" ~ "玖" 的地方，只允许从这个数组中取值 */
string result;  /* 除result外，不再允许定义任何形式的全局变量 */


void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch(num) {
		case 0:
			if (flag_of_zero)
			{
				result.push_back(chnstr[0]);
				result.push_back(chnstr[1]);
			}
			break;
		case 1:
			result.push_back(chnstr[2]);
			result.push_back(chnstr[3]);
			break;
		case 2:
			result.push_back(chnstr[4]);
			result.push_back(chnstr[5]);
			break;
		case 3:
			result.push_back(chnstr[6]);
			result.push_back(chnstr[7]);
			break;
		case 4:
			result.push_back(chnstr[8]);
			result.push_back(chnstr[9]);
			break;
		case 5:
			result.push_back(chnstr[10]);
			result.push_back(chnstr[11]);
			break;
		case 6:
			result.push_back(chnstr[12]);
			result.push_back(chnstr[13]);
			break;
		case 7:
			result.push_back(chnstr[14]);
			result.push_back(chnstr[15]);
			break;
		case 8:
			result.push_back(chnstr[16]);
			result.push_back(chnstr[17]);
			break;
		case 9:
			result.push_back(chnstr[18]);
			result.push_back(chnstr[19]);
			break;
		default:
			break;
		}
}

/* 可根据需要自定义其它函数(也可以不定义) */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	cout<<"请输入[0,100亿)之间的数字:"<<endl;
	//先把每一位数字取下来记录先；
	double a0_2;
	cin>>a0_2;
	cout<<"大写结果是:"<<endl;
	int a0=static_cast<int>(a0_2/10);
	a0_2/=10;
	double a0_1=a0_2-a0;
	int shiyi=(int)(a0/100000000);//十亿 
	a0-=shiyi*100000000;
	int yi=(int)(a0/10000000);//亿 
	a0-=yi*10000000;
	int qianwan=(int)(a0/1000000);//千万 
	a0-=qianwan*1000000;
	int baiwan=(int)(a0/100000);//百万 
	a0-=baiwan*100000;
	int shiwan=(int)(a0/10000);//十万 
	a0-=shiwan*10000;
	int wan=(int)(a0/1000);//万 
	a0-=wan*1000;
	int qian=(int)(a0/100);//千 
	a0-=qian*100;
	int bai=(int)(a0/10);//百 
	a0-=bai*10;
	int shi=(int)(a0);//十 
	a0-=shi;
	int ge= static_cast<int>((a0_1+0.0001)/0.1)%10;//个
	a0_1-=ge*0.1;
	int jiao= static_cast<int>((a0_1+0.0001)/0.01)%10;//角
	a0_1-=jiao*0.01; 
	int fen= static_cast<int>((a0_1+0.0001)/0.001)%10;//分 
	
	
	//开始输出；
	int flag=0;//用于标记0点 
	//十亿-亿 
	if(shiyi){
		daxie(shiyi,flag);
		result+= "拾";
		flag=1;
	}
	if(yi){
		daxie(yi,flag);
		flag=1;
	}
	if(yi||shiyi){
		result+="亿";
	}
	//千万-万 
	if(qianwan){//x
		if(baiwan){//xx
			if(shiwan){//xxx
				if(wan){//xxxx
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,0);
					result+= "佰";
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
				else{//xxx0
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,0);
					result+= "佰";
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
			}
			else{//xx0
				if(wan){//xx0x
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,0);
					result+= "佰";
					daxie(shiwan,1);
					daxie(wan,0);
				}
				else{//xx00
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,0);
					result+= "佰";
				}
			}
		}
		else{//x0
			if(shiwan){//x0x
				if(wan){//x0xx
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,1);
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
				else{//x0x0
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,1);
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
			}
			else{//x00
				if(wan){//x00x
					daxie(qianwan,0);
					result+= "仟";
					daxie(baiwan,1);
					daxie(wan,0);
				}
				else{//x000
					daxie(qianwan,0);
					result+= "仟";
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
					result+= "佰";
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
				else{//0xx0
					daxie(qianwan,flag);
					daxie(baiwan,0);
					result+= "佰";
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
			}
			else{//0x0
				if(wan){//0x0x
					daxie(qianwan,flag);
					daxie(baiwan,0);
					result+= "佰";
					daxie(shiwan,1);
					daxie(wan,0);
				}
				else{//0x00
					daxie(qianwan,flag);
					daxie(baiwan,0);
					result+= "佰";
				}
			}
		}
		else{//00
			if(shiwan){//00x
				if(wan){//00xx
					daxie(baiwan,flag);
					daxie(shiwan,0);
					result+= "拾";
					daxie(wan,0);
				}
				else{//00x0
					daxie(baiwan,flag);
					daxie(shiwan,0);
					result+= "拾";
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
		result+="万";
		flag=1;
	}
	//千-个 
		if(qian){//x
		if(bai){//xx
			if(shi){//xxx
				if(ge){//xxxx
					daxie(qian,0);
					result+= "仟";
					daxie(bai,0);
					result+= "佰";
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
				else{//xxx0
					daxie(qian,0);
					result+= "仟";
					daxie(bai,0);
					result+= "佰";
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
			}
			else{//xx0
				if(ge){//xx0x
					daxie(qian,0);
					result+= "仟";
					daxie(bai,0);
					result+= "佰";
					daxie(shi,1);
					daxie(ge,0);
				}
				else{//xx00
					daxie(qian,0);
					result+= "仟";
					daxie(bai,0);
					result+= "佰";
				}
			}
		}
		else{//x0
			if(shi){//x0x
				if(ge){//x0xx
					daxie(qian,0);
					result+= "仟";
					daxie(bai,1);
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
				else{//x0x0
					daxie(qian,0);
					result+= "仟";
					daxie(bai,1);
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
			}
			else{//x00
				if(ge){//x00x
					daxie(qian,0);
					result+= "仟";
					daxie(bai,1);
					daxie(wan,0);
				}
				else{//x000
					daxie(qian,0);
					result+= "仟";
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
					result+= "佰";
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
				else{//0xx0
					daxie(qian,flag);
					daxie(bai,0);
					result+= "佰";
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
			}
			else{//0x0
				if(wan){//0x0x
					daxie(qian,flag);
					daxie(bai,0);
					result+= "佰";
					daxie(shi,1);
					daxie(ge,0);
				}
				else{//0x00
					daxie(qian,flag);
					daxie(bai,0);
					result+= "佰";
				}
			}
		}
		else{//00
			if(shi){//00x
				if(ge){//00xx
					daxie(bai,flag);
					daxie(shi,0);
					result+= "拾";
					daxie(ge,0);
				}
				else{//00x0
					daxie(bai,flag);
					daxie(shi,0);
					result+= "拾";
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
		result+="圆";
		if (jiao == 0 && fen == 0) {
			result+="整";
		}
	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0 && jiao == 0 && fen == 0) {
		daxie(ge, 1);
		result+="圆整";
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); result+="角整";
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && ge == 0) {
			daxie(fen, 1); result+="分";
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); result+="分";
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); result+="角"; daxie(fen, 1); result+="分";
	}
	 
	cout << result << endl;  /* 转换得到的大写结果，只允许用本语句输出，其它地方不允许以任何形式对大写结果进行全部/部分输出 */
    return 0;
	
	/* 按需完成 */
	return 0;
}

