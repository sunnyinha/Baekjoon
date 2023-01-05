#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
// 부등식 세워서 근의 공식 사용
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;
	while (n--)
	{
		int k;
		cin >> k;
		int x = (-1 + sqrt(1 + 4 * k)) / 2;
		cout << x << '\n';
		
	}
}
