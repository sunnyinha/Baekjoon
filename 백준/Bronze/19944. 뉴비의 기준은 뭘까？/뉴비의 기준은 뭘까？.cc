#include <iostream>
#include<string>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    int n, m;
    cin >> n >> m;
    if (m <= 2)
    {
        cout << "NEWBIE!" << '\n';
    }
    else if (m <= n)
    {
        cout << "OLDBIE!" << '\n';
    }
    else
    {
        cout << "TLE!" << '\n';
    }
    
}