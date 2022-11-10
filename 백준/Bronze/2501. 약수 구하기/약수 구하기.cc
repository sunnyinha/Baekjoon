#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count == k)
        {
            cout << i;
            break;
        }
    }
    if (count != k)
    {
        cout << 0;
    }
}