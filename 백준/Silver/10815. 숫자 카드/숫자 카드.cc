#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	set<long> s1; // 이진탐색트리 기반(검색 빠름)/ 자동정렬
	for (int i = 0; i < n; i++)
	{
		long x;
		cin >> x;
		s1.insert(x);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		long x;
		cin >> x; 
		cout << s1.count(x) << " ";
		//count(x) x라는 원소의 유무 확인(있으면 1, 없으면 0 출력)
	}
}