#include<iostream>
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
		int h, w, n;
		int dong, ho;
		cin >> h >> w >> n;
		if (n % h == 0)
		{
			dong = h;
			ho = n / h;
		}
		else
		{
			dong = n % h;
			ho = (n / h) + 1;

		}
			
		if (ho < 10)
		{
			cout << dong << 0 << ho << '\n';
		}
		else
		{
			cout << dong << ho << '\n';
		}

		
	}
	
	

}