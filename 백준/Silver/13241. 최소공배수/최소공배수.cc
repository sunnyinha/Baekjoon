#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    long long g;
    long long a, b;
    cin >> a >> b;
    if (a > b)
    {
        long long tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            g = i;
            break;
        }
    }
    cout << g * (a / g) * (b / g) << endl;


}