#include<iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    bool iscout = 0;
    cin >> n;
    if (n % 5 == 0)
    {
        cout << n / 5;
        iscout = 1;
    }
    else if ((n % 5) % 3 == 0)
    {
        cout << n / 5 + (n%5)/3;
        iscout = 1;
    }
    else
    {
        int count = 0;
        while (n>=3)
        {
            n -= 3;
            count++;
            if (n % 5 == 0)
            {
                cout << (n / 5) + count;
                iscout = 1;
                break;
            }

        }
    }
    if (iscout == 0)
    {
        cout << -1;
    }

}