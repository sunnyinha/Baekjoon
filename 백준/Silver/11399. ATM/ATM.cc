#include<iostream>
#include<cmath>
using namespace std;


void sumtime(int p[], int n, int& sum)
{
	for (int i = 0; i < n; i++)
	{
		sum += p[i];
	}
	if (n == 0)
	{
		return;
	}
	sumtime(p, n - 1, sum);
}

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i] > p[j])
			{
				int tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	sumtime(p, n, sum);
	cout << sum << endl;

}