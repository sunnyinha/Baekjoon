#include<iostream>
using namespace std;
int main()
{
	int x, y, w, h;
	int compare;
	cin >> x >> y >> w >> h;
	if (h - y > y)
	{
		compare = y;
	}
	else
	{
		compare = h-y;
	}
	if (w - x > x)
	{
		if (compare > x)
		{
			compare = x;
		}
	}
	else
	{
		if (compare > w - x)
		{
			compare = w - x;
		}
	}
	cout << compare << '\n';
	return 0;
}