#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    while (n--)
    {
        int sum = 0;
        int x;
        cin >> x;
        cout << x / 25 << " ";
        x %= 25;
        cout << x / 10 << " ";
        x %= 10;
        cout << x / 5 << " ";
        x %= 5;
        cout << x / 1 << "\n";
        
    }



}