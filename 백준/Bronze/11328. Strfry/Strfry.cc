#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s1, s2;
		char a[26];
		int  n1[26] = { 0, }, n2[26] = { 0, };
		for (int i = 0; i < 26; i++)
		{
			a[i] = 'a' + i;
		}
		cin >> s1 >>s2;
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (a[j] == s1[i])
				{
					n1[j]++;
				}
			}
		}
		for (int i = 0; i < s2.size(); i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (a[j] == s2[i])
				{
					n2[j]++;
				}
			}
		}
		bool issame = 1;
		for (int j = 0; j < 26; j++)
		{
			if (n1[j] != n2[j])
			{
				issame = 0;
				break;
			}
		}
		if (issame == 0)
		{
			cout << "Impossible" << '\n';
		}
		else
		{
			cout << "Possible" << '\n';

		}
	}


}
