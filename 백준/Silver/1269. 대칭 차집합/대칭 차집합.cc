#include<iostream>
#include<set>
using namespace std;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	set<long> s;
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	for (int i = 0; i < b; i++)
	{
		int x;
		cin >> x;
		if (s.find(x) == s.end())
		{
			s.insert(x);
		}
		else
		{
			s.erase(x);
		}
	}

	cout << s.size();

	
}
