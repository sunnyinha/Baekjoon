#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int cnt = 0;
		for (int i = n; i <= m; i++)
		{
			string a = to_string(i);
			for (int i = 0; i < a.size(); i++)
			{
				if (a[i] == '0')
				{
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	

}