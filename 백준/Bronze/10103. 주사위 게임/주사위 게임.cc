#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	int p[2]{100,100};
	while (n--)
	{
		int x, y;
		cin >> x >> y;
		if (x > y)
		{
			p[1] -= x;
		}
		else if (y > x)
		{
			p[0] -= y;
		}
	}
	cout << p[0] << '\n'<<p[1];
}