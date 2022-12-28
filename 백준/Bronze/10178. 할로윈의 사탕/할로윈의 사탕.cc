#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	int c, v;
	cin >> n;
	while (n--)
	{
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << '\n';
	}
	
}