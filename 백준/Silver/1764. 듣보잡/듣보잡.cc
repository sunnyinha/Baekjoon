#include <iostream>
#include<string>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long n,m;
	long count = 0;
	cin >> n >>m;
    set<string> s1; //원본
	set<string>s2; // 겹치는 거(사전순 나열을 위해 set 사용)


	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		s1.insert(x);
	}
	for (int i = 0; i < m; i++)
	{
		string x;
		cin >> x;
		set<string>::iterator iter = s1.find(x);
		if (iter != s1.end())
		{
			s2.insert(* iter);
			count++;
		}
	}
	cout << count<< '\n';
	for (auto i = s2.begin(); i != s2.end(); i++)
	{
		cout << *i << '\n';
	}

}