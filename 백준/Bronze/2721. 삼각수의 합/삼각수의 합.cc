#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int t[302];
    int w[302];
    w[1] = 0;
    t[1] = 1;
    cin >> n;
    for (int i = 2; i <= 301; i++)
    {
        t[i] = i * (i + 1) / 2;
        w[i] = w[i-1]+t[i-1]*(i+1);
    }
    while (n--)
    {
        int x;
        cin >> x;
        cout << w[x+1] << '\n';
    }
}