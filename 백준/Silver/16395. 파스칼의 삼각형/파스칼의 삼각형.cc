#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, k;
    int ans =1;
    cin >> n >> k;
    for (int i = 0; i < k-1; i++)
    {
        ans *= (n - i-1);
        ans /= i + 1;
       
    }
    cout << ans << '\n';
  
}