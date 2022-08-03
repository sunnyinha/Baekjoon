#include <iostream>
using namespace std;

int main()
{
	int a[8];
	int upcount = 0;
	int downcount = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < 8; i++)
	{
		if (a[i] > a[i - 1])
		{
			upcount++;
		}
		else if(a[i] < a[i - 1])
		{
			downcount++;
		}
	}
	if (downcount == 7)
	{
		cout << "descending" << endl;
	}
	else if (upcount == 7)
	{
		cout << "ascending" << endl;
	}
	else
	{
		cout << "mixed" << endl;
	}
}