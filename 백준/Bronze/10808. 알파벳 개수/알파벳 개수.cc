#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int al[26] = { 0, };

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == char(j+97))
			{
				al[j]++;
				break;
			}
		}
	}
	for (int j = 0; j < 26; j++)
	{
		cout << al[j] << ' ';
	}
	

}