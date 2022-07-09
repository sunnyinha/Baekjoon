#include<iostream>
using namespace std;

int main()
{
	string k;
	cin >> k;
	for (int i = 0; i < k.size(); i++)
	{
		if (char(k[i]) >= 97)
		{
			cout << char(k[i] - 32);
		}
		else
		{
			cout << char(k[i] + 32);
		}
	}
}