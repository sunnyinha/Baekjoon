#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long x;
	cin >> x;
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum += (a * b);
	}
	if (x == sum)
	{
		cout << "Yes" << '\n';
	}
	else
	{
		cout << "No" << '\n';
	}
	
	
}