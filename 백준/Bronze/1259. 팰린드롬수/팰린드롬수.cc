#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string t;
	cin >> t;
	while (t != "0")
	{
		string t2 = t;
		reverse(t.begin(), t.end());
		if (t == t2)
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}
		cin >> t;
	}

}