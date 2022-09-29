#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  
    int a[3];
    int max = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    if ((a[0] == a[1]) && (a[1] == a[2]))
    {
        cout << 10000 + a[0] * 1000 << "\n";
    }
    else if ((a[0] == a[1]) || (a[1] == a[2]) || (a[0] == a[2]))
    {
        if (a[0] == a[1])
        {
            cout << 1000 + a[0] * 100 << '\n';
        }
        else
        {
            cout << 1000 + a[2] * 100 << '\n';
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
        cout << max * 100 << '\n';

    }

    
}