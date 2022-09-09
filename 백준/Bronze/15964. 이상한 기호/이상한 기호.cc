#include <iostream>
#include<string>
using namespace std;

void yeonsan(long a, long b)
{
	cout << (a + b) * (a - b) << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long a, b;
	cin >> a >> b;
	yeonsan(a, b);

}