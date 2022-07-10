#include<iostream>
#include<string>
using namespace std;



int main()
{
	int n; // 도시의 수
	cin >> n;
	long long* l = new long long[n - 1]; // 길의 길이
	long long* p = new long long[n]; // 주유소 가격
	long long min= 1000000000; // 여기까지 최소 주유 리터당 가격
	long long suml = 0; // 총 길 길이
	long long sump = 0; // 총 주유 가격
	//각 길 순서대로 길의 길이 제시(n-1개)
	for (int i = 0; i < n - 1; i++)
	{
		cin >> l[i];
		suml += l[i];
	}
	//각 도시 번호 순서대로 주유소 가격 제시(n개)
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		if (min > p[i])
		{
			min = p[i];
		}
	}

	if (p[0] == min)
	{
		sump = p[0] * suml;
		cout << sump;
	}
	else
	{
		min = p[0];
		sump += min * l[0];
		for (int i = 1; i < n-1; i++)
		{
			
			if (min <p[i])
			{
				sump += min * l[i];
			}
			else
			{
				min = p[i];
				sump += min * l[i];
			}
				
		}
		cout << sump;
	}
	
	delete[] p;
	delete[] l;
}

	