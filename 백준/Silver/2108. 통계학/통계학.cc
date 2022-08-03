#include <iostream>
#include<cmath>
#include<algorithm>
#include<memory.h>
using namespace std;

int main()
{
	int n;
	double sum=0;
	int avg;
	int max = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if (max < a[i]+4000)
		{
			max = a[i]+4000;
		}
	}
	
	avg = static_cast<int>(round(sum / n)); // 평균 반올림
	sort(a, a + n);
	cout <<  avg << endl; //평균 
	cout << a[n / 2] << endl; // 중앙값

	int* count = new int[8001];
	memset(count, 0, 8001*sizeof(int));
	int maxcount = 0;
	int counting = 1;
	int target;
	bool check = 0;
	for (int i = 0; i < n; i++)
	{
		count[a[i]+4000]++;
		if (maxcount < count[a[i]+4000])
		{
			maxcount = count[a[i]+4000];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (maxcount == count[a[i]+4000])
		{
			if (a[i] == a[i - 1] && i!=0) // 같은 숫자의 경우 패스
			{
				continue;
			}
			if (counting == 2)
			{
				cout << a[i] << endl; // 중복있을 때 최빈 2번째값
				check = 1;
				break;
			}
			target = a[i];
			counting++;
		}
	}
	if (check == 0)
	{
		cout << target << endl; // 중복없을 때 최빈값
	}
	cout <<(a[n - 1] - a[0]) << endl; // 범위
}