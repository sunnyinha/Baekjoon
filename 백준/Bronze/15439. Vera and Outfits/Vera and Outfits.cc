#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    // n 바지, n 상의  총 매칭 경우의 수 n*n
    // 같은 색 바지, 상의 매칭 경우의 수 : n
    cout << n * n - n;

}