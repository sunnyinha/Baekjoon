#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double x;
	double y;
	cin >> x;
	while (1)
	{
		cin >> y;
		if (y == 999)
		{
			break;
		}
		if (y - x < 10 || x-y <10)
		{
			cout << fixed << setprecision(2) << y - x << '\n';
		}
		else if (y - x < 100 || x-y <100)
		{
			cout << fixed << setprecision(3) << y - x << '\n';

		}
		else
		{
			cout << fixed << setprecision(4) << y - x << '\n';
		}
		x = y;

	}


}