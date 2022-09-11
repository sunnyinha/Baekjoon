#include <iostream>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int count = 0;
	cin >> n;
	for (int i = 5; i <= n; i += 5)
	{
		count++;
	}
	for (int i = 25; i <= n; i += 25) 
	{
		count++;
	}
	for (int i = 125; i <= n; i += 125) //n이500이하여서 625는 하지 않음.
	{
		count++;
	}
	cout << count << '\n';
}