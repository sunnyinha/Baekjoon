#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	double a, b, v;
	long d;
	cin >> a >> b >> v;
	d = static_cast<int>(ceil((v-a) / (a - b)));
	d += 1;
	cout << d <<'\n';
}