#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    int c;
    cin >> a >> b;
    cin >> c;
    if (a + b >= 2 * c)
    {
        cout << a + b - 2 * c << '\n';
    }
    else
    {
        cout << a + b << '\n';
    }
}