#include<iostream>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	queue <int> q;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	cout << "<";
	while(q.size() > 0)
	{
		for (int i = 0; i < k-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (q.size() > 0)
		{
			cout << ", ";
		}
	}

	cout << ">";

}