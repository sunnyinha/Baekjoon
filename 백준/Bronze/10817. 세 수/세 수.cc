#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

		if ((b >= a && a >= c) || (b <= a && a <= c))
			cout << a << endl;
		else if ((a >= b && b >= c) || (a <= b && b <= c))
			cout << b << endl;
		else
			cout << c << endl;
}
