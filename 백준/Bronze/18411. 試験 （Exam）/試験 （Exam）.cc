#include<iostream>
using namespace std;


int main()
{
	int sum = 0;
	int small = 100;
	for (int i = 0; i < 3; i++)
	{
		int x;
		cin >> x;
		sum += x;
		if (small > x)
		{
			small = x;
		}
	}
	sum -= small;
	
	cout << sum;
}

