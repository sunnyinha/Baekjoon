#include <iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long n;
	cin >> n;
	long* a = new long[n];
	for (long i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, compare);
	for (long i = 0; i < n; i++)
	{
		cout << a[i] << '\n';
	}
}