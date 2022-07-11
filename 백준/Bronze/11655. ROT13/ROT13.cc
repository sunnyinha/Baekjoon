#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i<s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			int sec;
			sec = int(s[i]) + 13;
			if ((sec > 122 && s[i] >= 97)|| ((sec > 90) && (s[i] <= 90)))
			{
				sec -= 26;
			}
			
			cout << char(sec);
			continue;
		}
		
		cout << s[i];
	}
	

}