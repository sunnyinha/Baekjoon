#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l,p;
    cin >> l >> p;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        cout << x - l * p << " ";
    }

}