#include<iostream>
#include<string>
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
        string s;
        int i, j;
        cin >> s >> i >> j;

        for (int a = 0; a < s.size(); a++)
        {
            if (a >= i && a < j)
            {
                continue;
            }
            cout << s[a];
        }
        cout << '\n';
    }

}