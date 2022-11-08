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
        string k;
        cin >> k;
        if (k[k.size()/2-1] == k[k.size() / 2])
        {
            cout << "Do-it"<<'\n';
        }
        else
        {
            cout << "Do-it-Not" << '\n';
        }
    }
}