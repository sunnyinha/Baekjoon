#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int c = b - a;
	if (c > 0)
	{
		if (c >= 1 && c <= 20)
		{
			cout << "You are speeding and your fine is $100.";
		}
		else if (c >= 21 && c <= 30)
		{
			cout << "You are speeding and your fine is $270.";
		}
		else if (c >= 31)
		{
			cout << "You are speeding and your fine is $500.";
		}
	}
	else
	{
		cout << "Congratulations, you are within the speed limit!";
	}
}