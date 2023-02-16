#include<iostream>
using namespace std;


int main()
{
	long k, w, m;
	cin >> k >> w >> m;
	

	if ((w - k) % m == 0)
	{
		cout << ((w - k) / m);
	}
	else
	{
		cout << ((w - k) / m)+1;
	}
}

