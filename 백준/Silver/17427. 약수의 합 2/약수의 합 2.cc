#include<iostream>
using namespace std;


int main()
{
	long long n;
	cin >> n;
	long long sum = 0;
	for (long i = 1; i <= n; i++) // 나열해서 패턴찾기
	{
		sum += i * (n / i);
	}
	cout << sum << endl;
	
}