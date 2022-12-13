#include <iostream>
#include<stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int count = 0;
	cin >> n ;
	stack <int> s;
	for(int i=0; i<n; i++)
	{
		int x;
		cin >> x;
		s.push(x);
	}
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < (s.top()))
		{
			max = s.top();
			count++;
		}
		s.pop();
	}
	cout << count;


}