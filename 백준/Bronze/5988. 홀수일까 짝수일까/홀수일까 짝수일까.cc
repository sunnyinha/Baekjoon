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
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        int last = k[k.size() - 1] - '\0';
        if ( last % 2 == 1)
        {
            cout << "odd" << "\n";
        }
        else
        {
            cout << "even" << "\n";

        }
        
    }
}