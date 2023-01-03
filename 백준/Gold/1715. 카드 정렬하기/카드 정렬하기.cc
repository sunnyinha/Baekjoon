#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	priority_queue<int,vector<int>,greater<int>> p;
	int n;
	long ans = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		p.push(x);
	}

	while (p.size() > 1)
	{
		
		int tmp = p.top();
		p.pop();
		tmp += p.top();
		p.pop();
		ans += tmp;
		p.push(tmp);
		
	}
	cout << ans;
}
