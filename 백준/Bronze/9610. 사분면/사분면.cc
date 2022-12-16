#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int count[5] = { 0, };
	cin >> n;
	for(int i=1;i<=n; i++)
	{
		long x, y;
		cin >> x >> y;
		if (x == 0 || y == 0)
		{
			count[0]++;
		}
		else if (x > 0 && y > 0)
		{
			count[1]++;
		}
		else if (x < 0 && y > 0)
		{
			count[2]++;
		}
		else if (x < 0 && y < 0)
		{
			count[3]++;
		}
		else if (x > 0 && y < 0)
		{
			count[4]++;
		}
	}
	for (int i = 1; i <= 4; i++)
	{
		cout << "Q" << i << ": " << count[i] << '\n';
	}
	cout << "AXIS: " << count[0] <<'\n';

}