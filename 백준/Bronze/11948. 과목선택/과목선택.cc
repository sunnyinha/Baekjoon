#include<iostream>
#include<string>
using namespace std;


int main()
{
	int sum = 0;
	int small = 100;
	for (int i = 0; i < 4; i++)
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
	small = 100;
	for (int i = 0; i < 2; i++)
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

