#include<iostream>
using namespace std;

int main()
{
	int a{ 0 }, b{ 0 };
	for (int i = 3; i >=1; i--)
	{
		int x;
		cin >> x;
		a += i * x;
	}
	for (int i = 3; i >= 1; i--)
	{
		int x;
		cin >> x;
		b += i * x;
	}
	if (a > b)
	{
		cout << "A";
	}
	else if (a == b)
	{
		cout << "T";
	}
	else
	{
		cout << "B";
	}
}