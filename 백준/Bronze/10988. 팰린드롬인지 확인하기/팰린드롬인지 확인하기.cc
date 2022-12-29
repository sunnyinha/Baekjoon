#include<iostream>
#include<string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	bool isgood = 1;
	for (int i = 0; i < s.size() / 2; i++)
	{
		if (s[i] != s[(s.size()-1) - i])
		{
			isgood = 0;
			break;
		}
	}
	if (isgood == 1)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}
	