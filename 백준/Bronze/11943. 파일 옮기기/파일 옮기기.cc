#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a[2];
    int o[2];
    int v[2];
    cin >> a[0] >> a[1];
    cin >> o[0] >> o[1];

    v[0] = a[0] + o[1];
    v[1] = a[1] + o[0];

    if (v[0] > v[1])
    {
        cout << v[1] << '\n';
    }
    else
    {
        cout << v[0] << '\n';
    }
  
}