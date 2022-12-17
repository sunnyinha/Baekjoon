#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	while (!(a[0] == 0 && a[1] == 0 && a[2] == 0))
	{
		if (a[2] - a[1] == a[1] - a[0])
		{
			cout << "AP " << 2 * a[2] - a[1]<<'\n';
		}
		else
		{
			cout << "GP " << (a[2] / a[1]) * a[2]<<'\n';
		}
		cin >> a[0] >> a[1] >> a[2];
	}

}