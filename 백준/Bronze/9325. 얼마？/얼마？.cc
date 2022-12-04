#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c;
    int sum = 0;
    cin >> c;
    while (c--)
    {
        int s; 
        cin >> s;
        sum = s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int q, p;
            cin >> q >> p;
            sum += q * p;
        }
        cout << sum << "\n";
    }

}