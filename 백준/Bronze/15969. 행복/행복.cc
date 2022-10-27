#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int min = 1000;
    int max = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (min > x)
        {
            min = x;
        }
        if (max < x)
        {
            max = x;
        }
    }
    cout << max - min;
  
    
}