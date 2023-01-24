#include<iostream>
#include<set>
#include<iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    multiset<double> m;
    long long n;
    cin >> n;
    double x;
    while (n--)
    {
        cin >> x;

        if (m.size() >= 7)
        {
            auto iter = m.end();
            iter--;
            if (x < *iter)
            {
                m.erase(iter);
                m.insert(x);

            }
        }
        else 
        {
            m.insert(x);

        }
        
    }
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << fixed << setprecision(3) << double(*i) << '\n';

    }


}