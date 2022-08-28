#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(const string a,const string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return (a.length() < b.length());

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string a[20001];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	stable_sort(a, a + n, compare);
	for (int i = 0; i < n; i++)
	{
		if ((a[i] == a[i - 1]) && (i != 0))
		{
			continue;
		}
		cout << a[i] << '\n';
	}

}