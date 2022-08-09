#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	int* d = new int[n];
	int max = -1000 * 1000000;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a[i] = x;
		
	}
	for (int i = 0; i < n; i++)
	{
		d[i] = a[i];
		if (d[i - 1] + d[i] > d[i])
		{
			d[i] += d[i - 1];
		}
		if (max <= d[i])
		{
			max = d[i];
		}
	}
	cout << max << endl;
    delete[] a;
    delete[] d;
}