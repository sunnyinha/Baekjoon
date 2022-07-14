#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int p;
		cin >> p;
		string maxname;
		long long max = 0;
		for (int i = 0; i < p; i++)
		{
			long long c;
			string name;
			cin >> c;
			cin >> name;
			if (max <= c)
			{
				max = c;
				maxname = name;
			}
		}
		cout << maxname << endl;
		
		
	}
}