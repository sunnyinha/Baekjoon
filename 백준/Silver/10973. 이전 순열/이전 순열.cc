#include <iostream>
#include <algorithm>
using namespace std;

// 흠... 아직도 사전 순열 코드가 작동을 안한다..
// 내일 수강신청이라 일찍 자고 내일 다시 시도해봐야겠다.
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (prev_permutation(a, a + n))
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	else
	{
		cout << "-1" << endl;
	}
}