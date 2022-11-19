#include<iostream>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		int** a = new int*[k+1];
		for (int i = 0; i <= k; i++)
		{
			a[i] = new int[n+1];
		}
		for (int i = 0; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				a[i][j] = 0;
			}
		}
		
		for (int i = 1; i <= n; i++)
		{
			a[0][i] = i;
		}
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				for (int b = 1; b <= j; b++)
				{
					a[i][j] += a[i - 1][b];
				}
			}
		}
		
		cout << a[k][n] << '\n';
		for (int i = 0; i < k; i++)
		{
			delete []  a[i];
		}
		delete[] a;
	}
}

