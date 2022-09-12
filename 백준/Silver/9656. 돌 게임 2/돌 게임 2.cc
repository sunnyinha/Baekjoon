#include <iostream>
#include<string>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	if (n % 4 == 1 || n%4 ==3)
	{
		cout << "CY" << '\n';
	}
	else
	{
        cout << "SK" << '\n';
	}
}