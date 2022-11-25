#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int sum = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        x--;
        sum += x;
    }
    sum++;
    cout << sum;


}