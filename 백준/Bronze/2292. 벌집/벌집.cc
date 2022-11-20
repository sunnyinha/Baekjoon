#include<iostream>
using namespace std;


int main()
{
	long long n;
	int count = 0;
	int range = 0;
	cin >> n;
	while (1)
	{
		if (n <= 0)
			break;
		if (count == 0)
		{
			n--;
		}
		else
		{
			n -= 6 * count;
		}
		count++;
	}
		
	cout << count;
}

