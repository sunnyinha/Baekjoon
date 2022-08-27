#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	int* a = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n-2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (sum < a[i] + a[j] + a[k] && a[i] + a[j] + a[k]<=m)
				{
					sum = a[i] + a[j] + a[k];
				}
			}
		}
	}
	cout << sum << '\n';


}