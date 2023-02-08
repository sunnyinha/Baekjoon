#include<iostream>
#include<string>
using namespace std;

int main()
{
	int cnt1 = 0;
	int cnt2 = 0;
	for (int i = 0; i < 3; i++)
	{
		string a;
		cin >> a;
		if (a == "1")
		{
			cnt1++;
		}
		else
		{
			cnt2++;
		}
	}
	if (cnt1 > cnt2)
	{
		cout << 1;
	}
	else
	{
		cout << 2;
	}

}