/*�쿡�� 2351114 ��15*/
/*2351871 ������ 2351892 ������ 2353738 ���۲� 2352359 ������ 2352630 �Գ���*/ 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  check(int x, int y)
{
	return (x >= 1 && x <= 10 && y >= 1 && y <= 26);
}

int main()
{
	int X = 10;
	int Y = 26;
	char mp[11][27];
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 26; j++)
		{
			mp[i][j] = '0';
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 26; j++)
		{
		 scanf("%c", &mp[i][j]);
            if (mp[i][j] < '0' || mp[i][j]>'8')
                if (mp[i][j] != '*')
                {
                    while (mp[i][j] < '0' || mp[i][j]>'8')
                    {
                        mp[i][j] = getchar();
                        if (mp[i][j] == '*')
                            break;
                    }
                }
		}
	}
	//�Ȳ��������
	int count=0;
	for(int i=1;i<=10;i++) 
	{
		for(int j=1;j<=26;j++)
		{
			if(mp[i][j]=='*')
				count++;
		}
	}
	if(count!=50)
	{
		printf("����1\n");
		return 0;
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j =1; j <= 26; j++)
		{
			
			if (mp[i][j] != '*')
			{
				int num=0;
				for (int k = -1; k <= 1; k++)
				{
					for (int l = -1; l <= 1; l++)
					{
						if (check(i + k, j + l))
						{
							if (mp[i + k][j + l] == '*')
								num++;
						}
					}
				}
				if(num!=mp[i][j]-'0')
				{
					 printf("����2\n");
                     return 0;
				}
			}

		}
	}
	printf("��ȷ\n");
	return 0;
}
