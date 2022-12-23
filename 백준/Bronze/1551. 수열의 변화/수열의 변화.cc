#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int a[21];
	int b[21];
	cin >> n >> k;
	string s;
	cin >> s;
	char separator = ',';
	istringstream is(s);
	string buf;
	int i = 0;
	while(getline(is, buf, separator))
	{
		a[i] = stoi(buf);
		i++;
	}
	while (k--)
	{
		for (int i = 0; i < n - 1; i++)
		{
			b[i] = a[i + 1] - a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			a[i] = b[i];
		}
		n--;
	}
	for (int i = 0; i < n-1; i++)
	{
		cout << a[i] << ",";
	}
	cout << a[n - 1];
	



}