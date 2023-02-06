#include<iostream>
using namespace std;


int main()
{
	int count = 1;
	int n;
	cin >> n;
	for (int i = n - 1; i > 0; i--)
	{
		int sum = 0;
		for (int j = i; j > 0; j--)
		{
			sum += j;
			if (sum == n)
			{
				count++;
				break;
			}
			else if (sum > n)
			{
				break;
			}
			else
			{
				continue;
			}
		}

	}
	cout << count;

}