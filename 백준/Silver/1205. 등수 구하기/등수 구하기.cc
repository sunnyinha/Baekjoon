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

	long n, score, p;
	int rank = 1;
	cin >> n >> score >> p;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	sort(a, a + n, compare);
	for (int i = 0; i < n ; i++)
	{
		if (score < a[i])
		{
			rank++;
		}
		else
		{
			break;
		}
	}
	if (p <= n)
	{
		if (score <= a[n-1])
			cout << -1 << '\n';
		else
			cout << rank << '\n';
		

	}
	else
	{
		cout << rank << '\n';
	}



}