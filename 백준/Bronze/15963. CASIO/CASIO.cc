#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}