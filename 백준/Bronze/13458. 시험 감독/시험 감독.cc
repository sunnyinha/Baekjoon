#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long sum = 0;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b, c;
    cin >> b >> c;
    for (int i = 0; i < n; i++)
    {
        int p = a[i];
        p -= b;
        sum += 1;
        if (p <= 0)
        {
            continue;
        }
        if (p % c == 0)
        {
            sum += p / c;
        }
        else
        {
            sum += p / c + 1;

        }

    }
    cout << sum;
    delete[] a;
   


}