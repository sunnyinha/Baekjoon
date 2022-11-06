#include<iostream>
using namespace std;

bool ex[2000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    int* a = new int[n];
    int x;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (x>=a[i]&&ex[x-a[i]] == true)
        {
            count++;
        }
        ex[a[i]] = true;

    }
    delete[] a;
    cout << count;

}