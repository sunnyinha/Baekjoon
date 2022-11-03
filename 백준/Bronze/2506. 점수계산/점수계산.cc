#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool before;
    bool after;
    int sum = 0;
    int count = 1;
    bool x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
        {
            before = x;
            sum += before;
        }
        else
        {
            after = x;
            if (before == 1 && after == before)
            {
                count++;
                sum += count;
            }
            else
            {
                count = 1;
                sum += after;
            }
            before = after;
        }
    }
    cout << sum;
}