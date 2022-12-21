#include<iostream>
#include<algorithm>
using namespace std;

bool large(int a,int b)
{
	return a > b;
}
int main()
{
	int a[1001];
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	std::sort(a, a + n,large);
	cout << a[k - 1];

}