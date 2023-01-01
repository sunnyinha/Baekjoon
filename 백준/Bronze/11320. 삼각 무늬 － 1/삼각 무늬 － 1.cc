#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		cout << (a * a) / (b * b) << '\n';
	}
}
	