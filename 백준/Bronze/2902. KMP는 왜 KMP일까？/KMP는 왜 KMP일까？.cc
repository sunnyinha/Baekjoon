#include<iostream>
using namespace std;

int main()
{
	string k;
	cin >> k;
	for (int i = 0; i < k.size(); i++)
	{
		if (i == 0)
		{
			cout << char(k[0]);
		}
		if (char(k[i]) == 45)
		{
			cout << char(k[i + 1]);
		}
	}
}