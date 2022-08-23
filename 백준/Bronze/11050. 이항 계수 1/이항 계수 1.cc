#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int twocount =1;
	for (int i = 0; i < k; i++)
	{
		twocount *= n;
		n = n - 1;
	}
	for (int i = 1; i <= k; i++)
	{
		twocount /= i;
	}
	cout << twocount << endl;


}