#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << "Case "<<i<<": " << x + y << "\n";
    }

}