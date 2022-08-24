#include <iostream>
using namespace std;

int main()
{
	long long count = 0;
	long n;
	cin >> n;
	for (long i = 1; i <= n; i *= 10)
	{
		count += n - i; //자릿수 세기
		count++;// 시작 0인 경우 하나씩 추가
	}	
	cout << count << '\n';
}