#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (a[i] < 40)
		{
			a[i] = 40;
		}
		sum += a[i];
	}
	cout << sum / 5 << '\n';
 	
}