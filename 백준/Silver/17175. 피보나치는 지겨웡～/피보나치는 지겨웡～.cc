#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int count[51];
	count[0] = 1;
	count[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		count[i] = (count[i - 1] + count[i - 2] + 1) % 1000000007; //그림그려서 개수세고 규칙 찾기
	}
	cout << count[n];
	return 0;	

}