#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int c[10] = { 0, };
	int max = 0;
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]-'0' == 6)
		{
			if (c[a[i] - '0'] > c[9])
			{
				c[9]++;
			}
			else
			{
				c[a[i] - '0'] ++;
			}
		}
		else if (a[i] - '0' == 9)
		{
			if (c[a[i] - '0'] > c[6])
			{
				c[6]++;
			}
			else
			{
				c[a[i] - '0']++;
			}
		}
		else
		{
			c[a[i] - '0']++;

		}
		
		if (max < c[a[i] - '0'])
		{
			max = c[a[i] - '0'];
		}
	}
	cout << max << '\n';





}