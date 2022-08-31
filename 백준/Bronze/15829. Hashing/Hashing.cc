#include<iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int l;
	long long muti = 1;
	long long hashvalue = 0;
	cin >> l;
	string k;
	cin >> k;

	for (int i = 0; i < l; i++)
	{
		if (i != 0)
		{
			muti *= 31;
			muti %= 1234567891; // 범위 안으로 크기 줄이기
		}
		hashvalue += muti * (static_cast<int>(k[i] - 96)%1234567891);
		hashvalue %= 1234567891;
		
	}
	cout << hashvalue  << '\n';
}

