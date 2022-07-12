#include<iostream>
#include<map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	bool has = 0;
	map<string, bool> m;

	while (n--)
	{
		string k;
		cin >> k;
		if (k =="ENTER")
		{
			m.clear();
		}
		else
		{
			if (m.find(k) != m.end())
			{
				continue;
			}
			else 
			{
				m.insert({ k, 1});
				cnt++;

			}
	
		}
		
	}
	cout << cnt << endl;
}