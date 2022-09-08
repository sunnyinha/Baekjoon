#include<iostream>
using namespace std;
int main()
{
    long n, m;
    cin >> n >> m;
    if(n-m <0)
    {
        cout << -(n-m)<<'\n';
    }
    else
    {
        cout << (n-m)<<'\n';
    }
    return 0;
}