#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int sum;
	int x;
	cin >> sum;
	for (int i = 0; i < 9; i++)
	{
		cin >> x;
		sum -= x;
	}
	cout << sum;

}

