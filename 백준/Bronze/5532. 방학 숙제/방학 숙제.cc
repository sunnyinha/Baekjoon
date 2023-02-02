#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l, a, b, c, d;
    cin >> l >> a >> b >> c >> d;
    int x, y;
    if ( a%c == 0)
    {
        x = a / c;
    }
    else
    {
        x = a / c + 1;
    }
    if (b % d == 0)
    {
        y = b / d;
    }
    else
    {
        y = b / d + 1;
    }
    if (x > y)
    {
        l = l - x;
    }
    else
    {
        l = l - y;
    }
    cout << l;

}