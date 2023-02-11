#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		string k;
		cin >> k;
		if (k == "W")
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << -1;
	}
	else if (count == 1 || count == 2)
	{
		cout << 3;
	}
	else if (count == 3 || count == 4)
	{
		cout << 2;
	}
	else if (count == 5 || count == 6)
	{
		cout << 1;
	}
}