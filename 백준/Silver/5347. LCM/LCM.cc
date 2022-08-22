#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	set<string> book;
	for (int i = 0; i < n; i++)
	{
		int g = -1;
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}
		for (int i = a; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				g = i;
				break;
			}
		}
		cout << g * (a / g) * (b / g) << endl;
	}


}