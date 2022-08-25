#include <iostream>
using namespace std;

int main()
{
	int a[5];
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		num += (a[i] * a[i]) % 10;
	}
	num %= 10;
	cout << num << endl;
}