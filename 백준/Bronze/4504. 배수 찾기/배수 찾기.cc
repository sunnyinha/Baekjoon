#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (1)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            break;
        }
        if (a % n == 0)
        {
            cout << a << " is a multiple of " << n << "." << '\n';
        }
        else
        {
            cout << a << " is NOT a multiple of " << n << "." << '\n';

        }

    }
    
}