#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max = 0;
    int now = 0;

    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        now -= a;
        now += b;
        if (max < now)
        {
            max = now;
        }
    }
    cout << max << '\n';
   

}