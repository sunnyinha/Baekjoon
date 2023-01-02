#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	std::cout.tie(0);

	int arr[51];
	int n;
	int max = 0;
	int cnt[2] = { 0, };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			cnt[0]++;
			max = arr[i];
		}
	}
	max = 0;
	for (int i = n-1; i >=0; i--)
	{
		if (max < arr[i])
		{
			cnt[1]++;
			max = arr[i];
		}
	}
	cout << cnt[0] << "\n" << cnt[1];
}
	