#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		int max = -1000000;
		int min = 1000000;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >>x;
			if (max < x)
			{
				max = x;
			}
			if (min > x)
			{
				min = x;
			}
		}
		cout << min << " " << max << '\n';

	}

}