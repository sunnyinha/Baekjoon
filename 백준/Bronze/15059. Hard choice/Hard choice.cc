#include<iostream>
using namespace std;


int main()
{
	int a[6];
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}
	
	if (a[0] < a[3])
	{
		sum += a[3] - a[0];
	}
	if (a[1] < a[4])
	{
		sum += a[4] - a[1];
	}
	if (a[2] < a[5])
	{
		sum += a[5] - a[2];
	}
	cout << sum;
}

