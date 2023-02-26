#include<iostream>
using namespace std;


int main()
{
	int up{ 0 }, down{ 0 };
	int x;
	cin >> x;
	for (int i = 0; i < 3; i++)
	{
		int y;
		cin >> y;
		if (x < y)
		{
			up++;
		}
		else if (x > y)
		{
			down++;
		}
		x = y;
	}
	if (up == 3)
	{
		cout << "Fish Rising";
	}
	else if (down == 3)
	{
		cout << "Fish Diving";
	}
	else if (up == 0 && down == 0)
	{
		cout << "Fish At Constant Depth";
	}
	else
	{
		cout << "No Fish";
	}
}

