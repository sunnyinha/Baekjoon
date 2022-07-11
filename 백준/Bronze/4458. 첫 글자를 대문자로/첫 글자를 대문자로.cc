#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string k;
		getline(cin, k);
		for (int j = 0; j < k.size(); j++)
		{
			if (j == 0 && k[j] >= 97)
			{
				cout << static_cast<char>(k[0] - 32);
			}
			else
			{
				cout << k[j];
			}
		}
		cout << endl;

	}

}