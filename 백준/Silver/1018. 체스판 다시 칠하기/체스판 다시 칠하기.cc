#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	int min = 64;
	int count[2] = { 0, };
	char line[50][50];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> line[i][j];
		}
	}
	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			count[0] = 0;
			count[1] = 0;
			for (int k = i; k <i+ 8; k++)
			{
				for (int l = j; l < j + 8; l++)
				{
					if ((k%2 == 0 && l%2 ==0)||((k % 2 == 1 && l % 2 == 1)))
					{
						if (line[k][l] == 'W')
						{
							count[0]++;
						}	
					}
					else 
					{
						if (line[k][l] == 'B')
						{
							count[0]++;
						}

					}
					if ((k % 2 == 0 && l % 2 == 0) || ((k % 2 == 1 && l % 2 == 1)))

					{
						if (line[k][l] == 'B')
						{
							count[1]++;
						}
					}
					else 
					{
						if (line[k][l] == 'W')
						{
							count[1]++;
						}

					}
				}
			}

			if (min > count[0])
			{
				min = count[0];
			}
			if (min > count[1])
			{
				min = count[1];
			}

			
		}
	}
	cout << min;

}

