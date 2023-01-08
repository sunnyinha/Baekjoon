#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int* sum = new int[n+1];
	sum[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int x; 
		cin >> x;
		sum[i] = sum[i - 1] + x;
	}
	int m;
	cin >> m;
	while (m--)
	{
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x - 1] << '\n';
	}

	
}
