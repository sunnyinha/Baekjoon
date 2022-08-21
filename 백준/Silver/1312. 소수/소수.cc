#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int n;
	int r;
	cin >> a >> b >> n;
	r = a % b;
	if (r == 0)
	{
		cout << r << endl;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			r *= 10;
			r %= b;

		}
		r *= 10;
		r /= b;
		cout << r << endl;
	}
	
}
