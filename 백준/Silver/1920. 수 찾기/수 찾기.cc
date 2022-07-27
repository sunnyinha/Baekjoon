#include <iostream>
#include<algorithm>
using namespace std;

int binary(int a[], int first, int last, int key)
{
	while (first <= last)
	{
		int mid = (first + last) / 2;
		if (a[mid] == key)
		{
			return 1;
		}
		else if (a[mid] > key)
		{
			last = mid - 1;
		}
		else
		{
			first = mid + 1;
		}
	}
	return 0;
}

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int m;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		a[i] = k;
	}
	sort(a, a + n); // 퀵정렬로 해야함!(삽입정렬 느림)

	cin >> m;
	int* b = new int[m];
	for (int i = 0; i <m; i++)
	{
		int k;
		cin >> k;
		b[i] = k;
		
	}
	
	for (int i = 0; i < m; i++)
	{
		cout << binary(a, 0, n-1, b[i]) << '\n';
	}
	delete[] a;
	delete[] b;

}