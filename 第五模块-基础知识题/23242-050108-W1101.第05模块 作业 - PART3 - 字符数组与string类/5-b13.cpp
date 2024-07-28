/*÷Ïø°‘Û 2351114 –≈15*/
#include<iostream>
using namespace std;

bool check(int x, int y)
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
	for (int i = -1; i <= 50;)//∑≈¿◊ 
	{
		int x = rand() % (X+1), y = rand() % (Y+1);
		if (mp[x][y] == '*')
		{
			continue;
		}
		else
		{
			mp[x][y] = '*';i++;
		}
			
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j =1; j <= 26; j++)
		{
			if (mp[i][j] != '*')
			{
				for (int k = -1; k <= 1; k++)
				{
					for (int l = -1; l <= 1; l++)
					{
						if (check(i + k, j + l))
						{
							if (mp[i + k][j + l] == '*')
								mp[i][j]++;
						}
					}
				}
			}

		}
	}
	for (int i =1; i <= 10; i++)
	{
		for (int j = 1; j <=26; j++)
		{
			cout << mp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
