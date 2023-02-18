#include<iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		char k = s[0];
		cout << k;
		for (int i = 1; i < s.size(); i++)
		{
			if (k != s[i])
			{
				k = s[i];
				cout << k;
			}
		}
		cout << '\n';
	}
}

