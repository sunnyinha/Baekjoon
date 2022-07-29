#include <iostream>
using namespace std;
int dp[301][3];
int stair[301];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> stair[i];

    dp[1][2] = stair[1];

    for (int i = 2; i <= n; i++)
    {
        dp[i][1] = dp[i - 1][2] + stair[i]; // 한칸 튈때 이전 점수 + 계단
        dp[i][2] = max(dp[i - 2][1], dp[i - 2][2]) + stair[i]; // 두칸 뛸때 이전 점수 2개중 큰거+ 계단
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
    return 0;
}