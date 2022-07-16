#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long s;
	long long max = 0;
	cin >> s;
	for (long i = long(sqrt(s)); i <= s ; i++)
	{
		if ((i * (i + 1)) / 2 <= s)
		{
			max = i;
		}
		else
		{
			break;
		}

	}
	cout <<max << endl;

}