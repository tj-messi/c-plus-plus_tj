/*朱俊泽 2351114 信15*/
/*2351871 郎若谷 2351892 陈奕炫 2353738 姜观博 2352359 陈艺龙 2352630 赵崇烨*/ 
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
	//先查地雷数量
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
		printf("错误1\n");
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
					 printf("错误2\n");
                     return 0;
				}
			}

		}
	}
	printf("正确\n");
	return 0;
}
