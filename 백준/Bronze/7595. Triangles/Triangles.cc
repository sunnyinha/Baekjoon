#include<iostream>
using namespace std;


int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				cout << "*";
			}
			cout << '\n';
		}
	}
}

