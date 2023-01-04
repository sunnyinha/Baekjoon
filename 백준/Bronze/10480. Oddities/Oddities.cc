#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	while (n--)
	{
		int x; 
		cin >> x; 
		if (x % 2 == 0)
		{
			cout << x <<" is even\n";
		}
		else
		{
			cout << x << " is odd\n";
		}
	}
}
