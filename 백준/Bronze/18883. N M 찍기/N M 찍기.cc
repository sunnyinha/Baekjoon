#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j == m)
            {
                cout << i * m + j;
                continue;
            }
            cout << i * m + j << " ";
        }
        cout << '\n';
    }

}