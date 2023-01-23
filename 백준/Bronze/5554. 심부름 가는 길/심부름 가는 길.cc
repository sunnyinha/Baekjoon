#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sum = 0; 

    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum / 60 << '\n';
    cout << sum % 60;

}