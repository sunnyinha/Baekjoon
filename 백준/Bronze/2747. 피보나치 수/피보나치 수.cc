#include<iostream>
using namespace std;

unsigned long long  memo[10001];
unsigned long long  Fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}

	if (memo[n] != 0)
	{
		return memo[n];
	}
	else 
	{
		memo[n] = Fibo(n - 1) + Fibo(n - 2);
		return memo[n];
	}

	
}

int main()
{

	int n;
	cin >> n;

	cout << Fibo(n) << endl;
	
	return 0;
}