#include<iostream>
using namespace std;

// 고등 확통느낌으로 오른쪽에서 왼쪽 개수만큼 선 그릴 때 순서만 차례로 만들면 크로스 안생기고 최대개수 구할 듯..

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    while (n--)
    {
        long count = 1;
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            count *= m;
            count /= i;
            m--;
        }
      
        cout << count << '\n';
    }


}