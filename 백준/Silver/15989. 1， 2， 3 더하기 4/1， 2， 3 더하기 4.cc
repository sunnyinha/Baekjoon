#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	int a[10001] = { 0,};
	while (t--)
	{
		int n;
		cin >> n;
		a[0] = 1;
		for (int i = 1; i <= 10000; i++)
		{
			a[i] = a[i-1];
		}

		for (int i = 2; i <= 10000; i++)
		{
			a[i] += a[i - 2];
		}
		for (int i = 3; i <= 10000; i++)
		{
			a[i] += a[i - 3];
		}
		
		cout << a[n] << '\n';
		
		
	}
}