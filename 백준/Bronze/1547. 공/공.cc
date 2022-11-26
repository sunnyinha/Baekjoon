#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool cup[4]={false,};
    cup[1] = true;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        bool cmp;
        cmp = cup[a];
        cup[a] = cup[b];
        cup[b] = cmp;
    }
    for (int i = 1; i < 4; i++)
    {
        if (cup[i] == true)
        {
            cout << i;
        }
    }

}