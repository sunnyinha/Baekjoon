#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[9][9];
    int max = 0;
    int x{ 0 }, y{ 0 };
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
            if (max <= a[i][j])
            {
                max = a[i][j];
                x = i+1;
                y = j+1;
            }
        }
    }
    cout << max << '\n';
    cout << x << " " << y <<'\n';
}