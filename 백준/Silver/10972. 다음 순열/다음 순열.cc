#include <iostream>
#include <algorithm>
using namespace std;

// 다음 순열 구하는 코드짜는 게 어렵다...stl 사용...
// 내일 같은 유형 다른 문제는 next_permutation 안쓰고 순열 코드 짜보기
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; 
	cin >> n;
	int idx = n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (next_permutation(a, a + n))
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