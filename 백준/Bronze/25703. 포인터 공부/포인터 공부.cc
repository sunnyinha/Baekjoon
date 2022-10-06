#include<iostream>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << "int a;" << '\n';
	cout << "int *ptr = &a;" << '\n';
	for (int i = 1; i < n; i++)
	{
		cout << "int ";
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << "ptr" << i + 1 << " ";
		cout << "= &ptr";
		if (i == 1)
		{
			cout << ";" << '\n';
		}
		else
		{
			cout << i << ";" << '\n';
		}
	}
}