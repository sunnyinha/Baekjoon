#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int sum = 0;
    cin >> n;
    while (n--)
    {
        sum = 0;
        int x;
        cin >> x;
        for (int i = 1; i <= x; i += 2)
        {
            sum += i;
        }
        cout << sum<<'\n';
    }


}