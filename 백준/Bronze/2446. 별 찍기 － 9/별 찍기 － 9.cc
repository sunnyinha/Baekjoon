#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2*(n - i); j > 1; j--)
        {
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            continue;
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j < 2 * i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

}