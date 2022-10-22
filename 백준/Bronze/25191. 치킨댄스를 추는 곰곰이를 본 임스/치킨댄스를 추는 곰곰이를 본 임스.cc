#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int a, b;
    int sum = 0;
    cin >> n;
    cin >> a >> b;
    sum = a / 2 + b;
    if (sum <= n)
    {
        cout << sum << '\n';
    }
    else
    {
        cout << n << '\n';
    }
    
}