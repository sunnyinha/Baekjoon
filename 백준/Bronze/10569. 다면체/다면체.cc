#include<iostream>
#include<string>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    while (n--)
    {
        int v, e;
        cin >> v >> e;
        cout << 2 - v + e<< '\n';

    }
    
}