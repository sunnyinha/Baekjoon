#include <iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, d;
    cin >> m >> d;
    if (m < 2 || (m == 2 && d < 18))
    {
        cout << "Before"<<'\n';
   }
    else if (m == 2 && d == 18)
    {
        cout << "Special" << '\n';
    }
    else
    {
        cout << "After" << '\n';
    }
    
}