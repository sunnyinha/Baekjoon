#include<iostream>
using namespace std;


int main()
{
	long a, l,n;
	cin >> a >> l;
	if (l > a)
	{
		n = l - a + 1;
	}
	else
	{
		n = a - l + 1;
	}
	
	cout << n * (a + l) / 2;
}
