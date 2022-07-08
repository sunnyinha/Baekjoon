#include<iostream>
using namespace std;

int main()
{
	int t;
	
	cin >> t;
	while (t--)
	{
		int sum = 0;
		int min = 100;
		for (int i = 0; i < 7; i++)
		{
			int k;
			cin >> k;
			if (k % 2 == 0)
			{
				if (k < min)
				{
					min = k;
				}
				sum += k;
			}
		}
		cout << sum << ' ' << min << endl;
	}
	


}