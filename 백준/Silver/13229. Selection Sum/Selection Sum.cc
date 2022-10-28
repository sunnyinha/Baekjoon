#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int* sum = new int[n+1];
    sum[0] = 0;
    int x;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << sum[b+1] << '\n';
        }
        else
        cout << sum[b+1] - sum[a] << '\n';

    }
}