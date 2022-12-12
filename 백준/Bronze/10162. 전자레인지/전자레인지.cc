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
    if (t % 10 == 0)
    {
        cout << t / 300 << " " << (t % 300) / 60 << " " << ((t % 300) % 60) / 10;
    }
    else
    {
        cout << -1;
    }
}