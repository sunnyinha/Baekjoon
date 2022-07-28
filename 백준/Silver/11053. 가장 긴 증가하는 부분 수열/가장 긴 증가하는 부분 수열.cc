#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	int a[1001] = {0,};
	int up[1001];
	int maxium = 1;
	for (int i = 0; i < 1001; i++)
	{
		up[i] = 1;
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				up[j] = max(up[j], up[i] + 1);
			}
			maxium = max(up[j], maxium);

		}
		
	}
	cout << maxium << endl;

}