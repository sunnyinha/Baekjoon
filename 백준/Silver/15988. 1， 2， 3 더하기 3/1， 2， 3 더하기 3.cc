#include <iostream>
using namespace std;

long a[10000001] = { 0, };

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{	
		int n;
		cin >> n;
		a[1] = 1;
		a[2] = 2;
		a[3] = 4;
		for (int i = 4; i <= n; i++)
		{
			if (a[i] != 0)
			{
				continue;
			}
			a[i] = a[i - 1] % 1000000009 + a[i - 2] % 1000000009 + a[i - 3] % 1000000009;
			a[i] %= 1000000009;
		}
		cout << a[n] << endl;

	}
}