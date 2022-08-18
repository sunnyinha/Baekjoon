#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	set<int> a;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x; 
		a.insert(x );
	} 
	
	for (auto i = a.begin(); i != a.end(); i++)
	{
		cout << *i << " ";
	}
}