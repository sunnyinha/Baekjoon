#include <iostream>
using namespace std;

long arr[91] = { 0 };
int main() 
{
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		         // 0앞 n-1   // 01 앞 n-2
	}
	cout << arr[n] << endl;
}