#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        double price;
        cin >> price;
        price = price * 0.8;
        cout << fixed << setprecision(2) <<"$"<< price << '\n';

    }
}