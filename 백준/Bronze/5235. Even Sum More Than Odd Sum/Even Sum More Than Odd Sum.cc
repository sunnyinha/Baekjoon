#include<iostream>
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
        int n;
        int esum = 0;
        int osum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                esum += x;
            }
            else
            {
                osum += x;
            }
        }
        if (esum > osum)
        {
            cout << "EVEN" << '\n';
        }
        else if (esum < osum)
        {
            cout << "ODD" << '\n';
        }
        else
        {
            cout << "TIE" << '\n';
        }
    }
    
}