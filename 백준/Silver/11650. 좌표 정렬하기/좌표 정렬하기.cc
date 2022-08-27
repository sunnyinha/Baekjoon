#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

bool compare(const int* a,const int* b)
{

	if (a[0] == b[0])
	{
		return a[1] < b[1];
	}
	return a[0] < b[0];
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int** c = new int* [n];
	for (int i = 0; i < n; i++)
	{
		c[i] = new int[2];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> c[i][0] >> c[i][1];
	}
	sort(c, c + n, compare);

		
	for (int i = 0; i < n; i++)
	{
		cout << c[i][0] << " " << c[i][1] << '\n';
	}


	for (int i = 0; i < n; i++)
	{
		delete[] c[i];
	}
	delete[] c;


}