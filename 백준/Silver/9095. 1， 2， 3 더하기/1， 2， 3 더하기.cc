#include <iostream>
using namespace std;

long arr[11] = { 0 };
int main() 
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 4;
		for (int i = 4; i <= n; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}
		cout << arr[n] << endl;
	}
}