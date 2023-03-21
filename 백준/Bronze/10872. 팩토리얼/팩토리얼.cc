#include<iostream>
using namespace std;

int fact(int depth)
{
	if (depth == 0) return 1;
	return depth * fact(depth - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << fact(n);
}