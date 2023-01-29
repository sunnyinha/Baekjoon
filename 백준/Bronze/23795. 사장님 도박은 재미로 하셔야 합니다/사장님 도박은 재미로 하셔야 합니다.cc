#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    long sum = 0;
    cin >> n;
    while (n != -1)
    {
        sum += n;
        cin >> n;
    }
    cout << sum;
}