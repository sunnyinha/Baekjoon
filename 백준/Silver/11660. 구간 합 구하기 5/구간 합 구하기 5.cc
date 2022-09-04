#include <iostream>
#include<string>
using namespace std;

long a[1025][1025]; // 각각 좌표 값
long line[1025][1025]; // 줄마다 합 계산


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		    
			if (i == 1 && j == 1)
			{
				line[i][j] = a[i][j];
			}
			else
			{
				line[i][j] = line[i][j - 1] + a[i][j];
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		int x1, y1;
		int x2, y2;
		long ans = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++)
		{
			ans += (line[i][y2] - line[i][y1-1]); // 조건에 맞는 한줄씩 더하기
		}
		cout << ans << '\n';
		
	}
	

}