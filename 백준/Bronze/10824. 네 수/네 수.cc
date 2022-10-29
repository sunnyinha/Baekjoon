#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a, b, c, d;
    cin >> a >> b >> c >> d;
    a += b;
    c += d;
    long s, s1, s2;
    s1 = static_cast<long>(stol(a));
    s2 = static_cast<long>(stol(c));
    s = s1 + s2;
    cout <<  s  << '\n';
    
    return 0;
    
}