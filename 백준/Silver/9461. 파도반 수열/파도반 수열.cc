#include <iostream>
using namespace std;

int main()
{
	int t;
	long a[100] = { 0, };
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 3; i < n; i++)
		{
			a[i] = a[i - 2] + a[i - 3];
		}
		cout << a[n - 1] << endl;
	}
}