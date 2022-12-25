#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string k;
	cin >> k;
	for (int i = 0; i < k.size(); i++)
	{
		if (k[i] == 65)
		{
			cout << "X";
		}
		else if (k[i] == 66)
		{
			cout << "Y";
		}
		else if (k[i] == 67)
		{
			cout << "Z";
		}
		else
		cout << static_cast<char>(k[i] - 3);
	}
	
}