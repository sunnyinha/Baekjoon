#include<iostream>
#include<set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    multiset<int> s;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }

}