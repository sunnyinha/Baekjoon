#include <iostream>
using namespace std;

int countzero;
int countone;
int memo[41];
int zero[41];
int one[41];
int fibonacci(int n)
{
	if (n == 0)
	{
		zero[0] = 1;
		return 0;
	}
	else if (n == 1)
	{
		one[1] = 1;
		return 1;
	}
	else
	{
		if (memo[n] == 0)
		{
			memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
			zero[n] = zero[n-1]+ zero[n-2];
			one[n] = one[n-1]+one[n-2];
		}
		
		return memo[n];
	}
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		countzero = 0;
		countone = 0;
		int n;
		cin >> n;
		fibonacci(n);
		cout << zero[n] << " " << one[n] << endl;
	}
}