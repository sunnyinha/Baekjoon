#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int sum = 0;
		double gpa = 0;
		int c;
		double g;
		for (int i=0; i<n; i++)
		{
			cin >> c >> g;
			sum += c;
			gpa += (c*g);
		}
		cout << sum << " " << gpa/sum << '\n';
	}
}
	