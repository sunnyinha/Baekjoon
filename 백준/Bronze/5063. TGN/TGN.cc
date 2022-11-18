#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	int x, y, z;
	int adLoss;
	cin >> n;
	while (n--)
	{
		cin >> x >> y >> z;
		adLoss = y - z;
		if (x < adLoss)
		{
			cout << "advertise"<<"\n";
		}
		else if (x == adLoss)
		{
			cout << "does not matter" << "\n";
		}
		else
		{
			cout << "do not advertise" << '\n';
		}
	}

}

