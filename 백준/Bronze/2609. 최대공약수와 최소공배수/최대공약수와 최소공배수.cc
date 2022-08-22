#include<iostream>
using namespace std;

int main()
{
	int gcd, gcf;
	int n, m;
	cin >> n >> m;
	if (m> n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
	for (int i = m; i > 0; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			gcf = i;
			break;
		}
	}
	gcd = gcf * (m / gcf) * (n / gcf);
	cout << gcf << endl << gcd;
	return 0;

}