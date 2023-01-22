#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a[11];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = m-1; j >=0 ; j--)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
    
}