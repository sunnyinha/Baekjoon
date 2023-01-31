#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    int x = a[0] + a[3];
    int y = a[1] + a[2];
    if ( x> y)
    {
        cout << x - y;
    }
    else
    {
        cout << y - x;
    }
}