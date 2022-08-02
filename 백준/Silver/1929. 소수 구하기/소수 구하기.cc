#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int* a = new int[n+1];
	for (int i = m; i <= n; i++)
	{
		if (i == 1 || i == 0)
		{
			a[i] = 0;
		}
		else
		{
			a[i] = i;
		}
		
	}
	
	for (int i = 2; i <= sqrt(n); i++)
	{
		
		for (int j = i * i; j <= n; j += i)
		{
			a[j] = 0;
		}
	
	}
	for (int i = m; i <= n; i++)
	{
		if (a[i] != 0)
			cout << a[i] << '\n';
	}
}