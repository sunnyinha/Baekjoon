#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int count = 0;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		if (x == 1)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	if (count > 0)
	{
		cout << "Junhee is cute!";
	}
	else
	{
		cout << "Junhee is not cute!";

	}

}

