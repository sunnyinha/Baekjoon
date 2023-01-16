#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int n;
    long a[101];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        a[i] = a[i - 1] + i * i;
    }
    cin >> n;
    while (n != 0)
    {
        cout << a[n] << '\n';
        cin >> n;
    }


}