#include<iostream>
using namespace std;

int main()
{
	int max = 0;
	int now = 0;
	for (int i = 0; i < 10; i++)
	{
		int minus, plus;
		cin >> minus >> plus;
		now = now - minus + plus;
		if (max < now)
		{
			max = now;
		}
	}
	cout << max << endl;
}