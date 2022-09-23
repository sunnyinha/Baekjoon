#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, n=0;
	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		int x;
		cin >> x;
		if (a == x)
		{
			n++;
		}
	}
	cout << n << '\n';
}