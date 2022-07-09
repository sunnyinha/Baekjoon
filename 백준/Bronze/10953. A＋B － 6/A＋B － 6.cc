#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string k;
		cin >> k;
		cout << int(k[0]) - 48 + int(k[2]) - 48 << endl;

	}
}