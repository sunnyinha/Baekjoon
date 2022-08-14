#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	int* a = new int[n];
	int* sum = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i == 0)
		{
			sum[i] = a[i];
		}
		else
		{
			sum[i] = sum[i - 1] + a[i];
		}
	}
	while (m--)
	{
		int i, j;
		cin >> i >> j;
		j -= 1;
		i -= 2;
		if (i< 0)
		{
			cout << sum[j]  << '\n';
		}
		else
		cout << sum[j] - sum[i] << '\n';
	}
}