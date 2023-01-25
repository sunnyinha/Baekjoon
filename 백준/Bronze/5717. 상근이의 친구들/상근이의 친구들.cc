#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, f;
    cin >> m >> f;
    while (!(m == 0 && f == 0))
    {
        cout << m + f << '\n';
        cin >> m >> f;
    }


}