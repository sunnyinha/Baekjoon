#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	long long count[20000001] = { 0, };
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		count[x+10000000]++;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{ 
		long x;
		cin >> x; 
		cout << count[x + 10000000] << " ";
	}
}