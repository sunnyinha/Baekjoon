#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    int a[51];
    cin >> n >> t;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (t - a[i] < 0)
        {
            break;
        }
        t -= a[i];

    }
    cout << i;


}